#include <iostream>
using namespace std;

int main(){
	
	string nama;
	int nim;
	char kelas;
	int semester;
	double ip;

cout<<"\tBAB I Tugas No.2\n\n";
cout << "Masukan Nama Anda\t\t: ";
getline (cin, nama); 
cout << "Masukan NIM Anda\t\t: ";
cin >> nim; 
cout << "Masukan Kelas Anda\t\t: ";
cin >> kelas; 
cout << "Masukan Semester Anda\t\t: ";
cin >> semester; 
cout << "Masukan Nilai IP Semester\t: ";
cin >> ip; 


cout<<"================================\n\tBerikut Data Anda\n\n";
cout << "NAMA\t\t\t= "<<nama<<endl;
cout << "NIM\t\t\t= "<<nim<<endl;
cout << "KELAS\t\t\t= "<<kelas<<endl;
cout << "SEMESTER\t\t= "<<semester<<endl;
cout << "Nilai IP Semester\t= "<<ip<<endl;
}
