#include "Header.h"
enum class Plane {
    CREATE_PLANE,
    PLANES_FOR_TOWN,
    TOWNS_FOR_PLANE,
    PLANES
};



int main() {
    bool x = 1;
    CREATE_PLANE type;
    map <string, vector<string>> mplane;
    while (x) {
        int s = 0;
        string Text;

        cout << "What do you want? CREATE_PLANE(1), PLANES_FOR_TOWN(2), TOWNS_FOR_PLANE(3), PLANES(4), EXIT(5)." << endl;
        cin >> s;
        switch (s) {
        case 1:
            cin.ignore();
            getline(cin, Text);
            type.set_name(Text);
            break;
        case 2:


            break;
        case 3:


            break;
        case 4:
            mplane = type.get_name();
            for (auto i : mplane) {
                cout << i.first << " ";
                for (auto j : i.second) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;

        case 5:
            exit(1);
        }
    }
}