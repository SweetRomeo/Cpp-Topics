/*-------------------------------------------------------
Aşağıdaki örnekte sort algoritması gönsterilmiştir.
sort algoritması veri yapısının başlangıç iteratörü ve bitiş
iteratörünü parametre olarak alır. 3.parametreye bir şey göndermek
ile std::less<int>{} demek arasnda herhangi bir fark yoktur.
Ancak buraya std::greater<int>{} geçildiğinde sıralama büyükten
küçüğe değil küçükten büyüğe şeklinde yapılacaktır.
--------------------------------------------------------*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>

void randomFill(std::vector<int>& iVec) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist (1,200);
    for (int & i : iVec) {
        i = dist(mt);
    }
}

template<class Con>
void print(Con con) {
    for (auto iter = con.begin(); iter != con.end(); ++iter) {
        std::cout << *iter << ' ';
    }
    std::cout << '\n';
}


int main()
{
    std::vector <int> iVec(20);
    randomFill(iVec);
    print(iVec);
    std::sort(iVec.begin(), iVec.end());
    print(iVec);
    std::sort(iVec.begin(), iVec.end(), std::greater<int>{});
    print(iVec);
    std::sort(iVec.begin(), iVec.end(), std::less<int>{});
    print(iVec);
}