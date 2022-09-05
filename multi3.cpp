/*3. WAP for unary increment (++) and decrement (--) operator overloading.*/

#include<iostream>
using namespace std;

class vi{
	public: 
	void operator ++(){
		
		cout<<"increament"<<endl;
	}
	void operator --(){
		cout<<"decreament"<<endl;
	}
};
main(){
	vi obj;
	++obj;
	--obj;
}
