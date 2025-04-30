#include "Song.h"

int main() {

	Song song1;

	song1.songName = "Come as you are";
	song1.groupName = "Nirvana";
	song1.albumFromName = "Nevermind";
	song1.lengthInMin = 3.38;
	song1.totalPlays = 1'592'483'296;

	cout << song1.ToString() << endl;

	system("pause");
	return 0;
}