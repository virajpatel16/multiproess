/*5. WAP to add two distances using binary plus (+) operator overloading.*/

#include<iostream>
using namespace std;

class fun{
	public:
    int feet=12;
    int inch=3;
     int sum;
	     void operator +(){
     	
     	cout <<"add two distance :"<<feet+inch<<endl;

     	
	 }
    
};
main(){
	
	fun f;
	+f;
}
