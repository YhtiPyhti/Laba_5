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
class PLANES {
public:
	map <string, vector<string>> get_name(map <string, vector<string>> a);
};