/*2. WAP to demonstrate usage of Method Overloading concept  .*/

#include<iostream>
using namespace std;

class user{
	public:
		int a;
		int b;
	void fun(){
		cout<<"hello world"<<endl;
		
	}
	void fun(int a, int b){
		
		cout<<"the number:"<<a+b<<endl;
		
	}
};
main(){
	user u;
	u.fun();
	u.fun(30,10);
}
