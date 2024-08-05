/*-------------------------------------------------------
Mape vectorde bulunan tüm isimleri ekliyip bu isimlere
karşılık gelen anahtar değerlerini 1 arttıran kod aşağıdaki
gibi yazılabilir.
--------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <map>

int main() {
    using namespace std;
    vector<string> names {"majid","bilge","necati","irma","fatih"};
    map<string,int> cmap;
    for(const auto& s:names){
        ++cmap[s];
    }
}