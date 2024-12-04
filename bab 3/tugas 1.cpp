#include<iostream>
using namespace std;

int main(){
	int lp,tinggi;
	
	cout << "PROGAM HITUNG BERAT IDEAL\n1. Lelaki\n2. Perempuan\nApa jenis kelamin anda ? (1/2) : ";cin>>lp;
	
	if (lp==1){
		cout << "\nMasukan tinggi badan anda (cm) = ";cin>>tinggi;
		int berat = (tinggi-100)-((tinggi-100)*0.10);
		cout << "Berat badan ideal anda yaitu "<<berat<<" kg";
	}
	else if (lp==2){
		cout << "\nMasukan tinggi badan anda (cm) = ";cin>>tinggi;
		int berat = (tinggi-100)-((tinggi-100)*0.15);
		cout << "Berat badan ideal anda yaitu "<<berat<<" kg";
	}
	else{
		cout << "Error salah memilih jenis kelamin";
	}
	
	return 0;
}
