/*-------------------------------------------------------
Aşağıdaki örnekte func fonksiyonunun true sabiti ile çağrılması
bir promotiondır. int altı tür olan short ve bool türlerinden
int türüne bir yükseltme olur. Bu durum exatch match'ten sonra
seçilebilirliği en yüksek overload resolution kuralıdır.
Buna göre burada int parametreli func çağrısı gerçekleştirilecektir.
--------------------------------------------------------*/
#include <iostream>

void func(double) {
    std::cout << "func(double)\n";
}

void func(float) {
    std::cout << "func(float)\n";
}

void func(int) {
    std::cout << "func(int)\n";
}

int main()
{
    func(true);
}