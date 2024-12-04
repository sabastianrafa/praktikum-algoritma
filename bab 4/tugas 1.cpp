#include <iostream>
using namespace std;

int main(){
	int kamar,lama,tagihan,total,pajak;
	
	cout <<"======= Pemesanan Kamar HOTEL ======"<<endl;
	cout <<"1. Standart Room"<<endl;
	cout <<"2. Superior Room"<<endl;
	cout <<"3. Duxel Room"<<endl;
	cout <<"4. Suite Room"<<endl;
	cout <<"5. Single Room"<<endl<<endl;
	cout<<"Masukkan pilihan kamar = ";cin>>kamar;
	
	switch(kamar){
	case 1 :
		cout<<"Standart Room Rp. 150000 /Hari"<<endl;
		cout<<"Berapa lama = ";cin>>lama;
		
		cout<<"\nRNCIHAN TAGIHAN"<<endl;
		cout<<"Durasi Penyewaan : "<<lama<<endl;
		tagihan = lama*150000;
		cout<<"Tagiha Kamar : Rp. "<<tagihan<<endl;
		pajak = 0.1*tagihan;
		cout<<"Pajak Rp. "<<pajak<<" (10%)"<<endl;
		
		cout<<"Total Tagihan : Rp. "<<pajak+tagihan<<endl;
		
	break;
	case 2 :
		cout<<"Superior Room Rp. 490000 /Hari"<<endl;
		cout<<"Berapa lama = ";cin>>lama;
		
		cout<<"\nRNCIHAN TAGIHAN"<<endl;
		cout<<"Durasi Penyewaan : "<<lama<<endl;
		tagihan = lama*490000;
		cout<<"Tagiha Kamar : Rp. "<<tagihan<<endl;
		pajak = 0.1*tagihan;
		cout<<"Pajak Rp. "<<pajak<<" (10%)"<<endl;
		
		cout<<"Total Tagihan : Rp. "<<pajak+tagihan<<endl;
		
	break;
	case 3 :
		cout<<"Deluxe Room Rp. 750000 /Hari"<<endl;
		cout<<"Berapa lama = ";cin>>lama;
		
		cout<<"\nRNCIHAN TAGIHAN"<<endl;
		cout<<"Durasi Penyewaan : "<<lama<<endl;
		tagihan = lama*750000;
		cout<<"Tagiha Kamar : Rp. "<<tagihan<<endl;
		pajak = 0.1*tagihan;
		cout<<"Pajak Rp. "<<pajak<<" (10%)"<<endl;
		
		cout<<"Total Tagihan : Rp. "<<pajak+tagihan<<endl;
		
	break;
	case 4:
		cout<<"Suite Room Rp. 1550000 /Hari"<<endl;
		cout<<"Berapa lama = ";cin>>lama;
		
		cout<<"\nRNCIHAN TAGIHAN"<<endl;
		cout<<"Durasi Penyewaan : "<<lama<<endl;
		tagihan = lama*1550000;
		cout<<"Tagiha Kamar : Rp. "<<tagihan<<endl;
		pajak = 0.1*tagihan;
		cout<<"Pajak Rp. "<<pajak<<" (10%)"<<endl;
		
		cout<<"Total Tagihan : Rp. "<<pajak+tagihan<<endl;
		
	break;
	case 5 :
		cout<<"Single Room Rp. 700000 /Hari"<<endl;
		cout<<"Berapa lama = ";cin>>lama;
		
		cout<<"\nRNCIHAN TAGIHAN"<<endl;
		cout<<"Durasi Penyewaan : "<<lama<<endl;
		tagihan = lama*700000;
		cout<<"Tagiha Kamar : Rp. "<<tagihan<<endl;
		pajak = 0.1*tagihan;
		cout<<"Pajak Rp. "<<pajak<<" (10%)"<<endl;
		
		cout<<"Total Tagihan : Rp. "<<pajak+tagihan<<endl;
		
	break;
	default :
		cout << "Pilihan Anda Tidak Ada";
	break;
	}
return 0;
}

