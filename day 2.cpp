//assignment 1 find maximum element in array 

/*
#include <iostream>
using namespace std;
class MaxArray{
	public:
		int a[5]= {10 , 5, 55, 74, 21};
		int max ;
		void getMax(int *b);
		
};
void MaxArray :: getMax(int *b){
	for(int i = 0 ; i < 5; i++){
		if(b[i] > b[i+1]){
			max = b[i];
		}
		else{
			max = b[i+1];
		}
	}
	cout<<"max element is : "<<max;
}

int main(){
	MaxArray obj1;
	obj1.getMax(obj1.a);

}

*/

//-----------------------------------------------------------------

//assignment no 2 calculate average of all elements of an array using pointer

/*
#include <iostream>
using namespace std;
class GetAverage{
	public:
		int a[5] = {10 ,20, 30, 40, 50};
		int sum = 0;
		float avg;
		void getAvg(int *);
};

void GetAverage :: getAvg(int *b){
	for(int i =0 ; i < 5 ; i++){
		sum = sum + *(a+i);
	}
	cout<<"sum is :"<<sum<<endl;
	avg = sum / 5;
	cout<<"avg is: "<<avg;
}

int main(){
	GetAverage obj ;
	obj.getAvg(obj.a);
}

*/
//--------
//code 2

//#include <iostream>
//using namespace std;
//class GetAverage{
//	
//		int a[5] = {10 ,20, 30, 40, 50};
//		int sum = 0;
//		float avg;
//		
//		public:
//		void getAvg();
//};
//
//void GetAverage :: getAvg(){
//	GetAverage obj1;
//	for(int i =0 ; i < 5 ; i++){
//		obj1.sum = obj1.sum + *(a+i);
//	}
//	cout<<"sum is :"<<obj1.sum<<endl;
//	obj1.avg = obj1.sum / 5;
//	cout<<"avg is: "<<obj1.avg;
//}
//
//int main(){
//	GetAverage obj ;
//	obj.getAvg();
//}

//---------------------------------------------------------------

//assignment 3- copy elements of 1 array into another using pointer
/*
#include <iostream>
using namespace std;
void copyArray (int *p){
	  int b[5];
	  for (int i = 0 ; i < 5; i++){
	  	*(b+i) = *(p+i);
	  	cout<<b[i]<<"  ";
	  }
	  
}

int main(){
	int a[5] = {10 , 20, 30, 40, 50};
	copyArray((a+0));
}
*/


//------------------

// assignment no 4 : addition of 2 matrix

/*
#include <iostream>
using namespace std;

void add2M( int a[2][2] , int b[2][2]){
	for (int i = 0; i<2 ; i++){
		for(int j = 0 ; j<2 ; j++){
			cout<<a[i][j] + b[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int a[2][2] , b[2][2];
	cout<<"enter values for 1st array : ";
	for (int i= 0; i< 2 ; i++){
		for (int j = 0 ; j<2 ; j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter values for 2nd array : ";
	for (int i= 0; i< 2 ; i++){
		for (int j = 0 ; j<2 ; j++){
			cin>>b[i][j];
		}
	}
    add2M(a,b);
	
}

*/

//---------------------------------------------
//assignment 5 : transpose of a matrix

/*
#include<iostream>
using namespace std;
void transpose(int a[2][2]){
	int tran[2][2];
	cout<<"after : "<<endl;
	for (int i = 0; i < 2; i++){
		for (int j =0; j< 2 ; j++){
			tran[i][j] = a[j][i];
			cout<<tran[i][j]<< " ";
		}
		cout<<endl;
	}
}
int main(){
	int a[2][2] ;
	cout<<"enter values for 1st array : ";
	for (int i= 0; i< 2 ; i++){
		for (int j = 0 ; j<2 ; j++){
			cin>>a[i][j];
		}
	}
	cout<<"before: "<<endl;
	for (int i= 0; i< 2 ; i++){
		for (int j = 0 ; j<2 ; j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	transpose(a);
}

*/

//---------------------------------------

//assignment 6 = square of all elements of 2d array 

#include<iostream>
using namespace std;
void square(int a[2][2]){
	cout<<"after : "<<endl;
	for (int i = 0; i < 2; i++){
		for (int j =0; j< 2 ; j++){
			cout<<a[i][j] * a[i][j]<< " ";
		}
		cout<<endl;
	}
}
int main(){
	int a[2][2] ;
	cout<<"enter values for 1st array : ";
	for (int i= 0; i< 2 ; i++){
		for (int j = 0 ; j<2 ; j++){
			cin>>a[i][j];
		}
	}
	cout<<"before: "<<endl;
	for (int i= 0; i< 2 ; i++){
		for (int j = 0 ; j<2 ; j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	square(a);
}

