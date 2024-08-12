/*-------------------------------------------------------
reinterpret_cast tür dönüştürme operatörüyle ilgili aşağıda
bir örnek gösterilmiştir. reinterpret cast tür dönüştürme operatörü
kullanılarak farklı pointer türleri birbirine dönüştürülebilir.
Ancak void* türünde başka türlere dönüşümlerde static_cast tür
dönüştürme operatörü de tercih edilebilir.
--------------------------------------------------------*/
#include <iostream>


void gSwap(void* vp1, void* vp2, size_t size) {
    char* cp1 = reinterpret_cast<char*>(vp1);
    char* cp2 = reinterpret_cast<char*>(vp2);
    while (size--) {
        char temp = *cp1;
        *cp1 = *cp2;
        *cp2 = temp;
        cp1++;
        cp2++;
    }
}

int main()
{
    int x = 25, y = 89;
    std::cout << "x : " << x << '\n';
    std::cout << "y : " << y << '\n';
    gSwap(&x,&y,sizeof(x));
    std::cout << "x : " << x << '\n';
    std::cout << "y : " << y << '\n';
}