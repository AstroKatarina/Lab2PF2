#include <stdio.h>
#include <iostream>
#include "music.h"
int main()
{
    printf("Katarina Humbert, UARK ID: 010984092");
    //Declare Objects
    Music song1;
    Music song2(song1);
    //Call Getters
    song1.getcdName();
    song1.getartistsName();
    song1.getnumberOfSongsOnCD();
    song1.getyearCDCameOut();
    song1.getfavoriteSongOnCD();
    //Call Setters
    song1.setcdName("Queen - Greatest Hits");
    song1.setartistsName("Queen");
    song1.setnumberOfSongsOnCD(20);
    song1.setyearCDCameOut(2004);
    song1.setfavoriteSongOnCD("Somebody To Love");
    //Call Output Method
    song1.printAll();
    song1.printInteresting();
    return 0;
}
