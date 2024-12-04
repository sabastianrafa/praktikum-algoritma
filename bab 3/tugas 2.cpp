#include<iostream>
using namespace std;

int main(){
	
	string nama;
	int nilai;
	
	cout << "== Progam Pemberian Grade Nilai =="<<endl<<endl;
	cout << "Masukan nama : ";
	getline (cin,nama);
	cout << "Masukan nilai : ";cin>>nilai;
	
	if (nilai<0||nilai>100){
		cout<<"Inputan Salah, Masukan nilai 0-100";
	}
	else if (nilai >= 80){
		cout<<"Grade yang didapatkan adalah : A ";
	}
	else if (nilai >= 60){
		cout<<"Grade yang didapatkan adalah : B ";
	}
	else if (nilai >= 40){
		cout<<"Grade yang didapatkan adalah : C ";
	}
	else if (nilai >= 20){
		cout<<"Grade yang didapatkan adalah : D ";
	}
	else if (nilai >= 10){
		cout<<"Grade yang didapatkan adalah : E ";
	}
	else if (nilai >= 0){
		cout<<"Grade yang didapatkan adalah : F ";
	}
	
	return 0;
}
