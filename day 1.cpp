//code 1 class

/*
#include <iostream>
using namespace std;
class A {
	int a;
	public:
		void get()
		{
			a = 100;
			cout<<a; //allowed
		}
};
int main()
{
	A obj;
	obj.get();
}
*/

//----------------------------------------

// code 2 boolean
/*
#include<iostream>
using namespace std;
int main()
{
	bool a = true ;
	bool b = false;
	printf("True : %d\n" , a);
	printf("False : %d\n" , b);
	cout<<a<<endl;
	cout<<b;
}
*/

//--------------------------------------

//code 3 constant
/*
#include <iostream>
using namespace std;
int main()
{
	const int no= 10;
	//no = no + 10; //error
	cout<<no;
	return 0;
}
*/

//---------------------------------------------

//code 4 const pointer
/*
#include<iostream>
using namespace std;
int main()
{
	int p = 10 , q = 20;
	int * const ptr = &p;
	//ptr = &q  // error cannot reasign address const pointer
	*ptr = 15;
	cout<<"the value of p :"<<p<<endl;
	cout<<"the value of ptr :"<<*ptr<<endl;
}
*/

//----------------------------------------------


//code 5  pointer to const int
/*
#include <iostream>
using namespace std;
int main ()
{
	int p = 10, q = 20;
	const int* ptr = &p;
	ptr = &q;
	cout<< ptr<<endl;
	ptr = &p;
	cout<<ptr<<endl;
	//*ptr = 15; //cannot reassign value to constant int
	cout<<"the value ot ptr is :"<<*ptr<<endl;
	p=30;
	cout<<"the value ot p is :"<<p<<endl;
}

//int* const ptr=&c;
//
//const int* ptr= &c;
//
//const int* const ptr =&c;
*/

//--------------------------------------------------------

//code 6 cont pointer to const int
/*
#include<iostream>
using namespace std ;
int main()
{
	int p = 10 , q = 20;
	const int* const ptr = &p;
	//ptr = &q;
	cout<<ptr<<endl;
	//ptr = &p;
	cout<<ptr<<endl;
	//*ptr = 15;
	cout << " The value of ptr: " << *ptr << endl; 
}
*/

//--------------------------------------------------

//code 7 reference variable
 
 /*
#include <iostream>
using namespace std;
int main(){
	int no = 10;
	int &refno = no;
	cout<<no<<" "<<refno<<endl;
	no=66;
	cout<<no<<"  "<<refno<<endl;
	cout<<&no<<"  "<<&refno<<endl;
}
*/


//--------------------------------------------

//code 8 reference swap
/*
#include<iostream>
using namespace std;
int main(){
	int p , q;
	cout<<"enter values of p and q : ";
	cin>>p>>q;
	cout<<"before swap :" <<p<< " "<<q<<endl;
	swap(p,q);
	cout<<"after swap :"<<p<< " "<<q<<endl;
}
void swap(int &a , int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
*/

//-----------------------------------------

//code 9 static variable
/*
#include <iostream>
using namespace std;
void demo()
{
	static int count = 0;
	cout << count << " ";
	count++;
}
int main(){
	for(int i = 0 ; i < 5 ; i++){
		demo();
	}
	return 0;
}
*/

//-----------------------------------

//code 10 static variable 2

#include <iostream>
using namespace std;
class Complex{
	int real;
	int img;
	static int cnt;
	public:
		void acceptNo();
		void setReal(int);
		int getimg()
		void show()}{
			cout<<"complex no is "<<real<< "+"<<img<<"i"<<endl;
		}
		static getcount(){
			cnt = 10;
			return cnt ;
		}
};
int Complex::cnt;
void Complex :: acceptNo(){
	cout<<"enter real and img no :\n";
	cin>>real>>img;
}

