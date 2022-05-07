#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
class CREATE_PLANE {
public:
	map <string, vector<string>> plane;
	void set_name(string text);
	map <string, vector<string>> get_name();
};