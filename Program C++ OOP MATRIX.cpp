#include<iostream>
//Fildzah Attira Khair 21081010148 PBO (E081)
using namespace std;

class matrix{
	public:
		int i,j,k;
		int m1[2][2], m2[2][2];
		int mul[2][2], add[2][2], sub[2][2];
		void enterValue();
		void showValue();
		void multiplication();
		void addition();
		void subtraction();
};

void matrix::enterValue(){
	cout<<"--First Matrix--"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Enter value "<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<" : ";
			cin>>m1[i][j];
			
		}
	}
	cout<<endl;
	cout<<"--Second Matrix--"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Enter value "<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<" : ";
			cin>>m2[i][j];
		}
	}
	cout<<endl;
}
void matrix::showValue(){
	cout<<"First Matrix : "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<m1[i][j] <<" ";
		}
		cout<<endl;
		
	}
	cout<<"Second matrix : "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<m2[i][j] <<" ";
		}
		cout<<endl;
	}
}
void matrix::multiplication(){
	cout<<"Multiplication : "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mul[i][j] = 0;
			for(k=0;k<2;k++){
				mul[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}
}
void matrix::addition(){
	cout<<"Addition : "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			add[i][j] = m1[i][j]+m2[i][j];
			cout<<add[i][j] <<" ";
		}
		cout<<endl;
	}
}
void matrix::subtraction(){
	cout<<"Subtraction : "<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sub[i][j] = m1[i][j]-m2[i][j];
			cout<<sub[i][j] <<" ";
		}
		cout<<endl;
	}
}

int main(){
	matrix m;
	m.enterValue();
	m.showValue();
	cout<<endl<<"--RESULT--"<<endl;
	m.multiplication();
	m.addition();
	m.subtraction();
	
	return 0;
}
