/*-------------------------------------------------------
dynamic_cast operatörünün neden sadece taban sınıf virtual
iken çalıştığını araştır. (Muhtemel taban sınıfın dtoru
çağrılmaması durumundan korunmak için ama gene de araştır.)
Anahtar Notlar: Taban sınıftan türemiş sınıfa doğrudan
dönüşüm gerçekleştirilemez. Bu doğrudan sentaks hatasına neden
olur. Ancak türemiş sınıftan taban sınıfa atama yapılırken
herhangi bir sıkıntı olmaz. Bu atamanın diğer bir ismi ise
downcasting olarak adlandırılır. Downcasting denilmesinin
sebebi ise taban sınıfın şematik olarak türemiş sınıfın
üzerinde olduğundan taban sınıfa bir atama söz konusu olduğunda
aşağı doğru gitme söz konusudur. Bu sebeple buna downcasting
denilmektedir. Tersi durumunda türemiş sınıf türünden bir nesnenin
taban sınıf türünden bir nesneye atanmasında herhangi bir sıkıntı olmamasına
karşın, bu kez yukarı doğru bir hareket olduğu için buna upcasting denilmektedir.
--------------------------------------------------------*/
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base ctor" << '\n';
    }
    virtual ~Base() {
        std::cout << "Bae dtor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived ctor\n";
    }
    ~Derived() {
        std::cout << "Derived dtor\n";
    }
    void func() {
        std::cout << "Derived::func()\n";
    }
};

int main()
{
    Base* b = new Base();
    Derived* d = dynamic_cast<Derived*>(b); //downcasting
    d->func(); //Derived::func()
}