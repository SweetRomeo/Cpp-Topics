/*----------------------------------------
 Aşağıdaki örnekte transform algoritmasıyla
 ilgili bir örnek gösterilmiştir.
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
    auto isEvenPed = [] (int val) { return val % 2 == 0; };
    std::vector <int> target(20);
    std::transform(source.begin(), source.end(), target.begin(), isEvenPed);
    for (auto& iter : target) {
        std::cout << "For isEven : " << std::boolalpha << isEvenPed(iter) << '\n';
    }
}