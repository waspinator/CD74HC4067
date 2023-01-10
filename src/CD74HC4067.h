/*
  Multiplexer.h - Library for using the CD74HC4067 multiplexer.
  April 18, 2016.
  LGPL 3.0
*/

#ifndef CD74HC4067_h
#define CD74HC4067_h

#include "Arduino.h"
#include <inttypes.h>

extern uint8_t _g_channel_truth_table[16][4];

class CD74HC4067
{
  public:
    CD74HC4067(uint8_t s0, uint8_t s1, uint8_t s2, uint8_t s3);
    void channel(uint8_t channel);
  private:
  	uint8_t _s0;
  	uint8_t _s1;
  	uint8_t _s2;
  	uint8_t _s3;
  	uint8_t _channel;
	uint8_t bytes;
};

#endif
