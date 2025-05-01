/*copy constructor
 special constructor (default)used to copy properties of one object into another 
  
  types of copy construct0r
  1)Shallow copy:-
  copy of an object copies all of the member values from one object to another
  
  2)Deep copy:-
  (used when dynamic memory allocation becaouse staic memory is allocated in stack at compile time
  bit in dynamic memory it allocate memory //heap//(eg.new int[5])
  not only copies the member value but also makees copied of any dynamically 
  allocated memory that the members point to
  
  
  */
#include<iostream>
#include<string>
using namespace std;

//class Teacher 
class Teacher{
	
	private:
		double salary;

	public:
		//Non-parameterized constructor
		Teacher(){
			dept="CSE(AIML)";
			}
		//parameterized constructer
		Teacher(string n,string d,string s,double sal){
			name=n;
			dept=d;
			subj=s;
			salary=sal;
			}
		//copy constructer
			Teacher(Teacher &orgObj){
			this->name=orgObj.name;
			this->dept=orgObj.dept;
			this->subj=orgObj.subj;
			this->salary=orgObj.salary;
			cout<<"copy constucter is called"<<endl;
			}
		
		string name;
		string dept;
		string subj;

		void changedept(string newdept){
			dept=newdept;
		}	
		//setter function 
		void setsalary(int s){
			salary=s;
		}
		//getter function
		double getinfo(){
	cout<<name<<endl;  //printing the name of the teacher
	cout<<dept<<endl;  //printing the dept of the teacher
	cout<<subj<<endl;  //printing the subject of the teacher
	cout<<salary<<endl;  //printing the salary of the teacher
		}
};                            

int main(){
    //object of the Teacher class 
	Teacher t1("vrushabh","CSE(AIML)","OOP's",250000);               
	Teacher t2(t1);  //             

	t2.getinfo(); 
	return 0;
}
