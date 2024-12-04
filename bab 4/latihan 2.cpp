#include <iostream>
using namespace std;

int main(){
	
	int nb,jumlah,total,diskon,bayar;;
	
	cout<<"--- TIKET BIOSKOP MALANG ---"<<endl<<endl;
	cout<<"1. Film Uncharted\n2. Film Morbius\n3. Film Fantastic Beasts: The Secrets of Dumbledore\n4. Film Black Adam"<<endl<<endl;
	cout<<"Masukan Pilihan Anda : ";cin>>nb;	
		switch(nb){
		case 1 :
			int jumlah,total,diskon,bayar;
			cout<<"Film Uncharted, akan tayang di theater 1\nHarga tiket Rp. 40000 \n"<<endl;
			cout<<"Masukan Jumlah Tiket yang diinginkan : ";cin>>jumlah;
			total = 40000 * jumlah;
			switch (total){
			case 0 ... 40000 :
			cout<<"anda tidak mendapat diskon";
			break;
			default :
			cout<<"\nanda mendapatkan DISKON 8 %"<<endl;	
			diskon = total-(0.08*total);
			cout<<"total pembayaran : "<<diskon<<endl;
			cout<<"pembayaran\t : ";cin>>bayar;
			if (bayar >= diskon){
			cout << "kembali\t\t : "<<bayar - diskon;
			}
			else {
			cout<<"\npembayaran tidak sesuai";
			}
			}
		break;
		
		case 2 :
			
			cout<<"Film Morbius, akan tayang di theater 2\nHarga tiket Rp. 35000 ";
			cout<<"Masukan Jumlah Tiket yang diinginkan : ";cin>>jumlah;
			total = 35000 * jumlah;
			switch (total){
			case 0 ... 40000 :
			cout<<"anda tidak mendapat diskon";
			break;
			default :
			cout<<"\nanda mendapatkan DISKON 8 %"<<endl;	
			diskon = total-(0.08*total);
			cout<<"total pembayaran : "<<diskon<<endl;
			cout<<"pembayaran\t : ";cin>>bayar;
			if (bayar >= diskon){
			cout << "kembali\t\t : "<<bayar - diskon;
			}
			else {
			cout<<"\npembayaran tidak sesuai";
			}
			}
		break;
		
		case 3 :
			cout<<"Film Fantastic Beasts: The Secrets of Dumbledore, akan tayang di theater 3\nHarga tiket Rp. 30000 ";
			cout<<"Masukan Jumlah Tiket yang diinginkan : ";cin>>jumlah;
			total = 30000 * jumlah;
			switch (total){
			case 0 ... 40000 :
			cout<<"anda tidak mendapat diskon";
			break;
			default :
			cout<<"\nanda mendapatkan DISKON 8 %"<<endl;	
			diskon = total-(0.08*total);
			cout<<"total pembayaran : "<<diskon<<endl;
			cout<<"pembayaran\t : ";cin>>bayar;
			if (bayar >= diskon){
			cout << "kembali\t\t : "<<bayar - diskon;
			}
			else {
			cout<<"\npembayaran tidak sesuai";
			}
			}
		break;
		
		case 4 :
			cout<<"Film Black Adam, akan tayang di theater 4\nHarga tiket Rp. 50000 ";
			cout<<"Masukan Jumlah Tiket yang diinginkan : ";cin>>jumlah;
			total = 50000 * jumlah;
			switch (total){
			case 0 ... 40000 :
			cout<<"anda tidak mendapat diskon";
			break;
			default :
			cout<<"\nanda mendapatkan DISKON 8 %"<<endl;	
			diskon = total-(0.08*total);
			cout<<"total pembayaran : "<<diskon<<endl;
			cout<<"pembayaran\t : ";cin>>bayar;
			if (bayar >= diskon){
			cout << "kembali\t\t : "<<bayar - diskon;
			}
			else {
			cout<<"\npembayaran tidak sesuai";
			}
			}
		break;
	}
}
