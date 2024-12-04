#include <iostream>
using namespace std;

int main(){
	int jumlahdata;
	
	cout << "\tProgam Menambahkan Array"<<endl;
	cout << "Masukan Banyak Data : ";cin>>jumlahdata;
	int jumlah[jumlahdata];
	
	for(int i=1;i<=jumlahdata;i++){
		cout<<"Masukan angka ke-"<<i<<" = ";cin>>jumlah[i];
	}
	
	cout << "-----------------------------------"<<endl;
	cout << "Array sebelum ditambahkan"<<endl;
	cout<<"[";
	for (int i=1; i <=jumlahdata; i++){
    	cout<<jumlah[i];
    	if (i<jumlahdata)cout<<", ";
	}
	cout<<"]"<<endl;
	for (int i=1; i <=jumlahdata; i++){
    	jumlah[i]+=jumlah[i-1];
	}
	cout << "-----------------------------------"<<endl;
	cout << "Array sebelum ditambahkan"<<endl;
	cout<<"[";
	for (int i=1; i <=jumlahdata; i++){
    	cout<<jumlah[i];
    	if (i<jumlahdata)cout<<", ";
	}
	cout<<"]";
	return 0;
}

