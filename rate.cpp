//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Pay_Rate Rs. 500 per hours)
#include<iostream>
using  namespace std;
class info{
     private:
     	string name;
     	int hour,rate;
		 float salary;
     	public:
     		void get(string name,int hour){
				 this->name=name;
     			this->hour=hour;
     			//this->salary=salary;
     			
			 }
		
		info(){
			 rate=500;
		}
		void show(){
			
		      salary=hour*rate;
		      cout<<"the name is="<<name<<"the number of hour work="<<hour<<endl;
		      cout<<"the salary is according to="<<salary;
		}
};
int main(){
	string na;
	int ho;
	cout<<"Enter the name"<<endl;
	cin>>na;
	cout<<"Enter the hour you work"<<endl;
	cin>>ho;
	info obj;
    obj.get(na,ho);
	obj.show();	
	//info();
}

