#include<iostream>
#include<string.h>

using namespace std;

class user{
	public:
		void get(int a){
			cout<<"user 1 : "<<a<<endl;
		}
};

class user2 : public user{
	public:
		void get(int b){
			cout<<"user 2 : "<<b<<endl;
		}
};

int main(){
	user2 u;
	u.user::get(167);
	u.get(5050);
	return 0;
}
