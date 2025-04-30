#include <iostream>
#include <string>
using namespace std;

class Song {

public:

	string songName;
	string groupName;
	string albumFromName;
	double lengthInMin;
	unsigned long long totalPlays;


	string ToString() {

		return "Song name: " + songName
			+ "\nGroup Name: " + groupName
			+ "\nAlbum-from name: " + albumFromName
			+ "\nLength of the song: " + to_string(lengthInMin) + " min"
			+ "\nTotal plays: " + to_string(totalPlays) + "\n";
	}
};