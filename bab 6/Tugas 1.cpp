#include<iostream>
using namespace std;
main(){
int kelipatan, nilai_akhir, i = 1, hasil;
cout << "=== 2318043 || Sabastian Rafariza Wahyuono ===" << endl;
cout << "\nmasukan nilai kelipatan\t: "; cin>>kelipatan;
cout << "masukan nilai akhir\t: "; cin>>nilai_akhir;
cout << "\n\n----- Hasil Output -----" << endl << endl;

	while(i <= nilai_akhir){
		if (i % kelipatan == 0){
			cout<<"* ";
		}
		else{
		cout << i << " ";
		}
    	i++;
	}
}
