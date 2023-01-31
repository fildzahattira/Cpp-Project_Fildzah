#include<iostream>
using namespace std;

float LuasPersegiPanjang(float p,float l){
	float L = p*l;
	return L;
}
float LuasSegitiga(float a,float t){
	float L = 0.5*a*t;
	return L;
}
float LuasLingkaran(float r){
	float L = 3.14*r*r;
	return L;
}
int main(){
	cout<<"Menghitung Bangun Datar"<<endl;
	int pilihan;
	float L;
	cout<<"1.Persegi panjang  2.Segitiga  3.Lingkaran "<<endl;
	cout<<"Pilih kode bangun datar : ";
	cin>>pilihan;
	if(pilihan==1){
		float p,l;
		cout<<"Masukkan Panjang : ";
		cin>>p;
		cout<<"Masukkan Lebar : ";
		cin>>l;
		L = LuasPersegiPanjang(p,l);
		cout<<"Luas Persegi Panjang = "<<L<<endl;
	}else if(pilihan==2){
		float a,t;
		cout<<"Masukkan Alas : ";
		cin>>a;
		cout<<"Masukkan Tinggi : ";
		cin>>t;
		L = LuasSegitiga(a,t);
		cout<<"Luas Segitiga = "<<L<<endl;
	}else if(pilihan==3){
		float r;
		cout<<"Masukkan r(jari-jari) : ";
		cin>>r;
		L = LuasLingkaran(r);
		cout<<"Luas Lingkaran = "<<L<<endl;
	}else{
		cout<<"Kode yang Anda Masukkan Salah";
	}
	return 0;
}
