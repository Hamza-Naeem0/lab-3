#include<iostream>
using namespace std;

int main(){
	int a=10;
	int b=50;

		
	int *ptr1=&a;
	int *ptr2=&b;
	int temp=*ptr1;
	ptr1=&b;
	ptr2=temp;

	cout<<*ptr1<<endl;
		cout<<*ptr2<<endl;
	
}