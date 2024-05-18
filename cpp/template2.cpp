#include<iostream>
using namespace std;
//类模板的使用
template<class NameType,class AgeType>
class Person
{
public :
            Person(AgeType age,NameType name)
            {
                this->m_age=m_age;
                this->m_name=m_name;
            }
            NameType m_name;
            AgeType m_age;    
};
void test()
{
    Person<string,int> p1(18,"小明");
    cout<<p1.m_age;
    cout<<p1.m_name;
}
//类模板与函数模板的区别
template <class NameType,class AgeType=int>
class Student
{public:
        NameType name;
        AgeType age;    
        Student(NameType name,AgeType age)
        {
            this->age=age;
            this->name;
        }
};
void test2()
{
    //1.类模板没有自动推导功能
    Student<string,int> s1("小名",18);
    cout<<s1.age;
    //2.类模板在模板参数列表中可以有默认参数
    Student <string> s2("小名",666);
    cout<<s2.name;
}
int main()
{
    test();
    test2();
    return 0;
}