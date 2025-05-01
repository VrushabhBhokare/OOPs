#include<iostream>
#include<string>
using namespace std;

//class Teacher 
class Teacher{
	public://(set it as public because by defoult it is private we cant access it directly in main function)
		//properties/attribute
		string name;
		string dept;
		string subj;
		double salary;
		//methods/member function
		void changedept(string newdept){
			dept=newdept;
		}	
};                            

int main(){
    //object of the Teacher class 
	Teacher t1;               
	t1.name="vrusabh";
	t1.dept="CSE(AIML)";
	t1.subj="OOP's";
	t1.salary=250000;
	cout<<t1.salary<<endl;  //printing the salary of the teacher
	return 0;
}
