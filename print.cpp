/****************************
Написать перегруженную функцию print, которая принимает на вход и выводит на экран: а) текстовые строки, б) целочисленные массивы, в) массивы чисел с плавающей точкой.
******************************************/

#include <iostream>
using namespace std;
void print(int *iarrai){
    
    for(int i = 0; i < 4; i++){
        cout << iarrai[i] << " ";
        };
    cout << '\n';
};

void print(float *flarrai){
    for(int i = 0; i < 4; i++){
        cout << flarrai[i] << " ";
        };
    cout << '\n';
};

void print(char *word){
    while(*word){cout << *word; word++;};
    cout <<'\n';
};

int main()
{
    print("Testing");
    int a[] = {1, 2, 3, 4};
    float b[] = {5, 6, 7, 8};
    print(a);
    print(b);
    

    return 0;
}
