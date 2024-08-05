/*-------------------------------------------
insert fonksiyonunda eğer mapte olan bir anahtar
ekleniyorsa bu durumda ona karşılık gelen değer
değiştirilmez.
-------------------------------------------*/
#include <string>
#include <map>

int main() {
    std::map <int, std::string> student;
    student.insert(std::make_pair(1, "berke"));
}