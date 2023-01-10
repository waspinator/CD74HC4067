/*
  Multiplexer.cpp - Library for using the CD74HC4067 multiplexer.
  April 18, 2016.
  LGPL 3.0
*/

#include "Arduino.h"
#include "CD74HC4067.h"

uint8_t _g_channel_truth_table[16][4] = {
  // s0, s1, s2, s3     channel
    {0,  0,  0,  0}, // 0
    {1,  0,  0,  0}, // 1
    {0,  1,  0,  0}, // 2
    {1,  1,  0,  0}, // 3
    {0,  0,  1,  0}, // 4
    {1,  0,  1,  0}, // 5
    {0,  1,  1,  0}, // 6
    {1,  1,  1,  0}, // 7
    {0,  0,  0,  1}, // 8
    {1,  0,  0,  1}, // 9
    {0,  1,  0,  1}, // 10
    {1,  1,  0,  1}, // 11
    {0,  0,  1,  1}, // 12
    {1,  0,  1,  1}, // 13
    {0,  1,  1,  1}, // 14
    {1,  1,  1,  1}  // 15
};

CD74HC4067::CD74HC4067(uint8_t s0, uint8_t s1, uint8_t s2, uint8_t s3)
{
  if(s0 < 255) { pinMode(s0, OUTPUT); _s0 = s0; bytes++; }
  if(s1 < 255) { pinMode(s1, OUTPUT); _s1 = s1; bytes++; }
  if(s2 < 255) { pinMode(s2, OUTPUT); _s2 = s2; bytes++; }
  if(s3 < 255) { pinMode(s3, OUTPUT); _s3 = s3; bytes++; }
}

void CD74HC4067::channel(uint8_t channel)
{
  if(bytes > 0) digitalWrite(_s0, _g_channel_truth_table[channel][0]);
  if(bytes > 1) digitalWrite(_s1, _g_channel_truth_table[channel][1]);
  if(bytes > 2) digitalWrite(_s2, _g_channel_truth_table[channel][2]);
  if(bytes > 3) digitalWrite(_s3, _g_channel_truth_table[channel][3]);
}
