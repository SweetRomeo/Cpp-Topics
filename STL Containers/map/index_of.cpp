/*-------------------------------------------------------
 map sınıfının index of operatörü overload edilmiştir.
 Overload edilmiş index of operatörü kullanılarak anahtara
 karşılık gelen değer değiştirilebilir.
--------------------------------------------------------*/

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map <int, std::string> student = { {1610, "Fatih" }, { 1629, "Berke" } };
    student.operator[](1610) = "Mehmet";
    for (const auto& [number, name] : student) {
        std::cout << "name : " << name << '\n';
        std::cout << "number : " << number << '\n';
    }
}