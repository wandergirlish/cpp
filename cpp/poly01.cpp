#include<iostream>
using namespace std;
class A //只要有纯虚函数，这个类就叫抽象类；
{
    public:
    virtual void funic()=0;//纯虚函数
};
class V:public A{
    public :
    void funic(){
        cout<<"你好，纯虚函数"<<endl;
    }
};
void test()
{
    V* v=new V; ;// 抽象类不能实例化对象A a1;
    v->funic();
}
int main(int argc, char const *argv[])
{
    test();
    return 0;
}
