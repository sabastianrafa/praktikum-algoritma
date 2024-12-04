#include <iostream>
using namespace std;

int main(){
	
	int umur;
	string nama;
	
	cout<<"Masuakan Nama Anda : ";getline(cin,nama);
	cout<<"Masuakan Umur Anda : ";cin>>umur;
	
	switch(umur){
		case 1 ... 6 :
			cout<<"Umur Kamu Belum Tergolong Tingakatan  di Pramuka";
		break;
		case 7 ... 10:
			cout<<"kamu Tergolong Pramuka Siaga";
		break;
		case 11 ... 15:
			cout<<"kamu Tergolong Pramuka Penggalang";
		break;
		case 16 ... 20:
			cout<<"kamu Tergolong Pramuka Penegak";
		break;
		case 21 ... 25:
			cout<<"kamu Tergolong Pramuka Pendega";
		break;
		case 26 ... 100:
			cout<<"kamu Tergolong Majelis Pembimbing";
		break;
		default:
    		cout<<"PILIHAN ANDA TIDAK ADA";

	}
}
