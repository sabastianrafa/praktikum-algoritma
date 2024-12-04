#include<iostream>
using namespace std;

int main(){
	
	int x,y,z;
	
	for(x=1, y=13, z=17;x<=5, y<=208, z>=5;x++, y*=2, z-=3){
		switch(x){
		case 1 :
			cout << "Nilai X = E"<<endl;
			break;
		case 2 :
			cout << "Nilai X = D"<<endl;
			break;
		case 3 :
			cout << "Nilai X = C"<<endl;
			break;
		case 4 :
			cout << "Nilai X = B"<<endl;
			break;
		case 5 :
			cout << "Nilai X = A"<<endl;
			break;
		}
		
		cout << "Nilai Y = "<<y<<endl;
		cout << "Nilai Z = "<<z<<endl;
		cout << "----------------"<<endl;
	}
}
