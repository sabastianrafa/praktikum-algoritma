#include <iostream>
using namespace std;

string na,al,tgl,als;

int main(){
	cout<<"\t========================\n\tInput Nama Anggota\n\t========================\n"<<endl;
	cout<<"Nama\t\t\t\t: ";
	getline(cin,na);
	cout<<"Alamat\t\t\t\t: ";
	getline(cin,al);
	cout<<"Tanggal Lahir\t\t\t: ";
	getline(cin,tgl);
	cout<<"Alasan Mengikuti Organisasi\t: ";
	getline(cin,als);
	
	cout<<"\n\t\n\t   ==================\n\t   Data Anda Terkirim\n\t   ==================";

return 0;
}
