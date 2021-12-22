#include <iostream>
using namespace std;
class Group{
    //
public:    
    int girl;
    int boy;
    
    int total();
    
    Group(int a = 0, int b=0){
        girl = a;
        boy = b;
    }
    
    
    ~Group(){cout <<"Group was denied\n";}
};

int Group::total(){
    return girl+boy;
    }
