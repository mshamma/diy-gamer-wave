#include "Gamer.h"

Gamer gamer;

#define NUMFRAMES 10

/* Each of these blocks of code
 corresponds to one frame of the
 animation.

 A "1" turns the light in that
 position on, a "0" turns it off.
 */
byte frames[NUMFRAMES][8] = {
  {
    B11000000,
    B00100000,
    B01110000,
    B10010000,
    B00000000,
    B10000011,
    B11001101,
    B01110111
  },
  {
    B01100000,
    B11110000,
    B11111000,
    B11001000,
    B10011000,
    B11000001,
    B11100111,
    B11111111
  },
  {
    B00110000,
    B01111000,
    B11111100,
    B11001100,
    B10011100,
    B10011000,
    B11000011,
    B11111111
  },
  {
    B00000000,
    B01111000,
    B11111100,
    B11001110,
    B10011110,
    B10111100,
    B11011001,
    B11111111
  },
  {
    B00000000,
    B00111000,
    B01111100,
    B11101100,
    B11111110,
    B10111110,
    B11011101,
    B11111111
  },
  {
    B00000000,
    B00011100,
    B01111110,
    B11101110,
    B11111111,
    B10111110,
    B11011101,
    B11111111
  },
  {
    B00000000,
    B00011100,
    B01111110,
    B11110110,
    B11111111,
    B11011011,
    B11111101,
    B11111111
  },
  {
    B00000000,
    B00000110,
    B01111111,
    B11111011,
    B11111111,
    B11111011,
    B11101111,
    B11111111
  },
  {
    B00000000,
    B00000011,
    B01111111,
    B11110111,
    B11111111,
    B11101101,
    B11111111,
    B11111111
  },
  {
    B00000000,
    B00000001,
    B00011111,
    B01110111,
    B11111111,
    B11101101,
    B11111111,
    B11111111
  }
};

void setup() {
  /* This code initialises the DIY Gamer
   Kit.
   */
  gamer.begin();
}

void loop() {
  /* This loop runs through the frames
   of the animation one by one. For each
   one, it draws the frame on the screen
   and waits for the number of
   milliseconds in the delay instruction.
   */
  for (int i = 0; i < NUMFRAMES; i++) {
    gamer.printImage(frames[i]);
    delay(200);
  }
}
