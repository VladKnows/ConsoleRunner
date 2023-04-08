#include <iostream>
#include <conio.h>
#include <iomanip>
#include <thread>
#include "Header.h"
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

void Action(int& s1, int& v1, int& s2, int& s3, int& v2, int& s4, bool& ok, int& poz) {
	poz++;
	int randomwall = rand() % 80;
	int n = 0;
	cout << setw(60);
	afisM(s1, v1, s2);
	cout << "V";
	afisM(s3, v2, s4);
	cout << '\n';

	if (!_kbhit()) {
		sleep_for(microseconds(80000));
		goto next;
	}
	n = _getch();
next:

	switch (n) {
	case 'a': s1--; v1++; s2--; s3++; v2--; s4++; break;
	case 'd': s1++; v1--; s2++; s3--; v2++; s4--; break;
	}

	switch (randomwall) {
	case 0: v1++; s2--; break;
	case 1: v1++; s2--; break;
	case 2: v2++; s3--; break;
	case 3: v2++; s3--; break;
	case 4: v1--; s2++; break;
	case 5: v2--; s3++; break;
	}

	if (s2 < 0 || s3 < 0)
		ok = 0;
}

void afis(int n, char c) {
	if (c == ' ') {
		for (int i = 1; i <= n; i++) {
			cout << ' ';
		}
	}
	else
	{
		for (int i = 1; i <= n; i++) {
			short x = rand() % 3;
			switch (x) {
			case 0: {cout << "\033[1;31m#"; break; }
			case 1: {cout << "\033[1;32m%"; break; }
			case 2: {cout << "\033[1;33m*"; break; }
			}
			cout << "\033[0m";
		}
	}
}

void afisM(int p1, int p2, int p3) {
	afis(p1, ' ');
	afis(p2, 'r');
	if (p2 < 0) {
		p3 += p2;
	}
	afis(p3, ' ');
}

void afisF() {
	cout << "#######  #   #     #  #######    #            #######  #######  #######  #######  ####### " << '\n';
	cout << "#            ##    #  #     #    #            #        #        #     #  #     #  #       " << '\n';
	cout << "#        #   # #   #  #     #    #            #        #        #     #  #     #  #       " << '\n';
	cout << "#######  #   #  #  #  #######    #            #######  #        #     #  #######  ####### " << '\n';
	cout << "#        #   #   # #  #     #    #                  #  #        #     #  ###      #       " << '\n';
	cout << "#        #   #    ##  #     #    #                  #  #        #     #  #  ##    #       " << '\n';
	cout << "#        #   #     #  #     #    ######       #######  #######  #######  #    ##  ####### " << '\n';
	cout << '\n';
}

void afisN(int v[], int nr) {
	while (nr) {
		switch (v[nr]) {
		case 0: {
			cout << "#######" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#######" << '\n';
			break;
		}
		case 1: {
			cout << "     #  " << '\n';
			cout << "    ##  " << '\n';
			cout << "   # #  " << '\n';
			cout << "  #  #  " << '\n';
			cout << "     #  " << '\n';
			cout << "     #  " << '\n';
			cout << "     #  " << '\n';
			break;
		}
		case 2: {
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "#######" << '\n';
			cout << "#      " << '\n';
			cout << "#      " << '\n';
			cout << "#######" << '\n';
			break;
		}
		case 3: {
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "#######" << '\n';
			break;
		}
		case 4: {
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			break;
		}
		case 5: {
			cout << "#######" << '\n';
			cout << "#      " << '\n';
			cout << "#      " << '\n';
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "#######" << '\n';
			break;
		}
		case 6: {
			cout << "#######" << '\n';
			cout << "#      " << '\n';
			cout << "#      " << '\n';
			cout << "#######" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#######" << '\n';
			break;
		}
		case 7: {
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			break;
		}
		case 8: {
			cout << "#######" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#######" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#######" << '\n';
			break;
		}
		case 9: {
			cout << "#######" << '\n';
			cout << "#     #" << '\n';
			cout << "#     #" << '\n';
			cout << "#######" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			cout << "      #" << '\n';
			break;
		}
		}
		cout << '\n';
		nr--;
	}
}

void afisEL(int s1, int v1, int s2, int s3, int v2, int s4) {
	for (int i = 1; i <= 9; i++) {
		cout << setw(60);
		if (i != 7)
			cout << "**";
		else
			cout << "  ";
		afisM(s1 - 1, v1, s2);
		cout << "V";
		afisM(s3, v2, s4);
		cout << '\n';
		sleep_for(microseconds(80000));
	}
}

void afisER(int s1, int v1, int s2, int s3, int v2, int s4) {
	for (int i = 1; i <= 9; i++) {
		cout << setw(60);
		afisM(s1, v1, s2);
		cout << "V";
		afisM(s3, v2, s4 - 1);
		if (i != 7)
			cout << "**";
		else
			cout << "  ";
		cout << '\n';
		sleep_for(microseconds(80000));
	}
}

void eventleft(int& s1, int& v1, int& s2, int& s3, int& v2, int& s4, int& poz, bool& ok) {
	int v1r = v1;
	afisEL(s1, v1, s2, s3, v2, s4);
	for (int i = 1; i <= 25; i++) {
		Action(s1, v1, s2, s3, v2, s4, ok, poz);
	}
	int var = (s2 + s3) / 2;
	var += var / 4;
	v1 += var;
	s2 -= var;
	for (int i = 1; i <= 3; i++) {
		Action(s1, v1, s2, s3, v2, s4, ok, poz);
	}
	int ok1 = rand() % 2;
	if (ok1 == 0) {
		for (int i = 1; i <= var; i++) {
			v1--;
			s2++;
			Action(s1, v1, s2, s3, v2, s4, ok, poz);
		}
	}
	if (ok1 == 1) {
		v1 -= var;
		s2 += var;
	}
}

void eventright(int& s1, int& v1, int& s2, int& s3, int& v2, int& s4, int& poz, bool& ok) {
	int v2r = v2;
	afisER(s1, v1, s2, s3, v2, s4);
	for (int i = 1; i <= 25; i++) {
		Action(s1, v1, s2, s3, v2, s4, ok, poz);
	}
	int var = (s2 + s3) / 2;
	var += var / 4;
	v2 += var;
	s3 -= var;
	for (int i = 1; i <= 3; i++) {
		Action(s1, v1, s2, s3, v2, s4, ok, poz);
	}
	int ok1 = rand() % 2;
	if (ok1 == 0) {
		for (int i = 1; i <= var; i++) {
			v2--;
			s3++;
			Action(s1, v1, s2, s3, v2, s4, ok, poz);
		}
	}
	if (ok1 == 1) {
		v2 -= var;
		s3 += var;
	}
}