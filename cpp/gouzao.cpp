#include<iostream>
using namespace std;
//构造函数分类和调用
class Person{
    public:
      int age;int* m_height;
    Person(){
        cout<<"Person的无参构造"<<endl;
    }
    Person(int a,int height){
        age=a;
        m_height= new int(height);
        cout<<"Person有参构造函数调用"<<endl;
        
    }
    Person( const Person &P){
        age=P.age;
        m_height=new int(*P.m_height);


    }
    ~Person(){
        if(m_height!=NULL)
        {
            delete m_height;
            m_height=NULL;
        }
        cout<<"Person析构函数被调用"<<endl;
    }
  
    
};
void test01(){
    Person p1(10,90);
   Person p2(p1);
    cout<<"p1 age="<<p1.age<<"p1 height"<<*p1.m_height<<endl;
    cout<<"p2 age"<<p2.age<<"p2 height"<<*p2.m_height;
}
int main(int argc, char const *argv[])
{
   test01();
    return 0;
}
