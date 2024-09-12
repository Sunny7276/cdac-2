// day 6 

//code 1 Inheritance
/*
#include<iostream>
#include <string.h>
using namespace std;
class parent{
	private:
	int temp = 20;
	public:
	char name[6] = "Rahul" ;
	int birthdate = 6;
	void Display(){
		cout<<"name is: "<<name<<endl;
		cout<<"birthdate is: "<<birthdate<<endl;
	}
	
};
class child: public parent{
	int temp2= 30;
	public:
		int age= 7; 
		int license_no= 947837589;
		void show(){
			Display();
			cout<<"age is: "<<age<<endl;
			cout<<"license is: "<<license_no<<endl;
		}
};
int main(){
	child obj1;
	obj1.show();
	cout<<obj1.age;
	cout<<obj1.name;
}
*/

//------------------------------------------------------------------

//code 2: passing value through derived class 
/*
#include <iostream>
using namespace std;
class Rectangle{
	public:
	int length, breadth;
	int area(){
		cout<<"enter length and breadth: "<<endl;
		cin>>length>>breadth;
		return length*breadth;
	}
};

class info: public Rectangle{
	public:
	int result = area();
	void show(){
		cout<<"Area of a rectangle is : "<<result;
	};
};

int main(){
	info obj1;
	obj1.show();
}

*/

//-------------------------------------------------------

//code 3 passing value through derived class objects
/*
#include <iostream>
using namespace std;
class Rectangle{
	public:
	int length, breadth;
	void display(int a , int b){
		cout<<a+b<<endl;
	}
};

class info: public Rectangle{
	public:
		
		void show(){
			int result = length * breadth;
			cout<<"Area of a rectangle is : "<<result;
		};
};

int main(){
	info obj1;
	obj1.length = 9;
	obj1.breadth = 5;
//	obj1.display(5,6);
	obj1.show();
}
*/

//-----------------------------------------

//code 4 :C++ program to demonstrate the working of public
/*
#include <iostream>
using namespace std;
class parent{
	private :
		int n1 = 5;
	protected:
		int n2 = 8;
	public:
		int n3 = 6;
		void display(){
			cout<<"private member value is: "<<n1<<endl;
		}		
};
class child1: public parent {
	private :
		int n4 = 7;
	protected :
		int n5 = 4;
	public:
		void show() {
			cout<<"protected value of base class is : "<<n2<<endl;
		} 
};
int main(){
	child1 obj1;
	obj1.display();
	obj1.show();
	cout<<"public member value is: "<<obj1.n3<<endl;
	
}

*/

//------------------------------------------------------------------

//code 5 :  C++ program to demonstrate the working of private inheritance 
/*
#include <iostream>
using namespace std;
class parent{
	private :
		int n1 = 5;
	protected:
		int n2 = 8;
	public:
		int n3 = 6;
		void display(){
			cout<<"private member value base class is: "<<n1<<endl;
		}		
};
class child1: private parent {
	
	public:
		void show() {
			cout<<"protected value of base class is : "<<n2<<endl;
			cout<<"private value of child1 class is : "<<n3<<endl;
			display();
		} 
};

int main(){
	child1 obj1;
	obj1.show();

	
}

*/



