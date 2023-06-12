//Anggota kelompok:
//	21081010097 - Akge Ninov Royana
//	21081010148 - Fildzah Attira Khair
//	21081010183 - Rosalena Brigita Limbong
//	21081010250 - Richard Petrus Haposan Siagian

#include<iostream>

using namespace std;

class DataPaket{
	protected:
		string nama_pengirim, alamat_pengirim, no_hp_pengirim, nama_penerima, alamat_penerima, no_hp_penerima, anggota;
		int berat_paket;
	
	public:
		DataPaket(string sender_name, string sender_address, string sender_phone, string receiver_name, string receiver_address, string receiver_phone, int weight, string member){
			nama_pengirim = sender_name;
			alamat_pengirim = sender_address;
			no_hp_pengirim = sender_phone;
			nama_penerima = receiver_name;
			alamat_penerima = receiver_address;
			no_hp_penerima = receiver_phone;
			berat_paket = weight;
			anggota = member;
		}
		
		string getNamaPengirim(){
			return nama_pengirim;
		}
		string getAlamatPengirim(){
			return alamat_pengirim;
		}
		string getNoHpPengirim(){
			return no_hp_pengirim;
		}
		string getNamaPenerima(){
			return nama_penerima;
		}
		string getAlamatPenerima(){
			return alamat_penerima;
		}
		string getNoHpPenerima(){
			return no_hp_penerima;
		}
		int getBeratPaket(){
			return berat_paket;
		}
		string getMember(){
			return anggota;
		}
		
		~DataPaket(){
			cout<<"\n\n====================================================="<<endl;
            cout<<"Program Selesai";
        }
};
		
		
class Jnt: public DataPaket{
	public:
		int harga_berat, diskon;
		
		Jnt(string sender_name, string sender_address, string sender_phone, string receiver_name, string receiver_address, string receiver_phone, int weight, string member) : DataPaket(sender_name, sender_address, sender_phone, receiver_name, receiver_address, receiver_phone, weight, member){}

		int getHargaBerat(){
			harga_berat = getBeratPaket()*14000;
			return harga_berat;
		}              
		
		int getDiskonMember(){
			if(getMember() == "y"){
				diskon = 5000*getBeratPaket();
			} else {
				diskon = 0;
			}
			return diskon;
		}
		
		void cetakNota(){
			cout<<"\n\n===Nota Pengiriman Barang Ekspedisi JNT==="<<endl<<endl;
			cout<<"Nama pengirim : "<<getNamaPengirim()<<endl;
			cout<<"Alamat pengirim : "<<getAlamatPengirim()<<endl;
			cout<<"No. HP pengirim : "<<getNoHpPengirim()<<endl<<endl;
			cout<<"Nama penerima : "<<getNamaPenerima()<<endl;
			cout<<"Alamat penerima : "<<getAlamatPenerima()<<endl;
			cout<<"No. HP penerima : "<<getNoHpPenerima()<<endl<<endl;
			cout<<"Berat paket : "<<getBeratPaket()<<"kg"<<endl;   
			cout<<"---------------------------------------------------------"<<endl;                                                                                                                                                                                                                                        
			cout<<"Total harga : "<<getHargaBerat() - getDiskonMember();
		}
};

class Jne : public DataPaket{
	public:
		int harga_berat, diskon;
		
		Jne(string sender_name, string sender_address, string sender_phone, string receiver_name, string receiver_address, string receiver_phone, int weight, string member) : DataPaket(sender_name, sender_address, sender_phone, receiver_name, receiver_address, receiver_phone, weight, member){}

		int getHargaBerat(){
			harga_berat = getBeratPaket()*15000;
			return harga_berat;
		}              
		
		int getDiskonMember(){
			if(getMember() == "y"){
				diskon = 4000*getBeratPaket();
			} else {
				diskon = 0;
			}
			return diskon;
		}
		
		void cetakNota(){
			cout<<"\n\n===Nota Pengiriman Barang Ekspedisi JNE==="<<endl<<endl;
			cout<<"Nama pengirim : "<<getNamaPengirim()<<endl;
			cout<<"Alamat pengirim : "<<getAlamatPengirim()<<endl;
			cout<<"No. HP pengirim : "<<getNoHpPengirim()<<endl<<endl;
			cout<<"Nama penerima : "<<getNamaPenerima()<<endl;
			cout<<"Alamat penerima : "<<getAlamatPenerima()<<endl;
			cout<<"No. HP penerima : "<<getNoHpPenerima()<<endl<<endl;
			cout<<"Berat paket : "<<getBeratPaket()<<"kg"<<endl;   
			cout<<"---------------------------------------------------------"<<endl;                                                                                                                                                                                                                                        
			cout<<"Total harga : "<<getHargaBerat() - getDiskonMember();
		}
};

class SiCepat : public DataPaket{
	public:
		int harga_berat, diskon;
		
		SiCepat(string sender_name, string sender_address, string sender_phone, string receiver_name, string receiver_address, string receiver_phone, int weight, string member) : DataPaket(sender_name, sender_address, sender_phone, receiver_name, receiver_address, receiver_phone, weight, member){}

		int getHargaBerat(){
			harga_berat = getBeratPaket()*16000;
			return harga_berat;
		}              
		
