/*-------------------------------------------------------
Aşağıdaki örnekte görüldüğü gibi bir kod ile dosyaya yazdırılma işlemi
 gerçekleştirilebilir.
--------------------------------------------------------*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> names {"majid","bilge","necati","irma","fatih"};
    map<string,int> cmap;
    for(const auto& s:names){
        ++cmap[s];
    }
    ofstream ofs{"out.txt"};
    if(!ofs){
        cerr << "out.txt dosyasi olusturulamadi" << '\n';
        exit(EXIT_FAILURE);
    }
    vector<pair<string,int>> cvec{cmap.begin(),cmap.end()};

    auto fcmp = [](const pair<string,int>& p1,const pair<string,int>& p2){
        return p2.second < p1.second;
    };

    sort(cvec.begin(),cvec.end(),fcmp);

    for(const auto& [name,count] : cmap){
        ofs << name << ' ' << count << '\n';
    }
}