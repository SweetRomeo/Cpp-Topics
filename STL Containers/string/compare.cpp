/*-------------------------------------------------------
string sınıfının compare fonksiyonu.
Aşağıdaki örnek için 0 değeri üretilecektir çünkü
3 indeksli karakterden başlanarak 3 karakter "han" yazısıyla
karşılaştırılmıştır. Aynı olduğu görülünce aynı strcmp'de olduğu
gibi 0 değeri üretilecektir.
--------------------------------------------------------*/
#include <iostream>
#include <string>

int main()
{
    std::string str{"gokhan acer"};

    std::cout << std::boolalpha <<str.compare(3,3,"han") << '\n';
}