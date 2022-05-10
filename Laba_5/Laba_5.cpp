#include "Header.h"
enum class Plane {
    CREATE_PLANE,
    PLANES_FOR_TOWN,
    TOWNS_FOR_PLANE,
    PLANES
};

class TOWNS_FOR_PLANE {
public:
    void printPlane(map <string, vector<string>> b, string plane) {
        int k = 0;
        for (auto i : b) {
            if (plane == i.first) {
                k = 1;
                cout << i.first << " \n";
            }
        }
        if (k == 0) cout << "No one\n";
    }
};

int main() {
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