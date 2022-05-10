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
        if ((text[i] == ' ')  || (text[i] == '\0')) {
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
    for (auto i : b) {
        for (auto j : i.second) {
            if ((town == j)) {
                if (plane == i.first) continue;
                plane = i.first;
                k = 1;
                cout << i.first << " \n";
            }
        }
    }
    if (k == 0) cout << "No one\n";
}

void TOWNS_FOR_PLANE :: printPlane(map <string, vector<string>> b, string plane) {
    k = 0;
    for (auto i : b) {
        if (plane == i.first) {
            k = 1;
            for (auto j : i.second) {
                if (j != "") cout << j << "( ";
                town = j;
                for (auto h : b) {
                    for (auto z : h.second) {
                        if (z == "") continue;
                        if ((town == z) && (h != i)) {
                            cout << h.first << " ";
                        }
                    }
                }
                if (j != "") cout << ") ";
            }
            cout << endl;
        }
    }
    if (k == 0) cout << "Plane is absent\n";
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

void zad_1() {
    CREATE_PLANE Type;
    PLANES_FOR_TOWN yellow;
    TOWNS_FOR_PLANE eaze_y;
    PLANES Name;
    map <string, vector<string>> mplane;
    while (1) {
        int s = 0;
        string text, town, plane;

        cout << "What do you want? CREATE_PLANE(1), PLANES_FOR_TOWN(2), TOWNS_FOR_PLANE(3), PLANES(4), EXIT(5)." << endl;
        cin >> s;

        switch (s) {
        case 1:
            cin.ignore();
            getline(cin, text);
            mplane = Type.set_name(text);
            break;
        case 2:
            cout << "What town? ";
            cin >> town;
            yellow.printTown(mplane, town);
            break;
        case 3:
            cout << "What plane? ";
            cin >> plane;
            eaze_y.printPlane(mplane, plane);
            break;
        case 4:
            Name.get_name(mplane);
            break;

        case 5:
            exit(1);
        }
    }
}