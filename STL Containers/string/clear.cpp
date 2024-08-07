/*-------------------------------------------------------
string sınıfının clear fonksiyonu yazıyı boşaltır.
--------------------------------------------------------*/
#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::cout << "Enter a text?\n";
    std::getline(std::cin, text);
    std::cout << text << '\n';
    text.clear();
    std::cout << text << '\n'; //boş yazı basar.
}