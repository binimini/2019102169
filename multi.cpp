#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {//9단까지 하려면 8 -> 9로 수정
        for (int j = 1; j <= 9; j++) {
            cout << i << " * " << j << " = " << i * j << "\n";
        }
    }
    return 0;
}
