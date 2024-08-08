/*----------------------------------------
 Aşağıdaki örnekte copy_if algoritmasıyla
 ilgili bir örnek gösterilmiştir. copy_if
 adından da anlaşılabileceği gibi lamda ifadesindeki
 şartlar sağlandığı takdirde hedef containera
 kopyalama yapar. copy_if fonksiyonunun
 genel biçimi şu şekildedir.
 copy_if(<kaynak containerın begini>,<kaynak containerın endi>,
         <hedef containerın begini>,koşullu lamda ifadesi);
----------------------------------------*/
#include <iostream>
#include <random>
#include <algorithm>

void randomFill(std::vector<int>& iVec)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 200);
    for (int& i : iVec) {
        i = dist(mt);
    }
}

template<class Con>
void print(Con con)
{
    for (auto iter = con.begin(); iter != con.end(); ++iter) {
        std::cout << *iter << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector <int> source(20);
    randomFill(source);
    print(source);
    auto fPed = [] (int val) -> bool { return val > 100; };
    std::vector <int> target(20);
    std::copy_if(source.begin(), source.end(), target.begin(), fPed);
    print(target);
}