/*
Motto: Aby zrozumieć rekurencję, trzeba zrozumieć rekurencję.

Problem z rekurencyjnym sposobem na ciąg Fibonacciego: jego złożoność obliczeniowa jest 2^n.
Należy zastosować sztuczkę polegającą na zapamiętywaniu (np. w tablicy) 
wartości tych wyrazów ciągu, które wcześniej były już obliczone.
*/
///programowanie dynamiczne (dynamic programming)
///porównaj szybkość algorytmów rekurencyjnych fib1 i fib2

#include <iostream>
#include <cstdint>
using namespace std;

uint64_t t[100];

uint64_t fib2(int n)
{
    if(n<=1) return n;
    if(t[n])
        return t[n];
    else
        return t[n] = static_cast<uint64_t>(fib2(n-1) + fib2(n-2));
}

uint64_t fib1(int n)
{
    if(n<=1) return n;
    return static_cast<uint64_t>(fib1(n-1) + fib1(n-2));
}

int main()
{
    for(int i=0; i<=93; i++)
        cout << i << ". " << fib2(i) << endl; //zamień fib1 na fib2 i podziwiaj efekty
    return 0;
}
