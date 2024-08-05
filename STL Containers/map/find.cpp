/*-------------------------------------------------------
Aşağıdaki örnekte find fonksiyonu kullanılarak id değerine bağlı olarak söz konusu
anahtara karşılık gelen değerin değiştirilmesi anlatılmak istenmiştir.
--------------------------------------------------------*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

template<typename Iter>
void print(Iter beg, Iter end) {
    while (beg != end) {
        cout << *beg++ << ' ';
    }
    cout << '\n';
}

int main() {

    map<int, string> idmap{{547,   "handesu"},
                           {6350,  "cengiz"},
                           {30456, "esra"},
                           {78272, "mehmet"},
                           {32893, "berke"}};
    for (const auto &[number, person_name]: idmap) {
        cout << number << ' ' << person_name << '\n';
    }

    int ival;
    cout << "bir id degeri giriniz?\n";
    cin >> ival;

    if (auto iter = idmap.find(ival);iter != idmap.end()) {
        cout << "isim : " << iter->second <<'\n';
        iter->second ="nurullah";
    }
    else {
        cout << "bulunamadi" << '\n';
    }
    for(const auto& [number,person_name]:idmap){
        cout << number << " " << person_name << '\n';
    }
}