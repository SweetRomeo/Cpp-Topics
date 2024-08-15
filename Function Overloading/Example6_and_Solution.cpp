/*-------------------------------------------------------
Aşağıdaki örnekte 1 nolu foo çağrısı için int parametreli
foo fonksiyonu çağrılacaktır. Bunun nedeni sabit ifadesine
sol taraf referansının bağlanamamasından kaynaklanmaktadır.
Burada bir sağ taraf referansına sahip overload olsaydı bu durumda
ambiguity oluşacaktı.
2 nolu foo çağrısı içinse durum biraz daha farklıdır. x
değişkeni bir sol taraf değeri olduğu için sol taraf referansına
bağlanabilir. Ancak türü de int olduğuna göre iki foo çağrısı
için de exatch match durumu da söz konusudur. Buna göre
ambiguity oluşur.
--------------------------------------------------------*/
#include <iostream>

void foo(int) {
    std::cout << "1" << '\n';
}

void foo(int &) {
    std::cout << "2" << '\n';
}

int main() {
    int x = 10;
    foo(10); //1
    foo(x); //2
}