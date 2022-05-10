#include "Header.h"
enum class Plane {
    CREATE_PLANE,
    PLANES_FOR_TOWN,
    TOWNS_FOR_PLANE,
    PLANES
};

int main() {
    CREATE_PLANE Type;
    //PLANES_FOR_TOWN yellow;
    //TOWNS_FOR_PLANE eaze_y;
    PLANES Name;
    map <string, vector<string>> mplane;
    while (1) {
        int s = 0;
        string Text;

        cout << "What do you want? CREATE_PLANE(1), PLANES_FOR_TOWN(2), TOWNS_FOR_PLANE(3), PLANES(4), EXIT(5)." << endl;
        cin >> s;

        switch (s) {
        case 1:
            cin.ignore();
            getline(cin, Text);
            mplane = Type.set_name(Text);
            break;
        case 2:


            break;
        case 3:


            break;
        case 4:
            Name.get_name(mplane);
            break;

        case 5:
            exit(1);
        }
    }
}