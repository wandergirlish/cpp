#include<iostream>
using namespace std;
#define int T
template<typename T>
void myswap(T &a,T &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
int main()
{
    F a=90;
    F b=80;
    myswap <F>(a,b);
    cout<<a<<" "<<b;
    return 0;
}
