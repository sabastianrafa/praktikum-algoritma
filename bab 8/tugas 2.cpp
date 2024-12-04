#include<iostream>
using namespace std;

void kotak(int sisi){
	for (int i = 1; i<=sisi; i++){
		for (int a = 1; a<=sisi; a++){
			if (i==1||a==1||i==sisi||a==sisi){
				if(sisi>=10){
					cout << sisi <<" ";
				}
				else{cout << sisi <<"  ";
				}
			}else{
				cout << "   ";
			}
		}
		cout << endl;
	}
}

int main(){
	int sisi;
	cout << "----- Progam Membuat Kotak -----"<<endl;
	cout << "Masukan Sisi : ";cin >>sisi;
	kotak(sisi);
	return 0;
}

