/*--------------------------------------------------------
constexpr anahtar sözcüğü C++11 standartlarıyla dile eklenmiş olan
bir anahtar sözcüktür. Bu anahtar sözcük const anahtar sözcüğünden
farklı olarak türün bir parçası değildir. Ayrıca constexpr
ile bildirilen değişkenler mutlaka sabit ifadesi olmalıdır.
Örneğin constexpr ile bildirilmiş bir pointer nesnesi, ancak
global bir nesnenin adresiyle ile ilk değer alabilir.
Ayrıca constexpr değişkenleri const değişkenler gibi ilk değer
verilmesi zorunludur. constexpr ile bildirilen aşağıdaki
pointer nesnesinin, kendisi const özellik gösterirken
*ptr nesnesi const değildir. Bu sebeple ptr'nin değiştirilmesi
*sentaks hatası iken *ptr'nin değiştirilmesinde bir sıkıntı yoktur.
--------------------------------------------------------*/
int g1 = 10;
int g2 = 34;

int main(){
    constexpr int* ptr = &g1;
    ptr = &g2; //error
    *ptr = 67; //legal
}