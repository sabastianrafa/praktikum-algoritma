#include <iostream>
using namespace std;
int prnuh(int a){
	int b = 8*(a*a)-3*a+5;
	return b;
}
int main() {
	int x;
	cout << "f(x)=8x^-3X+5, tentukan nilai x : ";cin >> x;
	cout << prnuh(x);
return 0;
}

