#include "music.h"
Music::Music()
{
    cdName = "";
    artistsName = "";
    numberOfSongsOnCD = 0;
    yearCDCameOut = 0;
    favoriteSongOnCD = "";
    cout << "In constructor\n";
}

Music::Music(const Music & Music)
{
    cout << "In copy constructor\n";
}

Music::~Music()
{
    cout << "In destructor\n";
}

//Getter Methods
string Music::getcdName()
{
    return cdName;
}

string Music::getartistsName()
{
    return artistsName;
}

int Music::getnumberOfSongsOnCD()
{
    return numberOfSongsOnCD;
}

int Music::getyearCDCameOut()
{
    return yearCDCameOut;
}

string Music::getfavoriteSongOnCD()
{
    return favoriteSongOnCD;
}

//Setter Methods
void Music::setcdName(string CDname)
{
    cdName = CDname;
}

void Music::setartistsName(string aName)
{
    artistsName = aName;
}

void Music::setnumberOfSongsOnCD(int numberofSongs)
{
    numberOfSongsOnCD = numberofSongs;
}

void Music::setyearCDCameOut(int year)
{
    yearCDCameOut = year;
}

void Music::setfavoriteSongOnCD(string favSong)
{
    favoriteSongOnCD = favSong;
}

//Output Method
void Music::printAll()
{
    cout << "CD Name: " << cdName << endl;
    cout << "Artist's Name: " << artistsName << endl;
    cout << "The CD has " << numberOfSongsOnCD << "songs." << endl;
    cout << "The CD was released in the year " << yearCDCameOut << endl;
    cout << "My favorite song on the CD is " << favoriteSongOnCD << endl << endl;
}
void Music::printInteresting()
{
    cout << "Favorite CD Name: " << cdName << endl;
    cout << "My favorite song on my favorite CD is " << favoriteSongOnCD << endl;
}