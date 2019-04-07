#ifndef HELLO_WORLD_H_
#define HELLO_WORLD_H_
#define CONCRETE 63
enum state{LIVE  ,DEAD}; 

struct player1{
   int posX;  
   int posY; 
   int pos1X;
   int pos1Y;   
   int state;
}p1;
struct player2{
   int posX;  
   int posY; 
   int pos1X;
   int pos1Y;
   int speed;
   int bomb;
   int power;
   int state;
}p2;
struct player3{
   int posX;  
   int posY; 
   int pos1X;
   int pos1Y;   
   int state;
   int ready;
}p3;
struct player4{
   int posX;  
   int posY; 
   int pos1X;
   int pos1Y;   
   int state;
   int ready;
}p4;

struct record{
  int p1;
  int p2;
  int p3;
  int p4; 
}r;

struct game{
  int step;
  int start_time;
  int current_time;
}g;
void reset();
void setmap();
void mapgen();
void winf();
void losef();
void set_tile(int x,int y,int thing); 

enum tile {EMPTY  ,BOMB  ,FIRE   ,BRICK   ,
           POWERUP,BOMBUP,SPEEDUP,TBD1    ,
           TBD2   ,TBD3  ,TBD4   ,TBD5    ,
           TBD6   ,TBD7  ,TBD8   ,TBD9    };

enum player {player1, player2, player3, player4};
const int one[5][3]={
{0,63,0},
{0,63,0},
{0,63,0},
{0,63,0},
{0,63,0}
};
const int two[5][3]={
{63,63,63},
{ 0, 0,63},
{63,63,63},
{63, 0, 0},
{63,63,63}
};
const int three[5][3]={
{63,63,63},
{ 0, 0,63},
{63,63,63},
{ 0, 0,63},
{63,63,63}
};
const int four[5][3]={
{63, 0,63},
{63, 0,63},
{63,63,63},
{ 0, 0,63},
{ 0, 0,63}
};
const int five[5][3]={
{63,63,63},
{63, 0, 0},
{63,63,63},
{ 0, 0,63},
{63,63,63}
};
const int six[5][3]={
{63,63,63},
{63, 0, 0},
{63,63,63},
{63, 0,63},
{63,63,63}
};
const int seven[5][3]={
{63,63,63},
{ 0, 0,63},
{ 0, 0,63},
{ 0, 0,63},
{ 0, 0,63}
};
const int eight[5][3]={
{63,63,63},
{63, 0,63},
{63,63,63},
{63, 0,63},
{63,63,63}
};
const int nine[5][3]={
{63,63,63},
{63, 0,63},
{63,63,63},
{ 0, 0,63},
{63,63,63}
};
const int zero[5][3]={
{63,63,63},
{63, 0,63},
{63, 0,63},
{63, 0,63},
{63,63,63}
};

const int win[15][20] ={
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0,63, 0,63, 0,63, 0,63,63,63, 0,63, 0, 0, 0,63, 0,63, 0, 0},
  {0,63, 0,63, 0,63, 0, 0,63, 0, 0,63,63, 0, 0,63, 0,63, 0, 0},
  {0,63, 0,63, 0,63, 0, 0,63, 0, 0,63, 0,63, 0,63, 0,63, 0, 0},
  {0,63, 0,63, 0,63, 0, 0,63, 0, 0,63, 0, 0,63,63, 0, 0, 0, 0},
  {0, 0,63, 0,63, 0, 0,63,63,63, 0,63, 0, 0, 0,63, 0,63, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

const int lose[15][20] ={
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0,63, 0, 0, 0,63,63,63,63, 0,63,63,63,63, 0,63,63,63, 0, 0},
  {0,63, 0, 0, 0,63, 0, 0,63, 0,63, 0, 0, 0, 0,63, 0, 0, 0, 0},
  {0,63, 0, 0, 0,63, 0, 0,63, 0,63,63,63,63, 0,63,63,63, 0, 0},
  {0,63, 0, 0, 0,63, 0, 0,63, 0, 0, 0, 0,63, 0,63, 0, 0, 0, 0},
  {0,63,63,63, 0,63,63,63,63, 0,63,63,63,63, 0,63,63,63, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
const int initial[15][20] = {
  {63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},  
  {63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,0} 
}; 
                              
int control_array[15][20] = {
  {63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},
  {63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63, 0,63,0},
  {63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,63,0},  
  {63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,0}
}; 

#endif /*HELLO_WORLD_H_*/
