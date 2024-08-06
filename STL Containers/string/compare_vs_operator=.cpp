/*-------------------------------------------------------
string sınıfının compare fonksiyonu iki yazı eşitliğinde
tercih edilmemelidir. String sınıfının karşılaştırma operatörü
overload edildiğinden aynı işlem bu şekilde de yapılabilir.
--------------------------------------------------------*/
#include <iostream>
#include <string>

int main()
{
    std::string s1;
    std::cout << "Birinci yaziyi giriniz?\n";
    std::getline(std::cin, s1);
    std::string s2;
    std::cout << "Ikinci yaziyi giriniz?\n";
    std::getline(std::cin, s2);
    if (!s1.compare(s2)) {
        std::cout << "yazilar ayni\n";
    }
    else {
        std::cout << "Yazilar farkli\n";
    }
}