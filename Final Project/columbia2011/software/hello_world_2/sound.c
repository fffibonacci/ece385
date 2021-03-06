#include "sound.h"

/*
int start_music_book[42] = {
    62,62,41,41,37,37,41,
    46,46,49,49,56,56,62,
    41,41,46,46,49,49,56,
    41,41,46,46,49,49,56,
    62,62,41,41,37,37,41,
    46,46,49,49,56,56,62};*/

int start_music_book[] = {
 //   49,49,49,49,49,49,62,62,49,49,41,41,83,83,62,83,98,98,74,74,
    66,66,66,74,74,83,83,49,49,41,37,46,41,49,62,56,66,66,62,62,
    83,98,74,74,66,66,74,74,83,49,49,41,41,37,37,46,46,41,41,49};
//    49,56,62,66,66,66,66,41,41,46,46,49,49,49,49,83,83,74,74,62};
/*    62,74,62,56,56,41,46,46,46,49,49,49,49,31,31,31,31,31,31,41,
    46,46,49,49,49,49,83,74,62,62,74,62,56,56,49,49,56,56,62,41,
    46,46,49,49,83,74,62,74,62,56,41,46,46,49,49,49,62,62,62,62};*/
    
int end_music_book[] = {
    37,37,37,37,31,31,37,37,41,41,41,49,41,41,41,49,
    56,56,49,56,56,56,56,66,74,83,66,74,74,74,74, 0,
    37,37,37,37,49,49,37,37,49,56,62,31,31,31,31,31,
    0, 62,62,62,56,49,49,41,41,37,37,49,56,56,37,37,
    37,31,31,37,37,41,41,41,49,41,41,41,49,56,56,49,
    56,56,56,56,66,74,83,66,74,74,74,74};
/*int end_music_book[] = {
    
} */   
    //66,66,33,66,37,37,39,37,66,66,33,33,66,66,66,66,
    //66,66,33,66,37,37,39,37,66,66,33,33,66,66,62,53};
/*    49,49,25,49,33,33,33,30,28,28,28,28,31,31,31,31,
    56,56,28,56,37,37,37,33,31,31,33,31,56,59,56,56,
    66,66,33,66,37,37,39,37,66,66,33,33,66,66,66,66,
    66,66,33,66,37,37,39,37,66,66,33,33,66,66,62,53};*/
//    44,44,39,39,37,37,37,59,46,46,41,41,37,41,46,46,
//    44,44,44,44,33,33,33,33,25,25,27,27,33,33,33,33,
//    49,49,44,44,41,41,41,66,49,49,46,46,41,46,49,49};

int win_sound_book[4] = {
    46,41,49,31};

int dead_sound_book[4] = {
    66,74,83,93};

void start_music()
{
    int i;
//    int divider;
    for(i=0; i<40; i++){
        usleep(110000);
        IOWR_16DIRECT(AUDIO_BASE,0,194);
        usleep(50);
        IOWR_16DIRECT(AUDIO_BASE,0,start_music_book[i]);
    }
}

void end_music()
{
    int i;
//    int divider;
    for(i=0; i<92; i++){
        usleep(150000);
        IOWR_16DIRECT(AUDIO_BASE,0,194);
        usleep(50);
        IOWR_16DIRECT(AUDIO_BASE,0,end_music_book[i]);
    }
}


void explo_sound() 
{
    IOWR_16DIRECT(AUDIO_BASE,0,194);
    usleep(50);
    IOWR_16DIRECT(AUDIO_BASE,0,97);
}

void dead_sound()
{
    int i;
//    int divider;
    for(i=0; i<4; i++){
        usleep(100000);
        IOWR_16DIRECT(AUDIO_BASE,0,194);
        usleep(50);
        IOWR_16DIRECT(AUDIO_BASE,0,dead_sound_book[i]);
    }
}

void win_sound()
{
    int i;
//    int divider;
    for(i=0; i<4; i++){
        usleep(100000);
        IOWR_16DIRECT(AUDIO_BASE,0,194);
        usleep(50);
        IOWR_16DIRECT(AUDIO_BASE,0,win_sound_book[i]);
    }
}



    
