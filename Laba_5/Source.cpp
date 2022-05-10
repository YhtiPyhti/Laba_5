#include "Header.h"
// Установка имени самолета
map <string, vector<string>> CREATE_PLANE::set_name(string text) {
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
    return plane;
}

void PLANES_FOR_TOWN :: printTown(map <string, vector<string>> b, string town) {
    int k = 0;
    for (auto i : b) {
        for (auto j : i.second) {
            if (town == j) {
                k = 1;
                cout << i.first << " \n";
            }
        }
    }
    if (k == 0) cout << "No one\n";
}


map <string, vector<string>> PLANES::get_name(map <string, vector<string>> a) {
    for (auto i : a) {
        cout << i.first << " ";
        for (auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }
    return a;
}


