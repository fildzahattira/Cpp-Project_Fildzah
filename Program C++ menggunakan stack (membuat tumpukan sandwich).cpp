#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#define MAX 10



using namespace std;

struct stack{
	char top, data[MAX][8];
}tumpukan;

void init(){
	tumpukan.top = -1;
}

bool isEmpty(){
	if(tumpukan.top==-1){
		return true;
	}else{
		return false;
	}
}

bool isFull(){
	if(tumpukan.top == MAX-1){
		return true;
	}else{
		return false;
	}
}

void push(){
	if(isFull()){
		cout<<endl<<"SUDAH PENUH!"<<endl;
	}else{
		tumpukan.top++;
		cout<<"masukkan menu : ";
		cin>>tumpukan.data[tumpukan.top];
	}
}

void pop(){
	if(isEmpty()){
		cout<<"stack kosong"<<endl;
	}else{
		tumpukan.top--;
	}
}

int clear(){
	return tumpukan.top = -1;
}

void print(){
	cout<<"CUSTOM SANDWICH"<<endl;
	if(isEmpty()){
		cout<<"empty";
	}else{
		for(int i=tumpukan.top;i>=0;i--){
			cout<<"-- "<<tumpukan.data[i]<<" --"<<endl;
		}
	}
}

int main(){
	init();
	int pilih;
	do{
		cout<<endl;
		print();
		cout<<endl<<endl;
		cout<<"*kode menu*\nroti \ndaging \nsayur \nkeju \n"<<endl;
		cout<<"1.tambah  2.buang  3.hapus  4.selesai"<<endl;
		cout<<"pilih : ";
		cin>>pilih;
		switch(pilih){
			case 1 :
				push();
				break;
			case 2 :
				pop();
				break;
			case 3 :
				clear();
				break;
			case 4 :
				cout<<endl<<"SELESAI!"<<endl;
				print();
				break;
			default :
				cout<<endl<<"PILIH NOMOR DENGAN BENAR!"<<endl;
				break;
		}
	}while(pilih!=4);
}



