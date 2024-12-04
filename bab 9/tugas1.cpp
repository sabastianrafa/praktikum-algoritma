#include<iostream>
using namespace std;

void garis(int panjang){
	for(int g=1; g<=panjang; g++){
		cout<<"-";
	}cout<<endl;
}
int main(){
	int jumlah;
	cout<<"Masukan Jumlah Mahasiswa : ";cin>>jumlah;
	
	string nama[jumlah];
	int nim[jumlah];
	int nilai[jumlah];
	
	for (int b=0; b<jumlah; b++){
		cout<<"\nMahasiswa ke-"<<b+1<<endl;
		cout<<"Masukan Nama\t: ";cin>>nama[b];
		cout<<"Masukan NIM\t: ";cin>>nim[b];
		cout<<"Masukan Nilai\t: ";cin>>nilai[b];
	}
	cout<<"\n\n\tDAFTAR NILAI MAHASISWA\n"<<endl;
	garis(45);
	cout<<"no\tNIM\tNama\t\tNilai\tGrade"<<endl;
	garis(45);
	for (int a=0; a<jumlah; a++){
		char grade;
		if(nilai[a]<=65){
			grade = 'C';
		}
		else if(nilai[a]<=90){
			grade = 'B';
		}
		else if(nilai[a]<=100){
			grade = 'A';
		}
		cout<<a+1<<"\t"<<nim[a]<<"\t"<<nama[a]<<"\t\t"<<nilai[a]<<"\t"<<grade;
		cout<<endl<<endl;
	}
	return 0;
}

