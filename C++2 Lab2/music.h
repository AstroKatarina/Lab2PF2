#include <iostream>
using namespace std;
class Music
{
public:
   // Constructor methods
   Music();
   Music(const Music & music);
   ~Music();
   
    // Get methods
   string getcdName();
   string getartistsName();
   int getnumberOfSongsOnCD();
   int getyearCDCameOut();
   string getfavoriteSongOnCD();
   

   // Set methods
   void setcdName(string CDname);
   void setartistsName(string aName);
   void setnumberOfSongsOnCD(int numberofSongs);
   void setyearCDCameOut(int year);
   void setfavoriteSongOnCD(string favSong);
   
   // Output methods
   void printAll();
   void printInteresting();

private:
   // Object attributes
    string cdName;
    string artistsName;
    int numberOfSongsOnCD; 
    int yearCDCameOut;
    string favoriteSongOnCD;
};