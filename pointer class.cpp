#include<iostream>
using namespace std;

class hamza{
	public:
		int x;
		
		
		hamza(int a){
		x=a;
		
		}
		void display(){
			cout<<x<<endl;
			
		}
		

};
int main(){
	

       hamza *ptr=new hamza(54);
      
	ptr->display();
	cout<<ptr<<endl;
	
	
	
	
}