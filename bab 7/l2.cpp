#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            cout << "  ";    
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout<<endl;
    int a = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            cout << "  ";    
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout <<a<< " ";
        }
        cout << endl;
    	a+=2;
    }
	return 0;
}
