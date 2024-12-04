#include<iostream>
using namespace std;

int prisma_segitiga(int a, int t, int tp){
	double v = 0.5*a*t*tp;
	return v;
}
int limas_segiempat(int la, int t){
	double v = 0.33*la*t;
	return v;
}
int tabung(int r, int t){
	double v = 3.14*r*r*t;
	return v;
}
int limas_segitiga(int la, int tl){
	double v = 0.33*la*tl;
}
int main(){
	int pilih, ulang = 1, a;
	
	do{
		cout << "==MENCARI VOLUME BANGUN RUANG=="<<endl;
		cout <<"[1] Prisma Segitiga"<<endl;
		cout <<"[2] Limas Segiempat"<<endl;
		cout <<"[3] Tabung"<<endl;
		cout <<"[4] Limas Segitiga"<<endl;
		cout <<"[5] Exit"<<endl;
		cout <<"Pilih perhitungan : ";cin>>pilih;
		cout <<"========================================"<<endl;
		switch (pilih){
			case 1 ... 5 :
				if(pilih == 1){
					int a, t, tp;
					cout << "Alas = ";cin>>a;
					cout << "Tinggi  = ";cin>>t;
					cout << "Tinggi Prisma = ";cin>>tp;
					cout << "Volume = "<<prisma_segitiga(a,t,tp)<<endl<<endl;
					ulang = 0;
				}
				else if(pilih == 2){
					int t,la;
					cout << "Tinggi  = ";cin>>t;
					cout << "Luas Alas = ";cin>>la;
					cout << "Volume = "<<limas_segiempat(la,t)<<endl<<endl;
					ulang = 0;
				}
				else if(pilih == 3){
					int j,t;
					cout << "Jari Jari  = ";cin>>j;
					cout << "tinggi  = ";cin>>t;
					cout << "Volume = "<<tabung(j,t)<<endl<<endl;
					ulang = 0;
				}
				else if(pilih == 4){
					int lt,la;
					cout << "Tinggi Limas = ";cin>>lt;
					cout << "Luas Alas = ";cin>>la;
					cout << "Volume = "<<limas_segitiga(lt,la)<<endl<<endl;
					ulang = 0;
				}
				else{
					cout<<"Anda Telah keluar";
				}
				break;
			default:
				ulang = 0;
				break;
		}
	}
	while(ulang == 0);
	return 0;
}

