#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
class CREATE_PLANE {
public:
	map <string, vector<string>> set_name(string text);
	map <string, vector<string>> plane;
};

class PLANES_FOR_TOWN {
public:
	string plane;
	int k = 0;
	void printTown(map <string, vector<string>> b, string town);
};

class TOWNS_FOR_PLANE {
public:
    string town;
    int k;
	void printPlane(map <string, vector<string>> b, string plane);
};

class PLANES {
public:
	map <string, vector<string>> get_name(map <string, vector<string>> a);
};

void zad_1();