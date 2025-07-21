/*-------------------------------------------------------
Function overloading C dilinde olmayıp C++ dilinde olan
bir nesne yönelimli programlama konseptidir. Buna verilen diğer bir 
isim ise compile time polimorfzimdir. İleride ele alacağımız diğer bir polimorfzim türü 
ise runtime polimorfzim diğer adıyla function overridingdir. 
Function overloading'in diğer adı olan compile time polymorfzim(derleme zamanı çok biçimliliği) de anlaşılabileceği gibi
bu işlemin progmanı çalışma zamanına ek bir maliyeti yoktur, tamamen derleme zamanıyla ilgili bir özelliktir.
Function overloading'de temel konsept aynı isimde fakat farklı imzaya sahip fonksiyonlar olmasına dayanmaktadır.
Fonksiyon imzasını:
1-) Fonksiyonun geri dönüş değer türü etkilemez.
2-) Fonksiiyonun static veya non-static olması etkilemez.
3-) Fonksiyonun public, private veya protected olması etkilemez.
4-) Fonksiyonun geri dönüş değeri haricindeki parametrik yapısı

Function overloading konusu incelenirken öncelikle fonksiyon
çağrısının nasıl yapılacağından çok bir overloading'in var olup olmadığı kontrol
edilmelidir. Overloading olup olmadığını anlamadan fonksiyon çağrısı
sonucunda hangi fonksiyonun çağrılacağını tahmin etmek pek de
mantıklı bir yaklaşım değildir.

Function Overloading'den bahsedilmesi için mutlaka fonksiyonların
aynı namespace içerisinde olması gerekmektedir. Örneğin aşağıdaki
örnekte overloading'den bahsedilemez. Bunun nedeni farklı scopelarda
bulunan fonksiyonlar olmasından kaynaklanmaktadır.
--------------------------------------------------------*/
#include <iostream>

class Myclass {
public:
    static void func(int) {
        std::cout << "Myclass::func(int)\n";
    }
};

static void func(double) {
    std::cout << "func(double)\n";
}

int main()
{

}
