#include <iostream>
using namespace std;

void garis(){
	cout<<"---------------------------------------------------------------"<<endl;
}

int main(){
	int amout, jumlah=0, max, min;
	cout<<"input amout of day(s) : ";cin>>amout;
	int snack[amout], bakery[amout], beverege[amout];
	garis();
	cout<<"input sales of products (unite)"<<endl;
	garis();
	for(int a = 0; a<3; a++){
		if (a==0){
			cout<<"snack"<<endl;
			garis();
			for(int b = 0; b<amout; b++){
			cout<<"seles day "<<b+1<<" : ";cin>>snack[b];
			jumlah=jumlah+snack[b];
			
			if(b==0){
				max = snack[b];
				min = snack[b];
			}
			else{
				if(max < snack[b])max=snack[b];
				if(min > snack[b])min=snack[b];
			}
			}
			cout<<endl;
			garis();
		}
		else if(a==1){
			cout<<"bakery"<<endl;
			garis();
			for(int b = 0; b<amout; b++){
			cout<<"seles day "<<b+1<<" : ";cin>>bakery[b];
			jumlah=jumlah+bakery[b];
			
			if(max < bakery[b])max=bakery[b];
				if(min > bakery[b])min=bakery[b];
			}
			cout<<endl;
			garis();
		}
		else{
			cout<<"beverage"<<endl;
			garis();
			for(int b = 0; b<amout; b++){
			cout<<"seles day "<<b+1<<" : ";cin>>beverege[b];
			jumlah=jumlah+beverege[b];
			
			if(max < beverege[b])max=beverege[b];
				if(min > beverege[b])min=beverege[b];
			}
			cout<<endl;
			garis();
		}	
	}
	cout<<"seles for products"<<endl;
	garis();
	cout<<"products\t";
		for(int d = 0; d<amout; d++){
			cout<<"day "<<d+1<<"\t";
		}
	cout<<endl;
	garis();
	cout<<"snack\t\t";
		for(int d = 0; d<amout; d++){
			cout<<snack[d]<<"\t";
		}
	cout<<endl;
	cout<<"bakery\t\t1";
		for(int d = 0; d<amout; d++){
			cout<<bakery[d]<<"\t";
		}
	cout<<endl;
	cout<<"beverage\t";
		for(int d = 0; d<amout; d++){
			cout<<beverege[d]<<"\t";
		}
	cout<<endl;
	garis();
	cout<<"max sales : "<<max<<" units"<<endl;
	cout<<"min sales : "<<min<<" units"<<endl;
	cout<<"average sales : "<<jumlah/(amout*3)<<" units";
	
	return 0;
}
