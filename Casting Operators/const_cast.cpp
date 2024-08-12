/*-------------------------------------------------------
const_cast tür dönüştürme operatörü kullanılarak aşağıdaki
örnekte olduğu gibi bir const bir referans veya bir pointerın
gösterdiği nesnenin değeri değiştirilebilir. Ancak bu durumun
yalnızca bu örnekte olduğu gibi x değişkeninin non-const bir yapıya
sahip olması gerekmektedir. Aksi durumda tanımsız davranış oluşur.
--------------------------------------------------------*/
#include <iostream>

int main()
{
    const int x = 10;
    const int& r = x;
    const int* ptr = &x;
    std::cout << "r : " << r << '\n';
    std::cout << "*ptr : " << *ptr << '\n';
    const_cast<int&>(r) = 34;
    std::cout << "r : " << r << '\n';
    std::cout << "*ptr : " << *ptr << '\n';
    *const_cast<int*>(ptr) = 79;
    std::cout << "r : " << r << '\n';
    std::cout << "*ptr : " << *ptr << '\n';
}