#include <iostream>

using namespace std;

void garis(){
	cout<<"------------------------------------------------------------------------"<<endl;
}
int main() {

	int ruangan, pasien;
	cout<<"Masukan Jumlah Ruangan : ";cin>>ruangan;
	cout<<"Masukan Jumlah Pasien  : ";cin>>pasien;
	int sis[ruangan][pasien], dia[ruangan][pasien];
	string nama[ruangan][pasien];
	
	for (int a = 0; a < ruangan; a++) {
		cout<<"\n\t\tData ruangan ke-"<<a+1<<endl;
		garis();
		for(int b = 0; b < pasien; b++) {
			garis();
			cout<<"\t\tPasien ke-"<<b+1<<endl;
			cout<<"Nama Pasien : ";cin>>nama[a][b];
			cout<<"Tekanan Darah sistolik : ";cin>>sis[a][b];
			cout<<"Tekanan Darah diastolik : ";cin>>dia[a][b];
		}
	}
	cout<<"\n\t\t--- OUTPUT DATA PASIEN ---"<<endl;
	garis();
	cout<<"No\tNama\t\tSistolik\tDiastolik\tStatus"<<endl;
	garis();
	for(int a = 0; a < ruangan; a++) {
		cout<<"Data ruangan ke-"<<a+1<<endl;
		garis();
		for (int b = 0; b < pasien; b++) {
			string status;
			if (sis[a][b]>140 && dia[a][b]>80){
				status = "Hipertensi";
			}
			else if(sis[a][b]<90 && dia[a][b]<60){
				status = "Hipertensi";
			}else{
				status = "Normal";
			}
			cout<<b+1<<"\t"<<nama[a][b]<<"\t\t"<<sis[a][b]<<"mmHg\t\t"<<dia[a][b]<<"mmHg\t\t"<<status<<endl;
			garis();
		}
	}
	return 0;
}

