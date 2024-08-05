/*-------------------------------------------------------
  clear fonksiyonu mapi boşaltır. empty fonksiyonuyla
  mapin boş olup olmadığı kontrol edilebilir. map boş
  ise true map dolu ise false değeri döndürülür.
--------------------------------------------------------*/

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map <int, std::string> student = { {1610, "Fatih" }, { 1629, "Berke" } };
    student.clear();

    for (const auto& [number, name] : student) {
        std::cout << "name : " << name << '\n';
        std::cout << "number : " << number << '\n';
    }
    std::cout << std::boolalpha << student.empty() << '\n';
}