/*-------------------------------------------------------
 insert_or_assign fonksiyonu eğer aynı anahtarlı br eleman
 varsa onu override eder. Ancak o anahtar bir eleman yoksa
 o zaman da o anahtarlı elemanı ekler.
--------------------------------------------------------*/

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map <int, std::string> student = { {1610, "Fatih" }, { 1629, "Berke" } };
    student.insert_or_assign(1610, "Mehmet");
    std::cout << "Size: " << student.size() << '\n';
    for (const auto& [number, name] : student) {
        std::cout << "name : " << name << '\n';
        std::cout << "number : " << number << '\n';
    }
}