/*--------------------------------------------------------
1 nolu foo çağrısında int& türü diğerlerine üstünlük sağladığı
için overload resolutionda o seçilir.
2 nolu foo çağrısı ise const int türden bir değişkenle
çağrıldığı için const int& parametreli fonksiyon çağrılır.
3 nolu foo çağrısında ise sabit ifadesinin sağ taraf referansıyla
çağrılması diğerlerinden üstün olduğundan int && parametreli
fonksiyon çağrılır.
--------------------------------------------------------*/
#include <iostream>

void foo(int&){
    std::cout<<"1"<<'\n';

}
void foo(const int &){
    std::cout<<"2"<<'\n';

}
void foo(int &&){
    std::cout<<"3"<<'\n';
}

int main(){
    int x = 10;
    const int y= 56;
    foo(x);//1
    foo(y);//2
    foo(12);//3
}