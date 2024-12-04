#include<iostream>
using namespace std;

int main(){
	int pilihan;
	float total,nominal;
	
	cout<<"===Mini Pertamino==="<<endl;
	cout<<"1. Petromax Turbo"<<endl;
	cout<<"2. Petromax"<<endl;
	cout<<"3. Petrolute"<<endl;
	cout<<"Masukan Pilihan anda : ";cin>>pilihan;
	
	switch(pilihan){
		case 1:
			cout<<"Petromax Turbo Rp 16.600 /liter"<<endl<<endl;
			cout<<"Masukan Nominal yang anda inginkan : ";cin>>nominal;
			total = nominal/16600,00;
			cout<<total;
		break;
		case 2:
			cout<<"Turbo Rp 14.000 /liter";
			cout<<"Masukan Nominal yang anda inginkan : ";cin>>nominal;
			total = nominal/14000,00;
			cout<<total;
		break;
		break;
		case 3:
			cout<<"Petrolite Rp 10.000 /liter";
			cout<<"Masukan Nominal yang anda inginkan : ";cin>>nominal;
			total = nominal/10000,00;
			cout<<total;
		break;
		break;
	}
}
