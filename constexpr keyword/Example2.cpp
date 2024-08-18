/*----------------------------------------
Hangi fonksiyonun çağrılacağına aşağıdaki adımlara göre karar
verilir ve çağrılır birden çok uygun fonksiyon varsa
ambiguity(iki anlamlılık) oluşur:
1-)aday fonksiyonlar incelenir.(candiate functions)
Not:Aday olma şartı sadece istenen isme sahip olmasıdır.
2-)aday fonksiyonlar arasından function overload resolution
a göre uygun fonksiyon seçilir veya fonksiyonlar (viable functions) seçilir.
Eğer hiçbir uygun fonksiyon yoksa syntax hatası oluşur. Bu durumu
No match adı verilir.
 bunların arasından da function overload resolution kurallarına göre
uygun fonksiyon seçilir ve çağrılır bu uygun fonksiyon birden fazlaysa bu durumda
ambiguity(iki anlamlılık) oluşur.
Function Overload resolution kuralları:
1-)exact match(Tam uyum):Fonksiyona gönderilen argümanlar ile
fonksiyonun parametre değişkenlerinin türlerinin aynı olması
durumuna verilen isimdir.
2-)promotion(yükseltme):bool,short gibi int altı türlerin
int türüne yükseltilmesi ile veya float türünün double türüne
yükseltilmesine dayalı durumlara promotion denir.
bool,short => int(integral promotion)
float => double
3-)standart conversion:yukarıdaki iki durum dışında kalan
herhangi iki tür arası atama durumları için standart conversion
ifadesi kullanılır.
4-) Dönüşümlerde variadic parametreli fonksiyonlar en
zayıf olarak kabul edilir sonra user-defined conversion
en güçlüsü de standart conversion olarak kabul edilir.

Bu kurallardan yola çıkarak aşağıdaki örnekte
Hangi fonksiyonun çağrılacağını tahmin ediniz.
Çözümü solutions kısmında bulabilirsiniz.
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