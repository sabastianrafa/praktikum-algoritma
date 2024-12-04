#include <iostream>
using namespace std;
int main() {
    for (char a = 'E'; a >= 'A'; a--) {
        for (char a1 = 'E'; a1 >= a; a1--) {
            cout << a1 <<" ";
        }
        cout <<endl;
    }
    
    cout<<endl;
    for ( int b = 5; b >= 1;b--) {
        for (int b1 = 5 ; b1 >= b; b1--) {
        	cout << "  ";
        }
        for (int b2 = 1; b2 <= b; b2++){
            cout << b << " ";
		}
        cout <<endl;
    }
    
    cout<<endl;
    for(int c = 1; c<=5; c++){
		for(int c1 = 1; c1 <= 5; c1++){
			if (c==1||c==5||c1==1||c1==5){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	for (int d=1;d<=4;d++){
		for (int d1=1; d1<=d; d1++){
			int d2;
			d2++;
			cout<<d2<<" ";
		}
		cout<<endl;
	}
	
    return 0;
}
