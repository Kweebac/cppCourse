#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an amount in cents: ";
	int originalMoneyInCents {};
	cin >> originalMoneyInCents; 

	int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
	balance = originalMoneyInCents;

	dollars = balance / 100;
	balance %= 100; 
	quarters = balance / 25;
	balance %= 25;
	dimes = balance / 10;
	balance %= 10;
	nickels = balance / 5;
	balance %= 5;
	pennies = balance / 1;

	cout << endl << originalMoneyInCents << " cents is equivalent to: " << endl;
	cout << "Dollars  : " << dollars << endl;
	cout << "Quarters : " << quarters << endl;
	cout << "Dimes    : " << dimes << endl;
	cout << "Nickels  : " << nickels << endl;
	cout << "Pennies  : " << pennies << endl;
   	return 0;
}
