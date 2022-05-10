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

void zad_2() {

};

int main() {
    int n;
    cout << "zad_1 (1) or zad_2 (2) ";
    cin >> n;
    if (n == 1) zad_1();
    else if (n == 2) zad_2();
}