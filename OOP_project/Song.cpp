#include "Song.h"

Song::Song() {

	songName = "No name";
	bandName = "Unknown";
	albumFromName = "Unknown";
	lengthInMin = 0.0;
	totalPlays = 0;
}

Song::Song(string name) {

	songName = name;
	bandName = "Unknown";
	albumFromName = "Unknown";
	lengthInMin = 0.0;
	totalPlays = 0;
}

Song::Song(string name, double length) {

	songName = name;
	bandName = "Unknown";
	albumFromName = "Unknown";
	lengthInMin = length;
	totalPlays = 0;
}

Song::Song(string name, double length, unsigned long long plays) {

	songName = name;
	bandName = "Unknown";
	albumFromName = "Unknown";
	lengthInMin = length;
	totalPlays = plays;
}

Song::Song(string name, string band, string album,
	double length, unsigned long long plays) {

	songName = name;
	bandName = band;
	albumFromName = album;
	lengthInMin = length;
	totalPlays = plays;
}

Song::~Song() {}

string Song::ToString() {

	return "Song name: " + songName
		+ "\nGroup Name: " + bandName
		+ "\nAlbum-from name: " + albumFromName
		+ "\nLength of the song: " + to_string(lengthInMin) + " min"
		+ "\nTotal plays: " + to_string(totalPlays) + "\n";
}