/*

    APara - A Parachute game for Arduboy
    Copyright (C) 2016  Leonhard Vogt

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 3 as 
    published by the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
 */
#include "Arduboy.h"

PROGMEM const byte background[128*8] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,251,251,251,251,59,15,3,15,27,59,107,107,107,111,111,63,15,63,111,239,239,239,239,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,95,79,103,39,55,47,79,15,143,31,15,31,15,15,7,7,7,15,31,31,31,31,47,191,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,248,240,224,224,128,134,230,224,230,230,224,224,131,131,226,224,225,243,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,255,249,253,48,152,200,228,244,248,254,255,248,254,255,255,252,254,255,254,255,254,252,249,250,254,253,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,127,127,63,63,63,63,63,63,31,31,31,63,47,15,7,31,15,15,31,159,207,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,15,3,240,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,254,252,254,249,248,252,254,252,252,254,242,208,224,128,0,214,252,248,226,198,14,62,253,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,160,80,169,83,171,83,171,87,167,87,143,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,191,95,175,79,175,87,167,87,160,64,163,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,1,0,1,192,240,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,248,249,248,253,252,249,242,245,194,5,2,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,116,84,84,84,84,92,95,215,87,87,87,127,127,251,219,223,215,247,247,255,255,247,119,119,119,247,247,247,255,255,255,255,255,247,247,247,247,247,255,255,255,247,247,247,119,127,127,123,123,123,123,251,255,255,255,247,119,127,127,127,127,119,119,247,247,255,255,255,255,255,255,251,251,251,251,187,187,187,191,191,255,247,247,247,247,247,255,255,127,119,119,127,223,223,95,95,87,119,84,92,92,220,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,247,181,181,181,181,181,191,191,251,251,251,187,187,191,255,255,255,255,247,247,247,247,247,247,247,255,255,255,255,254,222,222,222,222,222,222,222,223,255,255,255,255,247,247,247,247,247,255,255,255,255,255,255,255,247,247,247,247,247,247,247,255,255,255,255,255,254,254,254,254,238,239,239,239,239,239,239,255,255,253,253,253,253,255,255,239,239,239,239,239,237,237,237,253,189,181,183,183,183,183,247,247,0,0,0,0,0,0,0,0,0,0,0,0,0,
  };

#define STATIC_SPRITE(name, x, y, w, h, ...) PROGMEM const byte name[w*h/8+4] = {x, y, w, h, __VA_ARGS__}

STATIC_SPRITE(BT0, 23, 40, 21, 16,
              56,124,126,246,254,252,156,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
              0,6,7,7,7,7,7,15,30,118,102,6,6,6,6,6,6,6,6,6,0);

STATIC_SPRITE(BT1, 44, 40, 21, 16,
              56,124,254,218,158,158,204,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
              0,7,7,7,7,63,63,6,6,6,6,6,6,6,6,6,6,6,6,6,0);

STATIC_SPRITE(BT2, 65, 40, 21, 16,
              0,0,60,126,218,222,158,140,128,0,0,0,0,0,0,0,0,0,0,0,0,
              0,6,102,119,31,15,7,7,7,6,6,6,6,6,6,6,6,6,6,6,0);

STATIC_SPRITE(T11, 81,  2, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T12, 71,  3, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T13, 62,  7, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T14, 53, 13, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T15, 45, 21, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T16, 40, 31, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T17, 35, 43, 6, 8, 63, 33, 33, 33, 33, 63);

STATIC_SPRITE(T21, 85,  8, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T22, 77,  8, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T23, 70, 13, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T24, 63, 20, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T25, 59, 31, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T26, 55, 43, 6, 8, 63, 33, 33, 33, 33, 63);

STATIC_SPRITE(T31, 93, 13, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T32, 86, 16, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T33, 79, 22, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T34, 77, 31, 6, 8, 63, 33, 33, 33, 33, 63);
STATIC_SPRITE(T35, 76, 43, 6, 8, 63, 33, 33, 33, 33, 63);

const byte * const Tracks[3][7] = {
  {T11, T12, T13, T14, T15, T16, T17},
  {0, T21, T22, T23, T24, T25, T26},
  {0, 0, T31, T32, T33, T34, T35}
};

// Make an instance of arduboy used for many functions
Arduboy arduboy;

byte frame = 0;
byte boat_pos = 0;
unsigned short score = 1234;
byte troopers[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
byte shark = 0;
byte miss = 3;
byte capture = 2;

void new_game(char game_type){
  frame = 0;
  score = 0;
  for (byte i=0; i<sizeof(troopers); i++){
    troopers[i] = i+1;
  }
  troopers[sizeof(troopers)-1] = 0;
  shark = 0;
  miss = 0;
  capture = 2;
}

void make_trooper(byte track, byte pos){
  byte i = troopers[0];
  if (i == 0) return; // no free slots
  troopers[0] = troopers[i];
  troopers[i] = (track << 6) | (pos << 3);
}

void kill_trooper(byte i){
  troopers[i] = troopers[0];
  troopers[0] = i;
}

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(8);
  draw();
  arduboy.display();
}

