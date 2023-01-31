#include<iostream>
using namespace std;

// 1. Fidlzah Attira Khair
// 2. Farhan
int main()
{
	float b;
	float t;
	float bmi;
	cout<<"Body Mass Index Calculator"<<endl<<endl;
	cout<<"Masukkan berat badan(kg) : ";
	cin>>b;
	cout<<"Masukkan tinggi badan(m) : ";
	cin>>t;
	bmi = b/(t*t);
	
	if(b&&t!=0){
	
		if(bmi<18.5){
			cout<<"Kekurangan berat badan";
		}else if(bmi<=24.9){
			cout<<"Normal(ideal)";
		}else if(bmi<=29.9){
			cout<<"Kelebihan berat badan";
		}else if(bmi>=30.0){
			cout<<"Kegemukan(obesitas)";
		
 	}
 		cout<<endl;
		cout<<"BMI : "<<bmi<<endl;	
	}else{
		cout<<"Masukkan Data Dengan Benar";
	}
	return 0;
}
