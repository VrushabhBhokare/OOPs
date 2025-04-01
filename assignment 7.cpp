#include<iostream>
using namespace std;
class BankAccount{
	private:
	  string name;
	  double Balance;
	public:
	   BankAccount(string nm,double bal){
	   	name=nm;
	   	Balance =bal;
	   }
	   
	   void deposit(double amt){
	   	if(amt>0){
	   		Balance+=amt;
	   		cout<<"Deposited succesfully "<<endl;
	   		cout<<" Current Balanec: "<<Balance<<endl;
		   }
	   }	
	   void witdraw(double amt){
	   	if(amt>Balance){
	   		Balance-=amt;
	   		cout<<"widrawed  succesfully "<<endl;
	   		cout<<" Current Balanec: "<<Balance<<endl;
		   }
		else{
			cout<<" Insufficient balance"<<endl;
		}
    }
		void Transfer(BankAccount &to,double amt){
			if(amt>Balance){
				witdraw(amt);
				to.deposit(amt);
			}else{
				cout<<"insufficient Balance"<<endl;
			}
		}
		 
		 void display(){
		 	cout<<"Account holder name: "<<name<<endl;
		 	cout<<"Account Balance: "<<Balance<<endl;
		 }
};
int main()
  {
	BankAccount b1("digvijay",0);
	b1.deposit(10000);
	b1.display();
	return 0;
  }
