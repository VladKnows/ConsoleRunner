#include <iostream>
#include <conio.h>
#include <iomanip>
#include <thread>
#include "Header.h"
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main()
{
	cout << "Press A S and D to move!" << '\n';
	cout << "PLAY IN FULLSCREEN!" << '\n';
	cout << "Press any key to play:" << '\n';
	while (!_kbhit()) {

	}
	int poz = 0, r = 100;
	bool ok = 1;
	int s1 = 25, s2 = 25, s3 = 25, s4 = 25, v1 = 6, v2 = 6;
	while (ok) {
		int randomevent = rand() % r;
		Action(s1, v1, s2, s3, v2, s4, ok, poz);

		switch (randomevent) {
		case 0: if (poz >= 500) r = 75; eventleft(s1, v1, s2, s3, v2, s4, poz, ok); break;
		case 1: if (poz >= 500) r = 75; eventright(s1, v1, s2, s3, v2, s4, poz, ok); break;
		}

	}
	cout << '\n' << '\n';
	afisF();
	int v[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int nr = 0;
	while (poz) {
		nr++;
		v[nr] = poz % 10;
		poz /= 10;
	}
	afisN(v, nr);
	sleep_for(seconds(3));
	return 0;
}
