/*-------------------------------------------------------
Klavyeden girilen yazıdan tüm a karakterlerini silen program
--------------------------------------------------------*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;
    cout << "Bir yazi giriniz?\n";
    getline(cin, text);
    for (;;) {
        auto idx = text.find('a');
        if (idx == string::npos) {
           break;
        }
        text.erase(idx,1);
    }
    cout << text << '\n';
}