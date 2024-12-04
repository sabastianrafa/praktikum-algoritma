#include <iostream>
using namespace std;

float volume(int r){
	r+=10;
	float v = 1.33*3.14*r*r*r;
	return v;
}
float volume_setengah(int r){
	float vs = 0.66*3.14*r*r;
	return vs;
}
int main() {
	int r;
	cout << "masukan jari jari : "; cin>>r;
	cout << "volume bola : "<<volume(r) <<endl;
	cout << "setengah bola : "<<volume_setengah(r)<<endl;
return 0;
}