		int getDiskonMember(){
			if(getMember() == "y"){
				diskon = 4000*getBeratPaket();
			} else {
				diskon = 0;
			}
			return diskon;
		}
		
		void cetakNota(){
			cout<<"\n\n===Nota Pengiriman Barang Ekspedisi SiCepat==="<<endl<<endl;
			cout<<"Nama pengirim : "<<getNamaPengirim()<<endl;
			cout<<"Alamat pengirim : "<<getAlamatPengirim()<<endl;
			cout<<"No. HP pengirim : "<<getNoHpPengirim()<<endl<<endl;
			cout<<"Nama penerima : "<<getNamaPenerima()<<endl;
			cout<<"Alamat penerima : "<<getAlamatPenerima()<<endl;
			cout<<"No. HP penerima : "<<getNoHpPenerima()<<endl<<endl;
			cout<<"Berat paket : "<<getBeratPaket()<<"kg"<<endl;   
			cout<<"---------------------------------------------------------"<<endl;                                                                                                                                                                                                                                        
			cout<<"Total harga : "<<getHargaBerat() - getDiskonMember();
		}
};

class LalaMove : public DataPaket{
	public:
		int harga_berat, diskon;
		
		LalaMove(string sender_name, string sender_address, string sender_phone, string receiver_name, string receiver_address, string receiver_phone, int weight, string member) : DataPaket(sender_name, sender_address, sender_phone, receiver_name, receiver_address, receiver_phone, weight, member){}

		int getHargaBerat(){
			harga_berat = getBeratPaket()*15000;
			return harga_berat;
		}              
		
		int getDiskonMember(){
			if(getMember() == "y"){
				diskon = 4000*getBeratPaket();
			} else {
				diskon = 0;
			}
			return diskon;
		}
		
		void cetakNota(){
			cout<<"\n\n===Nota Pengiriman Barang Ekspedisi LalaMove==="<<endl<<endl;
			cout<<"Nama pengirim : "<<getNamaPengirim()<<endl;
			cout<<"Alamat pengirim : "<<getAlamatPengirim()<<endl;
			cout<<"No. HP pengirim : "<<getNoHpPengirim()<<endl<<endl;
			cout<<"Nama penerima : "<<getNamaPenerima()<<endl;
			cout<<"Alamat penerima : "<<getAlamatPenerima()<<endl;
			cout<<"No. HP penerima : "<<getNoHpPenerima()<<endl<<endl;
			cout<<"Berat paket : "<<getBeratPaket()<<"kg"<<endl;   
			cout<<"---------------------------------------------------------"<<endl;                                                                                                                                                                                                                                        
			cout<<"Total harga : "<<getHargaBerat() - getDiskonMember();
		}
};


int main(){
	string nama_pengirim, alamat_pengirim, no_hp_pengirim, nama_penerima, alamat_penerima, no_hp_penerima, member;
	int berat_paket, ekspedisi;
	
	cout<<"===<<PROGRAM PENGIRIMAN PAKET>>==="<<endl<<endl<<endl;
	
	cout<<"==INPUT DATA PAKET=="<<endl<<endl;
	cout<<"1. Masukkan nama pengirim: ";
	getline(cin, nama_pengirim);
	cout<<"2. Masukkan alamat pengirim : ";
	getline(cin, alamat_pengirim);
	cout<<"3. Masukkan no. hp pengirim : ";
	getline(cin, no_hp_pengirim);
	cout<<"4. Masukkan nama penerima: ";
	getline(cin, nama_penerima);
	cout<<"5. Masukkan alamat penerima : ";
	getline(cin, alamat_penerima);
	cout<<"6. Masukkan no. hp penerima : ";
	getline(cin, no_hp_penerima);
	cout<<"7. Masukkan berat paket : ";
	cin>>berat_paket;
	cout<<"8. Pilih ekspedisi : \n   1) JNT \n   2) JNE \n   3) SiCepat \n   4) LalaMove"<<endl;
	cout<<"   ==> Pilihan (1/2/3/4) : "; 
	cin>>ekspedisi;
	cout<<"9. Apakah Anda member ekspedisi ? "<<endl;
	cout<<"   ==> Pilihan (y/t) : "; 
	cin>>member;
	switch (ekspedisi){
		case 1: {	
			Jnt cust1(nama_pengirim, alamat_pengirim, no_hp_pengirim, nama_penerima, alamat_penerima, no_hp_penerima, berat_paket, member);
			cust1.cetakNota();
			break;
		}
		case 2: {
			Jne cust1(nama_pengirim, alamat_pengirim, no_hp_pengirim, nama_penerima, alamat_penerima, no_hp_penerima, berat_paket, member);
			cust1.cetakNota();
			break;
		}
		case 3: {
			SiCepat cust1(nama_pengirim, alamat_pengirim, no_hp_pengirim, nama_penerima, alamat_penerima, no_hp_penerima, berat_paket, member);
			cust1.cetakNota();
			break;
		}
		case 4: {
			LalaMove cust1(nama_pengirim, alamat_pengirim, no_hp_pengirim, nama_penerima, alamat_penerima, no_hp_penerima, berat_paket, member);
			cust1.cetakNota();
			break;
		}		
	}
	return 0;
}

