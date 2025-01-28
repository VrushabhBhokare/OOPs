#include<iostream>
using namespace std;
class Bankaccount
{
	private:
		double balance;
		
	public:
		void Deposit(double money)
		{
			if(money>0)
			{
				balance= balance+money;
				cout<<" Amount is deposited"<<endl;
				cout<<" current balance is=="<<balance<<endl;	
			}
			else
			{
			
			cout<<"You can't  deposit the deposit"<<endl;
			}
			
		}
		void witdraw(double money)
		{
			if(money<=balance)
			{
				balance= balance-money;
				cout<<" Amount is witdrawn"<<endl;
				cout<<" current balance is=="<<balance<<endl;	
			}
			else
			{
			
			cout<<"current balance is not sufficient"<<endl;
			}
			
		}
		void Viewbalance()
		{
			cout<<"current balance is=="<< balance<<endl;
		}
		void Transfer(double money, Bankaccount &recipient)
		{
        	if (money <= balance) 
			{
            	balance -= money;  // Deduct from current account
           		recipient.Deposit(money);  // Add to recipient account
               cout << "Transferred " << money << " to the recipient account.\n";
                cout << "Your current balance is: " << balance << endl;
        	} 
			else
			{
            cout << "Insufficient balance for transfer.\n";
            }
       }
};
int main()
{
	Bankaccount b1,b2;
	while(1)
	{
	
		  	cout << "1. Deposit\n";
    		cout << "2. Withdraw\n";
    		cout << "3. View balance\n";
    		cout << "4. Transfer\n";
            cout << "5. Exit\n";
   			int choice;
  			double amount;
    		cout << "Enter your choice: "<<endl;
       		cin >> choice;
       		
       		
		switch (choice) 
		{
            case 1:
                cout << "Enter deposit amount:= ";
                cin >> amount;
                b1.Deposit(amount);
                cout << "Deposited:= " <<amount << "\n";
                break;
            
            case 2:
                cout << "Enter withdrawal amount:= ";
                cin >> amount;
                b1.witdraw(amount);
                break;
				case 3:
                b1.Viewbalance();
                break;

            case 4:
                cout << "Enter transfer amount: ";
                cin >> amount;
                b1.Transfer(amount, b2);  // Transfer money from b1 to b2
                break;

            case 5:
                cout << "Exiting program.\n";
                return 0;
		}
}
}
