#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

struct Mahasiswa{
	long long int npm;
	string nama;
}data_mhs;

bool compareNPM( Mahasiswa a, Mahasiswa b){
	if(a.npm < b.npm)
		return 1;
	else 
		return 0;
}

bool compareNama( Mahasiswa a, Mahasiswa b){
	if(a.nama < b.nama)
		return 1;
	else 
		return 0;
}
	
int main(){
	int jumlah,urut;
	cout<<"berapa mahasiswa? ";
	cin>>jumlah;
	Mahasiswa m_arr[jumlah];

	for(int i=0;i<jumlah;i++){
		cout<<"data "<<"("<<i+1<<")"<<endl;
		cout<<"masukkan NPM : ";
		cin>>m_arr[i].npm;
		cout<<"masukkan nama : ";
		getline(cin>>ws,m_arr[i].nama);
	}
	cout<<endl;
	cout<<"urut berdasarkan apa? "<<endl;
	cout<<"1. NPM  2. Nama "<<endl;
	cout<<"(1/2)? ";
	cin>>urut;
	cout<<"----------------------"<<endl;
	switch(urut){
		case 1 :
			sort(m_arr, m_arr+jumlah, compareNPM);
			for(int i=0;i<jumlah;i++){
        		cout<<"data "<<"("<<i+1<<")"<<endl<<"NPM = "<< m_arr[i].npm <<endl<< "Nama = "<< m_arr[i].nama <<endl;
        	}
			break;
		case 2 :
			sort(m_arr, m_arr+jumlah, compareNama);
			for(int i=0;i<jumlah;i++){
        		cout<<"data "<<"("<<i+1<<")"<<endl<< "NPM = "<< m_arr[i].npm <<endl<< "Nama = "<< m_arr[i].nama <<endl;
        	}
			break;
		default :
			cout<<"masukkan kode dengan benar";
			break;
	}
	
	return 0;
}

