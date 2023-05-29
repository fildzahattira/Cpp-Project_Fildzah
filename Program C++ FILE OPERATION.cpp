#include<iostream>
#include<fstream>
#include<string>

using namespace std;

typedef struct
{
	string nama;
	int id;
}data_dosen;


int main(){
	int jumlahHehe;
	cout<<"Berapa data dosen? ";
	cin>>jumlahHehe;
	int i;
	data_dosen dosen_informatika[jumlahHehe];
	ofstream file;
	file.open("data_dosen_informatika.txt");
	cout<<endl;           
	cout<<"Masukkan data dosen : ";
	cout<<endl;
	file<<"Data Dosen"<<endl;
	
	// Insert to array
	for(i=0;i<jumlahHehe;i++){
		cout<<"("<<i+1<<")"<<endl;
		cout<<"Nama : ";
		getline(cin>>ws,dosen_informatika[i].nama);
		cout<<"ID : ";
		cin>>dosen_informatika[i].id;
	}
	
	// Write to file(hasil .txt tersimpan dalam file yang sama dengan tempat penyimpanan program ini)
	for(i=0;i<jumlahHehe;i++){
		file<<"("<<i+1<<")"<<endl;
		file<<"Nama : "<<dosen_informatika[i].nama<<endl;
		file<<"ID : "<<dosen_informatika[i].id<<endl;	
	}
	file.close();	


	// Print from file
	ifstream file1;
	file1.open("data_dosen_informatika.txt");
	cout<<endl;
	cout<<"Isi file"<<endl;
	string baris;
	if(file1.is_open()){
		while(getline(file1,baris)){
			cout<<baris<<endl;
		}
		file1.close();
	}else{
		cout<<"file not found";
	}
	return 0;
}


