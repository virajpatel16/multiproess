/*4. WAP to add two objects using binary plus (+) operator overloading.*/
#include<iostream>
using namespace std;


class fun{
	public:
	int a=50;
	int b=40;
	int c=10;
 void operator +(){
   cout<<"the object add:"<<a+b<<endl; 	
 }
 void operator ++(){
 	cout<<"the object 2 add:"<<a+b+c<<endl;
 }
};
main(){
	fun u;
	u.operator +();
	u.operator ++();
	
}
