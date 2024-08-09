/*-------------------------------------------------------
Aşağıdaki örnekte count_if algoritmasıyle ilgili bir
örnek verilmiştir. count_if adından da anlaşılabileceği gibi
çeşitli koşullar sağlanıyorsa say şeklinde çalışır. Örneğin
burada 100'ün altında olan sayılar sayılmıştır.
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
    auto fPed = [] (int val) -> bool { return val < 100;};
    auto count = std::count_if(iVec.begin(),iVec.end(), fPed);
    std::cout << "count : " << count << '\n';
}