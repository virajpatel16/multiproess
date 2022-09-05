/*1. WAP which illustrate the use of Method Overriding concept.*/

#include<iostream>
using namespace std;

class data{
	public:
		int a;
		int b;
		int c;
	void fun(){
		cout<<"the apple"<<endl;
	}
	void fun(int a,int b){
		cout<<"the number:"<<a+b<<endl;
		
	}
	void fun(int a,int b,int c){
		cout<<"the number:"<<a+b+c<<endl;
		
	}
};
main(){
	
	data d;
	d.fun();
	d.fun(10,5);
	d.fun(60,30,20);
}
