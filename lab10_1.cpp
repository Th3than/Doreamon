#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,rateP,pay,total;
	cout << "Enter initial loan: ";
	cin >> loan;
	total = loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	rate /= 100;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	cout << fixed << setprecision(2); 
	int i = 1;
	do
	{
		cout << setw(13) << left << i; 
		cout << setw(13) << left << total;
		rateP = rate*total;
		cout << setw(13) << left << rateP;
		total += rateP;
		cout << setw(13) << left << total;
		if (total-pay <= 0)
		{
			pay = total;
			total = pay-total;
		}else{
			total -= pay;
		}
		cout << setw(13) << left << pay;
		cout << setw(13) << left << total;
		i++;
		cout << "\n";
	} while (total != 0 && total > 0);
	
	return 0;
}
