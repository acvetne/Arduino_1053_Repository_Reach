#include <gamma.h>
#include <RGBmatrixPanel.h>
#include <Adafruit_GFX.h>


//ligma balls ;)


class Game{

public:


private:


};



class Level{

public:


private:

int pattern;

};



class Player{

public:


private:


};


class Electricity{

public:

Electricity(){
  size = 0;
  angle = 0;
  height = 0;
}
//used to make electricity of different sizes
Electricity(in_size, in_angle, in_height){
  size = in_size;
  angle = in_angle;
  height = in_height;
}

getSize(){
  return size;
}

getAngle(){
  return angle;
}

getHeight(){
  return height;
}

setSize(in_size){
  size = in_size;
}

setAngle(){in_angle){
  angle = in_angle;
}

setHeight(in_height){
  height = in_height;
}

private:
  int size = 0;
  int angle = 0;
  int height = 0;

};


class Rocket{

public:
//the little exclamation point that appears before a rocket
void warning(in_height){
  arr = {{1,1},
         {1,1},
         {1,1},
         {0,0},
         {1,1}};
}


private:


};
