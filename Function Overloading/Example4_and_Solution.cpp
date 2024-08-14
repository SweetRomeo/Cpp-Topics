/*-------------------------------------------------------
Aşağıdaki örnekte 1 nolu func çağrısında bir promotion söz konusudur.
Promotion daha önce de bahsettiğimiz gibi short ve bool gibi int
altı türlerden int türüne ve float türünden double türüne doğru
gerçekleştirilebilir. Buna fonksiyon çağrısı double parametreli
func fonksiyonu için yapılacaktır.

2 Nolu func çağrısı içinse durum biraz daha farklıdır. Burada
unsigned türden bir sabit için tüm fonksiyonlar standard conversion
olacaktır bu durumda bir iki anlamlılık(ambiguity) söz konusudur.
--------------------------------------------------------*/
#include <iostream>

void func(double) {
    std::cout << "func(double)\n";
}

void func(char) {
    std::cout << "func(char)\n";
}

void func(int) {
    std::cout << "func(int)\n";
}

int main()
{
    func(3.5F); // 1
    func(10u);  // 2
}