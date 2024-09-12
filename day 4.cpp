// day 4
// code1: Dynamic constructor
/*
#include <iostream>
using namespace std;
class Temp{
	int* ptr;
	public:
		Temp(){
			cout<<"constructor is called"<<endl;
			ptr=new int;
			*ptr=10;
		}
		void display(){
			cout<< *ptr<<endl;
		}
		~Temp(){
			cout<<"Destructor is called"<<endl;
			if(ptr){ //if ptr is null go out
				delete ptr;
			}
			ptr=NULL;
		}
};

int main()
{
	Temp obj;
	obj.display();
	obj.~Temp();
}
*/

//--------------------------------------
//code2: Dynamic Constructor (String Operations)
/*
#include <iostream>
using namespace std;
#include <string.h>

class Str{
	int len;
	char* ptr;
	public:
		void charDisplay(){
			cout<<"Length is: "<<len<<"   "<<"char is : "<<*ptr<<endl;
		}
		
		void stringDisplay(){
			cout<<"Length is: "<<len<<"   "<<"String is : "<<ptr<<endl;
		}
		
		Str(){
			len=1;
			ptr=new char[len+1];
			*ptr='F';
		}
		
		Str(char* sp){
			len=strlen(sp);
			ptr = new char[len+1];
			strcpy(ptr,sp);
		}
		
		Str(char ch, int size){
			len=size;
			ptr=new char[size+1];
			for(int i=0;i<len;i++){
				ptr[i]=ch;
			}
			ptr[size+1]='\0';
		}
		
		Str(int size){
			len=size;
			ptr=new char[len+1];
			cout<<"Enter String: ";
			cin>>ptr;
		}
		~Str(){
			cout<<"Destructor is Called:"<<endl;
			if(ptr){
				delete ptr;
			}
			ptr=NULL;
		}
	
};

int main(){
	Str obj;
	obj.charDisplay();
	
	Str obj1("hrishi");
	obj1.stringDisplay();
	
	Str obj2('#',10);
	obj2.stringDisplay();
	
	Str obj3(5);
	obj3.stringDisplay();
}
*/

//----------------------------------------------
// code3: Dynamic Constructor (Integer Max Min)
/*
#include<iostream>
using namespace std;

class Inte{
	int size;
	int* ptr;
	public:
		Inte(){
			cout<<"Enter Number of Elements: ";
			cin>>size;
			ptr=new int[size];
		}
		
		void get(){
			cout<<"Enter Numbers: ";
			for(int i=0;i<size;i++){
				cin>>ptr[i];
			}
		}
		
		void put(){
			cout<<"Numbers Are: ";
			for(int i=0;i<size;i++){
				cout<<ptr[i]<<" ";
			}
			cout<<endl;
		}
		
		int max(){
			int m=ptr[0];
			for(int i=0;i<size;i++){
				if(m<ptr[i]){
					m=ptr[i];
				}
			}
			return m;
		}
		
		int min(){
			int m=ptr[0];
			for(int i=0;i<size;i++){
				if(m>ptr[i]){
					m=ptr[i];
				}
			}
			return m;
		}	
};

int main(){
	Inte a;
	a.get();
	a.put();
	cout<<"Maximun is: "<<a.max()<<endl;
	cout<<"Minimun is: "<<a.min();
}
*/

//-------------------------------------------
//code4: Implicit Copy Constructor
/*
#include<iostream>
using namespace std;

class Temp{
	int x,y;
	public:
		Temp(int p,int q){
			x=p;
			y=q;
		}
		
		void show(){
			cout<<"  "<<x<<"  "<<y<<endl;
		}
};

int main(){
	Temp obj1(1,2);
	Temp obj2(obj1);
	obj1.show();
	obj2.show();
	return 0;
}
*/
//-------------------------------------
//code5: Dangling Pointer situation
/*
#include<iostream>
using namespace std;
#include<string.h>
class Dp{
	int len;
	char* ptr;
	public:
		Dp(char * sptr){
			len=10;
			ptr=new char[len+1];
			strcpy(ptr,sptr);	
		}

		~Dp(){
			delete[] ptr;	
		}
		void show(){
			cout<<len<<"  "<<ptr<<endl;
		}
};
int main(){
	
	Dp obj1("Hello");
	obj1.show();
	
	{
		Dp obj2(obj1);
		obj2.show();
	}
	
	obj1.show();
}
*/

//---------------------------------------------------
// code6: Avoiding Dangling Pointer

#include<iostream>
using namespace std;
#include<string.h>
class Dp{
	int len;
	char* ptr;
	public:
		Dp(char * sptr){
			len=10;
			ptr=new char[len+1];
			strcpy(ptr,sptr);	
		}
		Dp(Dp &nobj1){
			this->len=nobj1.len;
			this->ptr=new char[this->len+1];
			strcpy(this->ptr,nobj1.ptr);
		}
		~Dp(){
			delete[] ptr;	
		}
		void show(){
			cout<<len<<"  "<<ptr<<endl;
		}
};
int main(){
	
	Dp obj1("Hello");
	obj1.show();
	
	{
		Dp obj2(obj1);
		obj2.show();
	}
	
	obj1.show();
}


