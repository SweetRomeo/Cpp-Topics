/*-------------------------------------------------------
  map containerına eleman eklenirken insert fonksiyonu farklı
  argümanalar alabilir. Bunun dışında emplace fonksiyonu
  kullanılarak da eleman eklemesi gerçekleştirilebilir.
--------------------------------------------------------*/
#include <iostream>
#include <map>

int main() {
    using namespace std;
    map<int,double> mymap{{12,45.6},{78,9.78},{37,102.34}};

    pair<int,double> px{234,45.79};
    mymap.insert(px);
    mymap.insert(pair<int,double>{5,2.3});
    mymap.insert({4,2.23});
    mymap.insert(make_pair(5,1.1));
    mymap.emplace(56,1.1);

    for(auto p : mymap){
        cout << p.first << " " << p.second << '\n';
    }
}