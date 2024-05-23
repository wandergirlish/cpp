#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
/* 
   类模板对象做参数
    1.指定传入类型
    2.参数模板化
    3.整个类模板化
*/
template<class T1,class T2>
class Person
{
public :
        T1 age;
        T2 name;
        Person(T1 age,T2 name)
        {
            this->age=age;
            this->name=name;
        } 
        void showPerson()
        {
            cout<<"姓名"<<this->name<<"年龄"<<this->age<<endl;
        }             
};
//1.指定传入类型
void printp1(Person<int,string>&p)
{
    p.showPerson();
}
void test()
{
    Person<int,string>p(100,"孙悟空");
    printp1(p);
}
//2.参数模板化
template<class t1,class t2>
void printp2(Person<t1,t2>&p)
{
    p.showPerson();
}
void test2()
{
    Person<int,string>p1(90,"猪八戒");
    printp1(p1);
}
//3.整个类模板化
template<class t1>
void printp3(t1 &p)
{
    p.showPerson();
} 
void test3()
{
    Person <int,string>p2(30,"唐僧");
    printp3(p2);
}
int main(int argc, char const *argv[])
{
    test();
    test2();
    test3();
    return 0;
}
