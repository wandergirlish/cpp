#include<iostream>
using namespace std;
//同名成员调用
class Base{
    public :
    int m_a;
    Base()
    {
        m_a=100;
    }
};
class Son:public Base
{public:
    Son()
    {
     m_a=200;
    }
};
void test()
{
    Son s;
    cout<<s.m_a<<endl;
    cout<<s.Base::m_a;
};
int main()
{
    test();
    return 0;
}