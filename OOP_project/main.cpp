#pragma once
#include "Song.h"
#include "Initializer.h"

int main() {

	Song song;

	init(song);

	cout << song.ToString() << endl;

	system("pause");
	return 0;
}