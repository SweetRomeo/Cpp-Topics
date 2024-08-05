/*-------------------------------------------------------
Klavyeden girilen yazıdan ilk kan yazısını silen program
--------------------------------------------------------*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;
    cout << "Bir yazi giriniz?\n";
    getline(cin, text);
    if (auto search = text.find("kan"); search != string::npos) {
        text.erase(search,3);
    }
    cout << text << '\n';
}