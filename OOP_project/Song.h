#include "main.h"

class Song {

private:

	string songName;
	string bandName;
	string albumFromName;
	double lengthInMin;
	unsigned long long totalPlays;

public:

	string ToString();

	Song();
	Song(string songName);
	Song(string songName, double lengthInMin);
	Song(string songName, double lengthInMin, unsigned long long totalPlays);
	Song(string songName, string bandName, string albumFromName,
		double lengthInMin, unsigned long long totalPlays);
	~Song();


	//void ChangeValues() {

	//	songName = "song2";
	//	bandName = "Unknown";
	//	albumFromName = "Unknown";
	//	lengthInMin = 2.23;
	//	totalPlays = 1'948;
	//}
};