#include<iostream>
using namespace std;
int main (){
	cout<<"\nGANJIL 1"<<endl<<endl;
        int g1=5;
    	for(int a=1;a<=g1;a++){
        	for(int b=1;b<=g1-a+1;b++){
            cout<<a<<" ";
        }
        cout<<endl;
    	}
    	for(g1;g1>=1;g1--){
      	for(int a=5;a>=g1;a--){
            cout<<a<<" ";
        }
        cout<<endl;
    	}
    	
    	cout<<"\nGANJIL 2"<<endl<<endl;
    	int g2=5;
    	for(int a2=0;a2<g2;a2++){
        	for(int j=0;j<g2-a2;j++){
        	char a2 = 'A'+j;
        	cout<<a2<<" ";
        }
        cout<<endl;
    	}
	for(char b='A';b<='E';b++){
        	for(char yz='A';yz<=b;yz++){
            cout<<b<<" ";
        }
        cout<<endl;
    	}
}
