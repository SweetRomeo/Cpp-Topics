/*-------------------------------------------------------
Aşağıdaki örnekte bir ambiguity söz konusudur. Bunun nedeni
const referanslara sabit ifadelerinin de bağlanabilmesidir.
şüphesiz burada const referans bağlanan bir geçiçi nesnedir ancak
bağlanma durumu geçerlidir.
--------------------------------------------------------*/
#include <iostream>

void foo(int){
    std::cout << "1" << '\n';

}
void foo(const int &){
    std::cout << "2" << '\n';
}

int main()
{
    foo(12);
}