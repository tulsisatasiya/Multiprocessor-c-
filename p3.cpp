#include<iostream>

using namespace std;

class over{
	private:
		int a;
		
		public:
			void set(int n1){
				a=n1;
				
			}
			
			void get(){
				cout<<a<<endl;
			}
			
		    over operator ++ (int){
				
			    over temp;
			    
			    temp.a=a++;
			    
			    return temp;
			}
			
			over operator ++(){
				
			    over temp;
			    
			    temp.a=++a;
			    
			    return temp;
			}
			
			over operator -- (int){
				
			    over temp;
			    
			    temp.a=a--;
			    
			    return temp;
			}
			
			over operator -- (){
				
			    over temp;
			    
			    temp.a=--a;
			    
			    return temp;
			}
};

int main(){
	
	over o1,o2,o3,o4,o5;
	
	o1.set(5);
	o1.get();
	
	o2=o1++;
	o2.get();
	
	o3=++o1;
	o3.get();
	
	cout<<"--"<<endl;
	
	o4=o1--;
	o4.get();
	
	o5=--o1;
	o5.get();
	
	return 0;
}
