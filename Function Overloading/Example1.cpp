/*-------------------------------------------------------
Aşağıdaki örnekte gösterilen fonksiyon bildirimlerini inceleyiniz.
Overloading olup olmadıklarını söyleyiniz.
--------------------------------------------------------*/
#include <iostream>
#include <cinttypes>

//1
void func(int);
void func(const int);

//2
void f1(int);
void f1(int32_t);

//3
typedef int Integer;
void f2(Integer);
void f2(int);

//3
void f3(int*);
void f3(const int*);

//4
void f4(int*);
void f4(int* const);

//5
void f5(int32_t);
void f5(int16_t);
void f5(int8_t);

//6
void f6(char);
void f6(signed char);
void f6(unsigned char);

//7
int f7(int);
double f7(int);

//8
void f8(int);
void f8(int);

//9
void f9(long);
void f9(long int);

//10
void foo(int x, int y = 5);
void foo(int x);

int main()
{

}