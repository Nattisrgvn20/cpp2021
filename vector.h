#include <iostream>
#include <cmath>
namespace vecmath {
    class Vector{
        public:
            float x, y;
            void mirror(){
                x = -x;
                y = -y;
                };
                
            float len(){
                float l;
                l = sqrt(x*x + y*y);
                return l;
                };
            
            float ang(){
                float alpha;
                alpha = asin(x/(this -> len()))*(180/3.14);
                return alpha;
                };
            
            void report(){
                using namespace std;
                cout << " X: " << x << " Y: " << y << '\n';
                this -> mirror();
                cout << " mirror: X: " << x << " Y: " << y << '\n';
                this -> mirror();
                cout << " len: " << this -> len() << '\n';
                cout << " ang: " << this -> ang() << '\n';
                };
            
            
            Vector(double a = 1, double b = 1){
                x = a;
                y = b;
                };
    
            ~Vector(){std::cout <<"Vector annigilatied\n";}
    };
 }
