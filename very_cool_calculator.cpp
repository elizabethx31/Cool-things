//Elizabeth Ma
//The purpose of this program is to create a basic tip calculator
//that allows the user to see their total if they were to tip
//either 10, 15, or 20 percent
#include <iostream>
#include <cctype>

using namespace std;

int main()
{

	double bill_amount;			//The total before tip is factored in
	int tip_choose;				//The user's chose in how much they want to tip
	double tip_amount;			//How much tip they have to pay
	double total_bill;			//The bill plus tip amount

	cout << endl << endl << endl;
	cout <<"How much is your bill? $";

	cin >> bill_amount;
	cin.ignore(100, '\n');

	do
	{
		cout <<"How much would you like to tip? Please choose a number below. " << endl;
		cout <<"1. 10% " << endl;
		cout <<"2. 15%" << endl;
		cout <<"3. 20%" << endl;
		cin >> tip_choose;
		cin.ignore(100,'\n');
	}
	while(tip_choose != 1 && tip_choose != 2 && tip_choose != 3);
	if(tip_choose == 1)
	{
		tip_amount = bill_amount * .10;	
		total_bill = tip_amount + bill_amount;
	}
	else if(tip_choose == 2)
	{
		tip_amount = bill_amount * .15;
		total_bill = tip_amount + bill_amount;
	}
	else if(tip_choose == 3)
	{
		tip_amount = bill_amount * .20;
		total_bill = tip_amount + bill_amount;
	}

	cout << endl << endl;
	cout << "Your tip amount is: $" << tip_amount << endl;
	cout << "Your total is: $" << total_bill << endl;
	return 0;
}

