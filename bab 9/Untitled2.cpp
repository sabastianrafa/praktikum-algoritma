#include <iostream>
using namespace std;
int main(){
	int data;
	cout << "masukan banyak data = ";cin>>data;
	int tinggi[data], tertinggi, terendah;
	for (int a=0; a<data; a++){
		cout << "tinggi badan mahasiswa ke - "<<a+1<<" = ";
		cin>>tinggi[a];
		if(a==0){
			tertinggi = tinggi[a];
			terendah = tinggi[a];
		}
		else{
			if (tertinggi<tinggi[a])tertinggi = tinggi[a];
			if (terendah>tinggi[a])terendah = tinggi[a];
		}
	}
	cout << "\ndata tinggi badan mahasiswa semester 1"<<endl<<endl;
	cout <<"mahasiswa tertinggi adalah "<<tertinggi<<endl<<"mahasiswa terendah adalah "<<terendah;
	return 0;
}

