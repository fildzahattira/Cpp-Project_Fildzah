#include<iostream>
#include<string>
using namespace std;

typedef struct
{
	string nama;
	string prodi;
	long long int npm;
	string alamat;
}data_mhs;



int main()
{
	int i;
	data_mhs maba[5];
	for(i=0;i<=4;i++){
		cout<<"Masukkan Data Mahasiswa "<<i+1<<endl;
		cout<<"Nama : ";
		getline(cin>>ws,maba[i].nama);
		cout<<"Prodi : ";
		getline(cin>>ws,maba[i].prodi);
		cout<<"NPM : ";
		cin>>maba[i].npm;
		cout<<"Alamat : ";
		getline(cin>>ws,maba[i].alamat);
		cout<<endl;}

	for(i=0;i<=4;i++){
		cout<<endl;
		cout<<"Data Mahasiswa "<<i+1<<endl;
		cout<<"---------------"<<endl;
		cout<<"Nama : "<<maba[i].nama<<endl;
		cout<<"Prodi : "<<maba[i].prodi<<endl;
		cout<<"NPM : "<<maba[i].npm<<endl;
		cout<<"Alamat : "<<maba[i].alamat<<endl;	
		}
	return 0;
}
