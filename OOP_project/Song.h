#include "main.h"

class Song {

public:

	string name;
	string bandName;
	string albumName;
	double lengthInMin;
	unsigned long long totalPlays;

	Song();
	Song(string name);
	Song(string name, double lengthInMin);
	Song(string name, double lengthInMin, unsigned long long totalPlays);
	Song(string name, string bandName, string albumName,
		double lengthInMin, unsigned long long totalPlays);
	Song(const Song& song);
	~Song();

	string ToString();

};