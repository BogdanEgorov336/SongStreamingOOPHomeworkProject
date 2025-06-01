#include "Song.h"

Song::Song() : Song("No name", "Unknown", "Unknown", 0.0, 0) {

	//name = "No name";
	//bandName = "Unknown";
	//albumName = "Unknown";
	//lengthInMin = 0.0;
	//totalPlays = 0;
}

Song::Song(string name) : Song(name, "Unknown", "Unknown", 0.0, 0) {

	//this->name = name;
	//bandName = "Unknown";
	//albumName = "Unknown";
	//lengthInMin = 0.0;
	//totalPlays = 0;
}

Song::Song(string name, double lengthInMin) {

	this->name = name;
	bandName = "Unknown";
	albumName = "Unknown";
	this->lengthInMin = lengthInMin;
	totalPlays = 0;
}

Song::Song(string name, double lengthInMin, unsigned long long totalPlays) {

	this->name = name;
	bandName = "Unknown";
	albumName = "Unknown";
	this->lengthInMin = lengthInMin;
	this->totalPlays = totalPlays;
}

Song::Song(string name, string bandName, string albumName,
	double lengthInMin, unsigned long long totalPlays) {

	this->name = name;
	this->bandName = bandName;
	this->albumName = albumName;
	this->lengthInMin = lengthInMin;
	this->totalPlays = totalPlays;
}

Song::Song(const Song& song)
	: Song(name, bandName, albumName, lengthInMin, totalPlays) {};

Song::~Song() {}

string Song::ToString() {

	return "Song name: " + name
		+ "\nGroup Name: " + bandName
		+ "\nAlbum-from name: " + albumName
		+ "\nLength of the song: " + to_string(lengthInMin) + " min"
		+ "\nTotal plays: " + to_string(totalPlays) + "\n";
}