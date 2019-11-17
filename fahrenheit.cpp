#include <iostream>
using namespace std;
int main() {
    float c, f;
    while (true) {
    cout << "輸入攝氏溫度:";
    cin >> c;
    f = ( (c * 9.0) / 5.0) + 32.0;
    cout << "華氏溫度:" << f << "\n";
    }
}
