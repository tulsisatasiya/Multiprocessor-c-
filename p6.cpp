#include<iostream>

using namespace std;

class user{
	private:
		int a;
		int b;
		
		public:
			void set(int n1,int n2){
				a=n1;
				b=n2;
			}
			
			void get(){
				cout<<a<<"\t"<<b<<endl;
				
			}
			
			user operator + (user n){
				
				user temp;
				temp.a =a+n.a;
				temp.b =b+n.b;
				return temp;
			}
			
			user operator - (user n){
				
				user temp;
				temp.a =a-n.a;
				temp.b =b-n.b;
				return temp;
			}
};

int main(){
	
	user u1,u2,u3,u4;
	
	u1.set(40,60);
	u1.get();
	
	u2.set(60,40);
	u2.get();
	
	u3=u1+u2;
	u3.get();
	
	u4=u1-u2;
	u4.get();
	
	return 0;
}
