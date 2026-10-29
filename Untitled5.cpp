#include<iostream>
using namespace std;

int main(){
	
	int a=2,b=4,c=6;
	
int *ptr1=&a;
int *ptr2=&b;	
	int *ptr3=&c;
	
	if (*ptr1<*ptr2&&*ptr1<*ptr3){
		cout<<"First is smallest"<<*ptr1<<endl;
	}
	else if(*ptr2<*ptr1&&*ptr2<*ptr3){
		cout<<"second is smallest"<<*ptr2<<endl;
	}
	else{
		cout<<"Third is smallest"<<endl;
	}
	
	
	
}