void draw_static_sprite(byte* sprite){
  arduboy.drawBitmap(pgm_read_byte(sprite+0), pgm_read_byte(sprite+1), 
                     sprite+4, 
                     pgm_read_byte(sprite+2), pgm_read_byte(sprite+3), 
                     0);
}

void drawScore(){
  unsigned int sc = score;
  arduboy.drawChar(37, 2, sc%10+'0', 0, 1, 1);
  sc /= 10;
  arduboy.drawChar(30, 2, sc%10+'0', 0, 1, 1);
  sc /= 10;
  arduboy.drawChar(23, 2, sc%10+'0', 0, 1, 1);
  sc /= 10;
  arduboy.drawChar(16, 2, sc%10+'0', 0, 1, 1);
}

void draw() {
  byte* buffer = arduboy.getBuffer();
  memcpy_P(buffer, background, sizeof(background));

  switch(frame & 3) {
    case 0:
    case 3:
    /* delete top rotor */
    buffer[90] |= 4;
    buffer[91] |= 4;
    buffer[92] |= 4;
    buffer[93] |= 4;
    buffer[94] |= 4;
    buffer[98] |= 4;
    buffer[99] |= 4;
    buffer[100] |= 4;
    buffer[101] |= 4;
    buffer[102] |= 4;
    if (frame & 1) break;
    case 1:
    /* delete front rotor */
    buffer[100] |= 16;
    buffer[101] |= 16;
    buffer[102] |= 16;
    buffer[103] |= 16;
    buffer[104] |= 16;
    buffer[108] |= 16;
    buffer[109] |= 16;
    buffer[110] |= 16;
    buffer[111] |= 16;
    buffer[112] |= 16;
    case 2:
    break;
  }

  const byte *const boats[] = {BT0, BT1, BT2};
  draw_static_sprite(boats[boat_pos]);
  
  for(byte i=0; i<sizeof(troopers); i++){
    byte trooper = troopers[i];
    if (!(trooper & 0b11000000)) continue;
    byte track = trooper >> 6;
    byte pos = (trooper >> 3) & 7;
    
    draw_static_sprite(Tracks[track-1][pos]);
  }
  drawScore();
}

#define LEFT_A_BUTTON_PRESSED 1
#define RIGHT_B_BUTTON_PRESSED 2

byte process_input(){
  static byte left = 0;
  static byte right=0;

  byte result = 0;
  
  if(arduboy.pressed(LEFT_BUTTON) || arduboy.pressed(A_BUTTON)) {
    if (left == 0){
      left = 1;
      result |= LEFT_A_BUTTON_PRESSED;
    }
  }
  else {
    left = 0;
  }
    
  if(arduboy.pressed(B_BUTTON) || arduboy.pressed(RIGHT_BUTTON)) {
     if (right == 0){
      right = 1;
      result |= RIGHT_B_BUTTON_PRESSED;
    }
  }
  else {
    right = 0;
  }

  return result;
}

void update_game(){
    frame += 1;

    if(shark){
      if(frame % 4 == 0){
        shark -= 1;
        if(shark){
          arduboy.tunes.tone(222, 200);
        }
        else
        {
          miss += 1;
          arduboy.tunes.tone(222, 400);
        }
      }
    }
    else{
      byte sound = 0;
      for(byte i=0; i<sizeof(troopers); i++){
        byte trooper = troopers[i];
        if (!(trooper & 0b11000000)) continue;

        trooper += 1;
        troopers[i] = trooper;
        
        byte track = trooper >> 6;
        byte pos = (trooper >> 3) & 7;

        if(!(trooper & 7)) {
          /* a trooper has just moved */
          sound = 1;
        }

        if(pos == 6){
          if (boat_pos == track-1){
            capture -=1;
            if (capture == 0){
              score += 1;
              kill_trooper(i);
              capture = 2;
            }
          }
        }
        else if (pos == 7){
           shark = track +2;
           kill_trooper(i);
        }
        /* TODO: tree handling */
      }

      /* new troops */
      if (frame % 32 == 2) {
        make_trooper(1, 0);
        sound = 1;
      }
      if (frame % 32 == 24) {
        make_trooper(2, 1);
        sound = 1;
      }
      if (frame % 32 == 28) {
        make_trooper(3, 2);
        sound = 1;
      }
      
    if (sound)
      arduboy.tunes.tone(523, 25);
    }
}

void loop() {
  // put your main code here, to run repeatedly:

  byte input = process_input();

  if (miss >= 3){
    if(input == LEFT_A_BUTTON_PRESSED) {
      new_game('A');
      draw();
      arduboy.display();  
    }
    if(input == RIGHT_B_BUTTON_PRESSED) {
      new_game('B');
      draw();
      arduboy.display();  
    }
  }
  else{
    byte boat_moved = 0;
  
    if(input == LEFT_A_BUTTON_PRESSED && boat_pos > 0){
          boat_pos--;
          boat_moved = 1;    
    }
    if(input == RIGHT_B_BUTTON_PRESSED && boat_pos < 2){
          boat_pos++;
          boat_moved = 1;    
    }
  
    if (arduboy.nextFrame()){
      update_game();
      draw();
      arduboy.display();  
    }
    else if (boat_moved){
      draw();
      arduboy.display();
    }
  }
}