/*-------------------------------------------------------
Aşağıdaki örnekte bir ambiguity söz konusudur. Bunun
nedeni func fonksiyonunun 0 ile çağrılmasından kaynaklanmaktadır.
0 sabitinin diğer bir karşılığı NULL olmasından dolayı
Burada int* parametreli func da viable bir fonksiyondur.
--------------------------------------------------------*/
#include <iostream>

void func(double) {
    std::cout << "func(double)\n";
}

void func(int *) {
    std::cout << "func(int*)\n";
}

int main()
{
    func(0);
}