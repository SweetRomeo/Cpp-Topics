/*----------------------------------------
 static_cast operatörü temel türler arası dönüşüm
 söz konusu olduğu durumlar için kullanılan
 bir tür dönüştürme operatörüdür. Aşağıdaki
 örnekteki kodda getAverage fonksiyonu
 kendisine gönderilen containerının elemanlarının
 ortalamasını elde eden bir fonksiyondur. Elemanların
 türü int olduğu ve ortalamanın türü double
 türden olduğu için bir tür dönüşümü gerekmektedir.
----------------------------------------*/
#include <iostream>
#include <random>

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


template<class Con>
double getAverage(Con con)
{
    int sum = 0;
    for (auto& element : con) {
        sum += element;
    }
    return static_cast<double>(sum) / con.size();
}

int main()
{
    std::vector <int> source(20);
    randomFill(source);
    print(source);
    auto average = getAverage(source);
    std::cout << "Average : "<< average << '\n';
}