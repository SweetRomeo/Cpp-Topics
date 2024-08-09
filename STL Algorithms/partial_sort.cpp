/*-------------------------------------------------------
Aşağıdaki örnekte partial_sort algoritmasıyle ilgili bir
örnek verilmiştir. Partial sort algoritması belli aralıktaki
belli bir kısmı sıralayan bir sıralama algoritmasıdır. partial_sort
algoritmasının genel biçimi aşağıdaki gibidir:
partial_sort(<sıralanacak aralığın başlangıç konumu>,<sıralanacak aralığın son konumu>,
             <arasından sıralama yapılacak elemanların son konumu>);
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
    std::partial_sort(iVec.begin(), iVec.begin() + 3,iVec.end());
    print(iVec);
}