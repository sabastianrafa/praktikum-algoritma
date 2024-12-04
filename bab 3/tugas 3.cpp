#include <iostream>
using namespace std;

int main(){
	
	int angka;
	
	cout<<"============================="<<endl<<"MENGHITUNG NILAI GANJIL GENAP"<<endl<<"============================="<<endl;
	cout<<"\nMasukan angka : ";cin>>angka;
	
	int h = angka % 2;
	
	
	if (h==0){
		cout <<angka<< " adalah bilangan GENAP\n";
	}
	else if (h==1){
		cout <<angka<< " adalah bilangan GANJIL\n";
	}
	
	return 0;
}
