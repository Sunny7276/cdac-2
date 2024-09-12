// Day 2
//assignment 7: store details of 10 books in an array
 
/*
#include <iostream>
using namespace std;

class Books{
	int price;
	char name[20];
	public:
		void getData(){
			cout<<"Enter Booke Price And Name : ";
			cin>>price>>name;
		}
		
		void putData(){
			cout<<"Name And Prices Of Books Are : "<<name<<"  "<<price<<endl;
		}
};

int main(){
	int n=2;
	Books obja[n];
	for(int i=0;i<n;i++){
		cout<<"Enter Book "<<i+1<<" Data : ";
		obja[i].getData();
	}
	for(int i=0;i<n;i++){
		cout<<"Book "<<i+1<<" Data : ";
		obja[i].putData();
	}
}
*/

//---------------------------------------------------------
//day 3 
// code1: malloc

/*
#include <iostream>
using namespace std;
#include <stdlib.h>
int main(){
	int* p;
	int num;
	printf("Enter No. Of Elements: ");
	scanf("%d",&num);
	p=(int*) malloc(num*(sizeof(int)));
	printf("Enter Elements: ");
	for(int i=0;i<num;i++){
		scanf("%d",&p[i]);
	}
	printf("Display Elements: ");
	for(int i=0;i<num;i++){
		printf("%d ",p[i]);
	}
	free(p);
}
*/

//--------------------------------------------

// code2: new and delete operator

/*
#include<iostream>
using namespace std;
int main(){
	int *a;
	float *b;
	char *c;
	
	a= new int(20);
	b= new float(12.12);
	c= new char('a');
	cout<<*a<<endl;
	cout<<*b<<endl;
	cout<<*c<<endl;
	delete a;
	delete b;
	delete c;
}
*/

//----------------------------------------------

//code3: Dyanamic allocation for arrays:
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter No.OF Elements: ";
	cin>>num;
	int* p = new int[num];
	cout<<"enter Elements: ";
	for(int i=0;i<num;i++){
		cin>>p[i];
	}
	cout<<"Display Elements: ";
	for(int i=0;i<num;i++){
		cout<<p[i]<<" ";
	}
	delete[] p;
}
*/

//-------------------------------------------

//code 4 : Dyanamic allocation for strings:
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter No. OF Characters: ";
	cin>>num;
	char* p = new char[num+1];
	cout<<"Enter String: ";
	cin>>p;
	cout<<"String Entered: "<<p;
	delete[] p;
}
*/

//------------------------------------------

/* code 5: C++ Program to store GPA of n number of 
students and display it where n is the number of 
students entered by the user
*/
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter No.OF Students: ";
	cin>>num;
	float* gpa = new float[num];
	for(int i=0;i<num;i++){
		cout<<"enter GPA OF Student "<<i+1<<": ";
		cin>>gpa[i];
	}
	
	for(int i=0;i<num;i++){
		cout<<"GPA OF Student "<<i+1<<": ";
		cout<<gpa[i]<<" "<<endl;
	}
	delete[] gpa;
}*/

//------------------------------------------

/*code6: accept no of subjects and name from the 
user dynamically and accept marks for each subject 
and display average and name of the student
*/
#include<iostream>
using namespace std;

int main(){
	int num,sum=0;
	float avg;
	int* m;
	char* n;
	cout<<"enter No. of subjects: ";
	cin>>num;
	m= new int[num];
	n= new char[num+1];
	cout<<"Enter Marks: ";
	for(int i=0 ; i<num; i++){
		cin>>m[i];
	}
	for(int i=0;i<num;i++){
		sum=sum + m[i];
	}
	cout<<"Enter Name: ";
	cin>>n;
	cout<<"Student Name is: "<<n<<endl;
	avg= (float)sum/num;
	cout<<"Avg is: "<<avg;
	delete[] m;
	delete[] n;
	
}





