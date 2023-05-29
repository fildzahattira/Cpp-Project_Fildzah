#include<iostream>
using namespace std;
int main(){
	int i,j;
	int baris,kolom;
	cout<<"Masukkan jumlah baris : ";
	cin>>baris;
	cout<<"Masukkan jumlah kolom : ";
	cin>>kolom;
	cout<<endl;
	
	int m1[baris][kolom],m2[baris][kolom],hasil[baris][kolom];
	cout<<"--Matriks Pertama--"<<endl;
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<"Masukkan elemen matriks "<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<" : ";
			cin>>m1[i][j];
			
		}
	}
	cout<<endl;
	cout<<"--Matriks kedua--"<<endl;
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<"Masukkan elemen matriks "<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<" : ";
			cin>>m2[i][j];
		}
	}
	cout<<endl;
	cout<<"Matriks Pertama : "<<endl;
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<m1[i][j] <<" ";
		}
		cout<<endl;
		
	}
	cout<<"Matriks Kedua : "<<endl;
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<m2[i][j] <<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"-- Hasil Penjumlahan Matriks--"<<endl;
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			hasil[i][j] = m1[i][j]+m2[i][j];
			cout<<hasil[i][j] <<" ";
		}
		cout<<endl;
	}
	return 0;
}
