#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class CLASS {
public:
    map <int, vector<string>> newLesson;
    map <int, vector<string>> set_lesson(int n, string text);
};

class NEXT {
public:
    map <int, vector<string>> newlesson;
    int a = 0;
    vector<string> s, p ;
    map <int, vector<string>> next_month(map <int, vector<string>> lesson, int n);
};

class VIEW {
public:
    int n;
    string s;
    void get_lesson(map <int, vector<string>> lesson, int day);
};