//Create a class named Fruit with a data member to calculate the number of fruits in a basket. Create two
//other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
//Print the number of fruits of each type and the total number of fruits in the basket.(Inheritance)
#include<iostream>
using namespace std;
class Apple{
	protected:
	int num_apple;
	public:
	void get(int num_apple){
		this->num_apple=num_apple;
	}

};
class Mangoes:public Apple{
	protected:
	int num_mango;
	public:
		void get(int num_mango){
			this->num_mango=num_mango;
			
		}
	
	
};
class Fruit:public Mangoes{
	protected:
	int cal;
	public:
		void show(int num_mango,int num_apple){
	    	cout<<"the number of the mangoes in basket is="<<num_mango<<endl;
			cout<<"the number of the apple in basket is="<<num_apple<<endl;
			cal=num_mango+num_apple;
			cout<<"the total number of the fruiets in basket "<<cal<<endl;
		
		}
		
		
	
};
int main(){
	int a,b;
	cout<<"enter the number of the apple"<<endl;
	cin>>a;
	cout<<"enter the number of the mangoes"<<endl;
	cin>>b;
	
	Fruit obj;
	obj.show(a,b);
}

