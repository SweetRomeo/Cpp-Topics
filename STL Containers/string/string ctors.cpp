/*----------------------------------------
 String bir temel tür(Primitive type) olmayıp
 yazı işlemleri yapan bir özel sınıftır. Aslında
 string bir typedef bildirimidir. string demek
 aslında basic_string<char>(basic_string'in
 char açılımı veya char specializationı)
 demektir. String diğer bir ismiyle de C++'ın
 STL kütüphanesine ait bir container sınıfıdır.
 Bu özel sınıfın çok sayıda ctoru bulunmaktadır.
 Bunlar:
 1-)Default ctor
 2-)Copy ctor
 3-)Move Ctor
 4-)C-String Yapıcı
 5-)Fill ctor
 6-)Range Ctor
 7-)Substring Ctor
----------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = "Mesut Topuzlu";

    string s1(str);//c_string ctor
    cout << "|" << s1 << "|" << '\n';
    string s2(str,5); //data param ctor
    cout << "|" << s2 << "|" << '\n';
    string s3(str + 6, 5); //data param ctor
    cout << "|" << s3 << "|" << '\n';
    string s4(str, str + 3); //range param ctor
    cout << "|" << s4 << "|" << '\n';
}