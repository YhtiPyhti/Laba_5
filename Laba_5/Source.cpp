#include "Header.h"
// Установка имени самолета
void CREATE_PLANE::set_name(string text) {
    string s, n;
    vector<string> v;
    int i = 0;
    while (text[i] != ' ') {
        n += text[i];
        i++;
    }
    for (i; i < text.size() + 1; i++) {
        if (text[i] == ' ') {
            v.push_back(s);
            s.clear();
            continue;
        }
        s += text[i];
    }
    v.push_back(s);
    s.clear();
    plane[n] = v;
}

map <string, vector<string>> CREATE_PLANE::get_name() {
    return plane;
}

