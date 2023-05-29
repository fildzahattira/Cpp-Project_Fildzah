#include<iostream>
//Fildzah Attira Khair 21081010148 PBO (E081)
using namespace std;

class pajak{
	private :
		int price;
		int ongkir;
	public :
		int hitung_pajak_internasional(int price){
			return 0.1*price;
		}
		int hitung_pajak_Ri(int price){
			return 0.11*price;
		}
		int hitung_pajak_Cukai(int price, int ongkir){
			return 0.06*(price+ongkir);
		}
};

int main(){
	int price;
	int ongkir;
	pajak pjk;
	cout<<"Enter price : "<<endl;
	cin>>price;
	cout<<"Enter delivery fee : "<<endl;
	cin>>ongkir;
	
	pjk.hitung_pajak_internasional(price);
	pjk.hitung_pajak_Ri(price);
	pjk.hitung_pajak_Cukai(price,ongkir);
	
	cout<<endl;
	cout<<"Pajak Internasional : "<<pjk.hitung_pajak_internasional(price)<<endl;
	cout<<"Total : "<<pjk.hitung_pajak_internasional(price)+(price+ongkir)<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Pajak Ri : "<<pjk.hitung_pajak_Ri(price)<<endl;
	cout<<"Total : "<<pjk.hitung_pajak_Ri(price)+(price+ongkir)<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Pajak Cukai : "<<pjk.hitung_pajak_Cukai(price,ongkir)<<endl;
	cout<<"Total : "<<pjk.hitung_pajak_Cukai(price,ongkir)+(price+ongkir)<<endl;
	
	
	return 0;
}
