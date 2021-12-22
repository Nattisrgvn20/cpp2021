#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    using namespace vecmath;
    Vector vec[5] = {{3, 3}, {1, -1}, {-4, 2}, {-3, -1}, {12.3, -0.9}};
    Vector *k = vec;
    for (int i = 0; i < 5; i++){
        k -> report();
        k++;
    }

    return 0;
}
