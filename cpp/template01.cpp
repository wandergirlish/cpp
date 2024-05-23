#include<iostream>
#include<cstring>
using namespace std;
//模板的局限性
//模板并不是万能的，有些特定数据类型，需要具体化方式做特殊实现
class Person{
    public :
    int age;
    string name;
    Person(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
};
//对比两个数据是否相等
template<typename T>
bool myCompare(T &a,T &b)
{
    if(a==b)
    {
        return true;
    }else{
        return false;
    }
}
void test()
{
    int a=10;
    int b=90;
    bool ret=myCompare(a,b);
    if(ret)
    {
        cout<<"a==b";
    }else{
        cout<<"a!=b";
    }
}
void test02()
{
    Person p1(19,"tom");
    Person p2(18,"tom");
    bool ret =myCompare(p1,p2);
    if(ret)
    {
        cout<<"p1==p2";
    }else{
        cout<<"p1!=p2";
    }
}
int main()
{
    test();
    //test02();
    return 0;
}