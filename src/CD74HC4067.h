/*
  Multiplexer.h - Library for using the CD74HC4067 multiplexer.
  April 18, 2016.
  LGPL 3.0
*/

#ifndef CD74HC4067_h
#define CD74HC4067_h

#include "Arduino.h"

extern int _g_channel_truth_table[16][4];

class CD74HC4067
{
  public:
    CD74HC4067(int s0, int s1, int s2, int s3);
    void channel(int channel);
  private:
  	int _s0;
  	int _s1;
  	int _s2;
  	int _s3;
  	int _channel;
};

#endif
