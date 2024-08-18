/*---------------------------------------------
constexpr fonksiyonlar
---------------------------------------------*/
#include <iostream>

constexpr bool isPrime(const int val)
{
    if(val <= 1) {
        return false;
    }
    if (val % 2 == 0) {
       return val == 2;
    }
    if (val % 3 == 0) {
        return val == 3;
    }
    if (val % 5 == 0) {
        return val == 5;
    }
    if (val % 7 == 0) {
        return val == 7;
    }
    if (val % 11 == 0) {
        return val == 11;
    }
    for (int i = 11; i * i < val; i += 2) {
        if (val % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    if(isPrime(28)) {
        std::cout << "Okay for is Prime\n";
    }
    else {
        std::cout << "Not okay for is Prime\n";
    }
    if(isPrime(7)) {
        std::cout << "Okay for is Prime\n";
    }
    else {
        std::cout << "Not okay for is Prime\n";
    }
}
