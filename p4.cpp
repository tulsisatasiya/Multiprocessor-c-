#include<iostream>

using namespace std;

class calc {
    public:
        void calculate() {
        cout << "Error: Invalid number of arguments." << endl;
    }
};
class math : public calc{
	
	public:
		void get(int a,int b){
			cout<<"division:-"<<a/b<<endl;	
		}
		
		void get(int a,int b,int c){
			cout<<"subtraction:-"<<a-b-c<<endl;	
		}
		
		void get(int a,int b,int c, int d){
			cout<<"multiplication:-"<<a*b*c*d<<endl;	
		}
		
		void get(int a,int b,int c, int d,int e){
			cout<<"addition:-"<<a+b+c+d+e<<endl;	
		}
		
		
		
};

int main(){
	
	math c;
	c.get(20,10);
	c.get(100,50,25);
	c.get(10,20,30,40);
	c.get(10,20,30,40,50);
	
	return 0;
	
	
}
