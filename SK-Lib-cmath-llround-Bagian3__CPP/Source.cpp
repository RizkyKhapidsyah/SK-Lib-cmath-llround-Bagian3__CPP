#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    int x = 15;
    long long int result;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;
    _getch();
    return 0;
}