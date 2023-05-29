#include<iostream>

using namespace std;
//mencari median

int main(){
	int data,sorting;
	cout<<"berapa data? ";
	cin>>data;
	float nilai[data],median;
	cout<<"masukkan nilai-nilai dari ke-"<<data<<" data : "<<endl;
	for(int i=0;i<data;i++){
		cin>>nilai[i];
	}
	cout<<endl;
	for(int c=1;c<data;c++){
		for(int d=0;d<data-c;d++){
			if(nilai[d]>nilai[d+1]){
				sorting = nilai[d];
				nilai[d] = nilai[d+1];
				nilai[d+1] = sorting;
			}
		}
	}
	cout<<"Data ter-urut : "<<endl;
	for(int i =0;i<data;i++){
		cout<<nilai[i]<<" ";
	}
	cout<<endl;
	if(data%2==0){
		median = (nilai[(data/2)]+nilai[(data/2)-1])/2;
	}else{
		median = nilai[(data/2)];
	}
	cout<<"Median = "<<median;
	
	return 0;
}
