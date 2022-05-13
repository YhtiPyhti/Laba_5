#include "zad_2.h"

map <int, vector<string>> CLASS :: set_lesson(int n, string text) {
    string s;
    vector<string> v;
    for (int i = 0; i < text.size() + 1; i++) {
        if ((text[i] == ' ') || (text[i] == '\0')) {
            v.push_back(s);
            s.clear();
            continue;
        }
        s += text[i];
    }
    v.push_back(s);
    s.clear();
    newLesson[n] = v;
    return newLesson;
}

map <int, vector<string>> NEXT :: next_month(map <int, vector<string>> lesson, int n) {
    for (auto i : lesson) {
        a = i.first;
        s = lesson[a - 1];
        s.insert(s.end(), i.second.begin(), i.second.end());
        switch (n % 12) {
        case 1:
            if (a == 31) {
                newlesson.insert({ a - 1,s });// c мая на июнь
                newlesson.insert({ a, p});
            }
            break;
        case 2:
            if (a == 30) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 3:
            if (a == 31) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 4:
            if (a == 31) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 5:
            if (a == 30) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 6:
            if (a == 31) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 7:
            if (a == 30) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 8:
            if (a == 31) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 9:
            if (a == 31) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 10:
            if (a == 28) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 11:
            if (a == 31) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        case 12:
            if (a == 30) {
                newlesson.insert({ a - 1,s });
                newlesson.insert({ a, p });
            }
            break;
        }
    }
    s.clear();
    return newlesson;
}

void VIEW :: get_lesson(map <int, vector<string>> lesson, int day) {
    n = 0;
    for (auto i : lesson) {
        if (day == i.first) {
            for (auto j : i.second) {
                n++;
                s += j;
                if (j == "") n--;
                s += ' ';
            }
        }
    }
    if (n == 0) cout << "In " << day << " day We are free!\n";
    else cout << "In " << day << " day " << n << " classes in university : " << s << endl;
    s.clear();
}

void zad_2() {
    CLASS lrn;
    NEXT mon;
    VIEW info;
    map <int, vector<string>> lesson;
    int x, count = 0;
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
                cin.ignore();
                getline(cin, text);
                lesson = lrn.set_lesson(n, text);
            }
            else cout << "Incorrect day" << endl;
            break;
        case 2:
            cout << "Next month\n";
            count++;
            lesson = mon.next_month(lesson, count);
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
