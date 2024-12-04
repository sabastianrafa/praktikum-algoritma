#include <iostream>
using namespace std;

int main() {
    for(int a = 1; a <= 5; a++) {
        if(a == 1)
        {
        for(int b = 1; b <= 9; b++)
           cout << a << "  ";
        }
        else
        {
        for(int b = 1; b <= a - 1; b++)
           cout << "   ";
        for(int b = 1; b <= 11 - 2 * a; b++)
           if(b == 1 || b == 11 - 2 * a)
              cout << a << "  ";
           else
              cout << "   ";
        }
              cout << endl;
    }
}
