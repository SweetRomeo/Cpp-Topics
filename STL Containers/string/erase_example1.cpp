/*-------------------------------------------------------
Klavyeden girilen yazıdan ilk a karakterini silen program
--------------------------------------------------------*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;
    cout << "Bir yazi giriniz?\n";
    getline(cin, text);
    if (auto iter = text.find('a'); iter != string::npos) {
       text.erase(iter, 1);
    }
}