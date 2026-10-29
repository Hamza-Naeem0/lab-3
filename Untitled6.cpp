#include<iostream>
using namespace std;

int main(){
	int count=0;
	int odd=0;

	int arr[10]={1,2,3,4,5,6,7,8,9,10};
		int *ptr=arr;
	for(int i=0;i<10;i++){
		
		if( (*ptr+i)%2==0){
			count++;
			
		}
		else{
			odd++;
		}
		
	}
	
	cout<<"even"<<count<<endl;
	cout<<"odd"<<odd<<endl;
	
}