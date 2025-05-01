#include<iostream>
#include<string>
using namespace std;

class Teacher{
	
	private:
		double salary;

	public:
		//properties/attribute
		string name;
		string dept;
		string subj;
		//methods/member function
		void changedept(string newdept){
			dept=newdept;
		}	
		//setter function 
		void setsalary(int s){
			salary=s;
		}
		//getter function
		double getinfo(){
			return salary;
		}
};                            
/*Encapsulation
    it is wrapping up of data & member function in a single unit called class
    it is used for data hiding(private)
*/
class Account{
	
	private:
		double balance;
		double password;//data hiding
	public:
		//properties/attribute
		string accountid;
		string username;
		//methods/member function
		
};   
int main(){
    //object of the Teacher class 
	Teacher t1;               
	t1.name="vrusabh";
	t1.dept="CSE(AIML)";
	t1.subj="OOP's";
	t1.setsalary(250000);
	cout<<t1.getinfo()<<endl;  //printing the salary of the teacher
	return 0;
}
