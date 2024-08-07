/*-------------------------------------------------------
string sınıfının substr fonksiyonunun iki adet overloadı
bulunmaktadır. tek parametrelisi belli bir karakterden başlayıp sona
kadar al anlamına gelirken, iki parametrelisi belli indeksten başlayıp
belli sayıdan karakter almak için kullanılır.
--------------------------------------------------------*/
#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::cout << "Enter a text?\n";
    std::getline(std::cin, text);
    std::cout << text.substr(5) << '\n'; //5.karakterden sonrasını al
    std::cout << text.substr(1,3) << '\n'; //1.karakterden sonraki 3 karakteri al.
}