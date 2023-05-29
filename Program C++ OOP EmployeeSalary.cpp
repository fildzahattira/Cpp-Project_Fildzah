#include<iostream>
//Fildzah Attira Khair 21081010148 PBO (E081)
using namespace std;

class golongan{
	protected:
		int gajiPokok;
	public:
		void setGajiPokok(int g){
			gajiPokok = g;
		}
		int THR(){
			return 1*gajiPokok;
		}
		int gaji13(){
			return 1*gajiPokok;
		}
		int beforeTunjangan(){
			return (12*gajiPokok)+THR()+gaji13();
		}
		void showPendapatanSetahun(){
			cout<<"Total pendapatan setahun : ";
		}
		void showPajak(){
			cout<<"Pajak : ";
		}
		void showAfterPajak(){
			cout<<"Total pendapatan setahun setelah dipotong pajak : ";
		}
};

class tigaA: public golongan{
	public:
		int afterTunjangan(){
			return beforeTunjangan()+(0.6*gajiPokok*12);
		}
};

class tigaB: public golongan{
	public:
		int afterTunjangan(){
			return beforeTunjangan()+(0.6*gajiPokok*12);
		}
};

class tigaC: public golongan{
	public:
		int afterTunjangan(){
			return beforeTunjangan()+(0.6*gajiPokok*12);
		}
};

class tigaD: public golongan{
	public:
		int afterTunjangan(){
			return beforeTunjangan()+(1*gajiPokok*12);
		}
};

class empatA: public golongan{
	public:
		int afterTunjangan(){
			return beforeTunjangan()+(1.1*gajiPokok*12);
		}
};

class empatB: public golongan{
	public:
		int afterTunjangan(){
			return beforeTunjangan()+(1.2*gajiPokok*12);
		}
};

class empatC: public golongan{
	public:
		int afterTunjanganBonus(){
			return beforeTunjangan()+(1.5*gajiPokok*12)+(8*gajiPokok*2);
		}
		int pajak(){
			return (gajiPokok+(8*gajiPokok)+(1.5*gajiPokok)+THR()+gaji13())*0.6;
		}
		int afterPajak(){
			return afterTunjanganBonus()-pajak();
		}
};

class empatD: public golongan{
	public:
		int afterTunjanganBonus(){
			return beforeTunjangan()+(1.5*gajiPokok*12)+(10*gajiPokok*2);
		}
		int pajak(){
			return (gajiPokok+(10*gajiPokok)+(1.5*gajiPokok)+THR()+gaji13())*0.6;
		}
		int afterPajak(){
			return afterTunjanganBonus()-pajak();
		}
};

int main(){
	//golongan III A
	tigaA threeA;
	threeA.setGajiPokok(2700000);
	
	cout<<"---GOLONGAN III A---"<<endl;
	threeA.showPendapatanSetahun();
	cout<<threeA.afterTunjangan()<<endl<<endl;
	
	//golongan III B
	tigaB threeB;
	threeB.setGajiPokok(2800000);
	
	cout<<"---GOLONGAN III zzB---"<<endl;
	threeB.showPendapatanSetahun();
	cout<<threeB.afterTunjangan()<<endl<<endl;

	//golongan III C
	tigaC threeC;
	threeC.setGajiPokok(2950000);
	
	cout<<"---GOLONGAN III C---"<<endl;
	threeC.showPendapatanSetahun();
	cout<<threeC.afterTunjangan()<<endl<<endl;
	
	//golongan III D
	tigaD threeD;
	threeD.setGajiPokok(3200000);
	
	cout<<"---GOLONGAN III D---"<<endl;
	threeD.showPendapatanSetahun();
	cout<<threeD.afterTunjangan()<<endl<<endl;
	
	//golongan IV A
	empatA fourA;
	fourA.setGajiPokok(3500000);
	
	cout<<"---GOLONGAN IV A---"<<endl;
	fourA.showPendapatanSetahun();
	cout<<fourA.afterTunjangan()<<endl<<endl;
	
	//golongan IV B
	empatB fourB;
	fourB.setGajiPokok(4000000);
	
	cout<<"---GOLONGAN IV B---"<<endl;
	fourB.showPendapatanSetahun();
	cout<<fourB.afterTunjangan()<<endl<<endl;
	
	//golongan IV C
	empatC fourC;
	fourC.setGajiPokok(5000000);
	
	cout<<"---GOLONGAN IV C---"<<endl;
	fourC.showPendapatanSetahun();
	cout<<fourC.afterTunjanganBonus()<<endl;
	fourC.showPajak();
	cout<<fourC.pajak()<<endl;
	fourC.showAfterPajak();
	cout<<fourC.afterPajak()<<endl<<endl;
	
	//golongan IV D
	empatD fourD;
	fourD.setGajiPokok(6000000);
	
	cout<<"---GOLONGAN IV D---"<<endl;
	fourD.showPendapatanSetahun();
	cout<<fourD.afterTunjanganBonus()<<endl;
	fourD.showPajak();
	cout<<fourD.pajak()<<endl;
	fourD.showAfterPajak();
	cout<<fourD.afterPajak()<<endl<<endl;
	
	cout<<"---GOLONGAN IV D---"<<endl;
	fourD.showPendapatanSetahun();
	cout<<fourD.afterTunjanganBonus()<<endl;
	fourD.showPajak();
	cout<<fourD.pajak()<<endl;
	fourD.showAfterPajak();
	cout<<fourD.afterPajak()<<endl<<endl;
	
	cout<<"---GOLONGAN IV D---"<<endl;
	fourD.showPendapatanSetahun();
	cout<<fourD.afterTunjanganBonus()<<endl;
	fourD.showPajak();
	cout<<fourD.pajak()<<endl;
	fourD.showAfterPajak();
	cout<<fourD.afterPajak()<<endl<<endl;
	
	return 0;
}
