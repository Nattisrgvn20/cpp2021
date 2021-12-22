/***********************************************
Написать класс студенческой группы Group, имеющей два параметра: girls и boys - число девушек и юношей в группе.

Класс содержит метод total : при вызове он дает общее число студентов в группе.

Далее, написать функцию SummGroups.

Эта функция принимает два объекта нашего класса Group и возвращает объект класса Group, у которого свойства girls и boys равны сумме аналогичных свойств входных объектов.
***********************************************/
#include <iostream>
#include "group.h"
using namespace std;

Group SummGroups(Group a, Group b){
    Group c;
    c.girl = a.girl + b.girl; 
    c.boy = a.boy + b.boy;
    return c;
} 

int main()
{
    Group group1(12, 13), group2(14,8);    // объявление двух групп
    cout << group1.girl << "\n";    // число девушек
    cout << group1.boy << "\n";    // число юношей
    cout << group1.total() << "\n";    // число учащихся первой группы
    cout << group2.total() << "\n";    // число учащихся второй группы
    cout << SummGroups(group1, group2).total() << "\n";    // общее число

    return 0;
}
