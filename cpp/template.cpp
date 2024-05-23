#include<iostream>
using namespace std;
//调用规则
//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表 强制调用 函数模板
//3.函数模板可以发生重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板

template <typename T>
void print(T a)
{
    cout<<"函数模板被调用"<<endl;
}
void print(int a)
{
    cout<<"普通函数被调用"<<endl;
}
template<typename T>
void print(T a,T b,T c)
{
    cout<<"函数模板被调用"<<endl;
}
int main()
{
    //如果函数模板和普通函数都可以调用，优先调用普通函数
    print(10);
    //通过空模板强制调用函数模板
    print<>(10);
    //如果函数模板可以产生更好的匹配，优先调用函数模板
    print(20,90,0);
    return 0;
}