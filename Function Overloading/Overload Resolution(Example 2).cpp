/*----------------------------------------
Hangi fonksiyonun çağrılacağına aşağıdaki adımlara göre karar
verilir ve çağrılır birden çok uygun fonksiyon varsa
ambiguity(iki anlamlılık) oluşur:
1-)aday fonksiyonlar incelenir.(candiate functions)
Not:Aday olma şartı sadece istenen isme sahip olmasıdır.
2-)aday fonksiyonlar arasından function overload resolution
a göre uygun fonksiyon seçilir. Bu fonksiyonlara viable functions adı verilir. Bu fonksiyonlar için eğer sadece bu fonksiyon varsa 
o çağrılır demektir. Eğer hiçbir uygun fonksiyon yoksa syntax hatası oluşur. Bu durumu
No match adı verilir. Eğer birden fazla viable fonksiyon varsa bu fonksiyonların arasından da function overload resolution kurallarına göre
en uygun fonksiyon seçilir. Seçilebilirliği en yüksek fonksiyona best match adı verilir. Ortada birden fazla best match fonksiyon bulunuyorsa bu durumda
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

void func(long double)
{
    std::cout << "func(long double)\n";
}

void func(int)
{
    std::cout << "func(int)\n";
}

void func(bool)
{
    std::cout << "func(bool)\n";
}

int main()
{
    func(3.4);
}
