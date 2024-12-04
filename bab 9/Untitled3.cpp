#include <iostream>
using namespace std;
int main(){
	int data;
	cout << "masukan banyak data : ";cin>>data;
	string nama[data];
	int point[data];
	
	for(int a=0; a<data; a++){
		cout <<"data ke-"<<a+1<<endl;
		cout <<"masukan nama  : ";cin>>nama[a];
		cout <<"masukan point : ";cin>>point[a];
		cout <<endl;
	}
	cout<<"\ngrafik data"<<endl;
	cout<<"--------------------------------"<<endl;
	for(int b=0; b<data; b++){
		cout <<"data ke "<<b+1<<" "<<nama[b]<<"\t: ";
		for(int c=0; c<point[b]; c++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

