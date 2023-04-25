#include <iostream>

using namespace std;

class Cricket{
    public:
        virtual int getTotalOvers() {
            return 50; 
        }
};

class Match : public Cricket {
    public:
        int getTotalOvers() override{
            return 20; 
        }
};

class OneDayMatch : public Cricket {
    public:
        int getTotalOvers()override{
            return 50; 
        }
};

int main(){
	
    Cricket* c;
    Match m;
    OneDayMatch o;
    
    c = &m;
    cout << "Total overs in a T20 match:- " << c->getTotalOvers() << endl;
    c = &o;
    cout << "Total overs in a One Day match:- " << c->getTotalOvers() << endl;
    
    
    return 0;
}
