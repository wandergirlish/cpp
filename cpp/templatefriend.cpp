#include<iostream>
#include<cstring>
using namespace std;
//通过全局函数 打印Person信息
template<class T1,class T2>
class Person;
template<class T1,class T2>
void print2(Person<T1,T2> p)
{
   
     cout<<"姓名"<<p.name<<"年龄"<<p.age<<endl;
}
template <class T1,class T2>
class Person
{
    //全局函数类内实现
    friend void print(Person<T1,T2> p)
    {
        cout<<"姓名"<<p.name<<"年龄"<<p.age<<endl;
    }
    //全局函数类外实现
    friend void print2<>(Person<T1,T2>p);
private:
        T1 name;
        T2 age;
public:        
        Person(T1 name,T2 age)
        {
            this->name=name;
            this->age=age;
        }
};
//1.全局函数在类内实现
void test()
{
    Person<string,int>p("tom",20);
    print(p);
}
//类外实现

void test2()
{
    cout<<endl;
    Person<string,int>p("jerry",20);
    print2(p);
}
int main()
{
    test();
    test2();
    return 0;
}