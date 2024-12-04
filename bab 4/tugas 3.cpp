#include<iostream>
using namespace std;

int main (){
	int buku;

    cout<<"*********DAFTAR BUKU***********"<<endl;
    cout<<"1. IPS"<<endl;
    cout<<"2. IPA"<<endl;
    cout<<"3. BAHASA JAVA"<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"Masukan Buku Pilihan = ";
    cin>>buku;

    switch(buku) {
    case 1 : cout<<"Buku yang anda pilih IPS"; break;
    case 2 : cout<<"Buku yang anda pilih IPA"; break;
    case 3 : cout<<"Buku yang anda pilih BAHASA JAVA"; break;
    default : cout<<"Buku tidak tersedia";
    }

}
