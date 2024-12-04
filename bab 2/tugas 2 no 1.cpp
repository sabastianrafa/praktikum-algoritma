#include <iostream>
using namespace std;

int main(){
	
	float phi = 3.14;
	float r = 14;
	float v,vs;
	
	cout<<"........................................\n\tProgam Menghitung Volume\n\tBola & Setengah Bola\n........................................"<<endl<<endl;
	
	cout<<"Masukan Jari-jari Bola : "<<r<<endl<<endl;
	
	
	v = phi * r * r * r * 4/3;
	
	cout<<"Volume Bola = "<<v<<endl<<endl;
	
	vs = v/2;
	
	cout<<"Volume Setengah Bola = "<<vs<<endl;
	
return 0;
}
