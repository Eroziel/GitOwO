#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int global_variable = 0;

void somethingRandom(){
    int name;
    cin >> name;
    cout << "Moje imie to " << name << endl;
    cout << "ZMIANA UwU!" << endl;
}

int main() {
    somethingRandom();
    return 0;
}
