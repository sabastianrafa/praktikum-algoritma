#include <iostream>
using namespace std;
int main() {
	cout<<"DATA BULANAN PENJUALAN KENDARAAN"<<endl<<endl;
	cout<<"1. HONDA\n2. YAMAHA\n3. KAWASAKI\n4. KTM\n5. SUZUKI"<<endl;
	cout<<"your choice ? : ";
	int choice,jumlah_data,data;
	cin>>choice;
	cout<<"\n========================================================"<<endl<<endl;
	string merek;
	switch(choice) {
		case 1 :
			merek="HONDA";
			break;
		case 2 :
			merek="YAMAHA";
			break;
		case 3 :
			merek="KAWASAKI";
			break;
		case 4 :
			merek="KTM";
			break;
		case 5 :
			merek="SUZUKI";
			break;
		default :
			merek="data tidak ada";
			cout<<merek<<endl<<endl;
			return 0;
	}
	cout<<"Input Data Kendaraan "<<merek<< " : ";
	cin>>jumlah_data;
	for(int a = 1; a<=jumlah_data; a++) {
		cout<<"Pembelian ke- "<<a<<" = ";
		cin>>data;
	}
}
