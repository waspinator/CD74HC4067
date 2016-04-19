/*
  Multiplexer.cpp - Library for using the CD74HC4067 multiplexer.
  April 18, 2016.
  LGPL 3.0
*/

#include "Arduino.h"
#include "CD74HC4067.h"

int _g_channel_truth_table[16][4] = {
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

CD74HC4067::CD74HC4067(int s0, int s1, int s2, int s3)
{
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;
}

void CD74HC4067::channel(int channel)
{
  digitalWrite(_s0, _g_channel_truth_table[channel][0]);
  digitalWrite(_s1, _g_channel_truth_table[channel][1]);
  digitalWrite(_s2, _g_channel_truth_table[channel][2]);
  digitalWrite(_s3, _g_channel_truth_table[channel][3]);
}
