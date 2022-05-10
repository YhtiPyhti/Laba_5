#include "Header.h"
enum class Plane {
    CREATE_PLANE,
    PLANES_FOR_TOWN,
    TOWNS_FOR_PLANE,
    PLANES,
    CLASS,
    NEXT,
    VIEW
};
void zad_1();

class CLASS {
public:
    map <int, string> newLesson;
    map <int, string> set_lesson(int n ,string text) {
        newLesson.insert({ n,text });
        return newLesson;
    }
};

class NEXT {

};

class VIEW {
public:
    int n = 0;
    string s;
    void get_lesson(map <int, string> lesson, int day) {
        for (auto i : lesson){
            if (day == i.first) {
                n++;
                s += i.second;
            }
        }
        if (n == 0) cout << "In " << day << " day We are free!";
        else cout << "In " << day << " day " << n << " classes in university : " << s << endl;
    }
};

void zad_2() {
    CLASS lrn;
    NEXT mon;
    VIEW info;
    map <int, string> lesson;
    int x;
    cout << "How many operations?\n";
    cin >> x;
    while (x) {
        int s = 0, n = 0, day = 0;
        string text;

        cout << "What do you want? CLASS(1), NEXT(2), VIEW(3), EXIT(4)." << endl;
        cin >> s;

        switch (s) {
        case 1:
            cin >> n;
            if ((n > 0) && (n < 32)) {
                cin >> text;
                lesson = lrn.set_lesson(n, text);
            }
            else cout << "Incorrect day" << endl;
            break;
        case 2:
            cout << "Next month\n";
            /*cin >> town;
            mon.printTown(lesson, town);*/
            break;
        case 3:
            cout << "What day? ";
            cin >> day;
            if ((day > 0) && (day < 32)) {
                info.get_lesson(lesson, day);
            }
            else  cout << "Incorrect day" << endl;
            break;

        case 4:
            exit(1);
        }
        x--;
    }
};

int main() {
    int n;
    cout << "zad_1 (1) or zad_2 (2) ";
    cin >> n;
    if (n == 1) zad_1();
    else if (n == 2) zad_2();
}