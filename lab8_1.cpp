#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	
	double  loan ,rate, per;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> per;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	
	double bal = loan;
	double inter,tot,newb;
	double pay=per;

	
	
	for(int i=0; i>=0; i++){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left <<  bal;
		inter = bal*(rate/100);
		cout << setw(13) << left << inter ;
		tot = inter+bal;
		cout << setw(13) << left << tot;	
		if(tot<pay) pay=tot;			
		cout << setw(13) << left << pay;
		newb = tot-pay;		
		cout << setw(13) << left << newb;		
		cout << "\n";
		bal=newb;
		if(newb<=0) break;
	}
	return 0;
}
