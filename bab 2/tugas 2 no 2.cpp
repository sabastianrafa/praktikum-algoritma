#include <iostream>
using namespace std;

int main(){
	
	double c;
	

	cout<<"\t------------------------------\n\t     PROGAM KONVERSI SUHU\n\t------------------------------"<<endl<<endl;
	
	cout<<"Masukan suhu (celcius) = ";cin>>c;
	
	double f = (c * 9/5) + 32;
	cout<<"Jadi,\t"<<c<<" derajat celcius\t= "<<f<<" derajat fahrenheit"<<endl;
	
	
	double r = c * 4/5 - 0.064;
	cout<<"\t"<<f<<" derajat fahrenheit\t= "<<r<<" derajat reamur"<<endl;
	
	
	double k = c + 273 - 0.07; 
	cout<<"\t"<<r<<" derajat reamur\t= "<<k<<" derajat kelvin"<<endl;
	
return 0;
}
