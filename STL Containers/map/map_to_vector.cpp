/*-------------------------------------------------------
bir mapte bulunan stringleri bir vector containerına kopyalama syntaxı
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
    vector<string> svec;
    svec.reserve(idmap.size());

    for(const auto& [no,name]: idmap){
        svec.push_back(name);
    }
    print(svec.begin(),svec.end());
}