#include <iostream>

using namespace std;

class parent{
   public:
   	
    void print(){
        cout << "parent Function" << endl;
    }
};

class child : public parent{
	
   public:
   	
    void print(){
        cout << "child Function" << endl;
    }
};

int main(){
	
    parent obj;
    obj.print();
    
    return 0;
}
