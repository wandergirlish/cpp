#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
//new关键字的使用
void test1()
{
    int* p;
    p=new int[10];
   // delete(p);
   for (size_t i = 0; i <10; i++)
   {
    p[i]=i+1;
   }
   for (size_t i = 0; i <10; i++)
   {
   cout<<p[i]<<" ";
   }
   cout<<endl;
//引用的操作

    
}
void test2(int &i)    

{
    int a;
    int &b=a;
    b=10;
    i=20;
    cout<<b<<endl;
    cout<<i<<endl;
}   
void myswap(int i,int j)
{
    i=i^j;
    j=i^j;
    i=i^j;
}
//函数的引用做参数则参数可以修饰实参
void myswap1(int &i,int &j)
{
    i=i^j;
    j=i^j;
    i=i^j;
}
//如果函数的参数已经给定了，则调用的时候可以不传参数
int add(int a=10,int b=90,int c=80)
{
    return a+b+c;
}
//函数的占位参数
int add(int a ,int)
{
    return 0;
}
//类的封装
class Student{
int age;
string name;
public :
void setage(int age1,string name1)
{
  age=age1;
 name=name1;
}
string getname()
{
   return name;
}
int getage()
{
    return age;
}
};
class Cube{
    float a;
    float b;
    float c;
    public :
   void set(float a,float b,float c)
    {
       a=a;
       b=b;
       c=c;

    }
    float tiji()
    {
        return a*b*c;
    }
    
};
int main()
{
    int i=90;int j=80;
    Student stu;
    stu.setage(18,"李楠");
   cout<<"姓名"<<stu.getname()<<endl;
   cout<<"年龄"<<stu.getage()<<endl;
    
    test1();
    test2(i);
    myswap(i,j);
    myswap1(i,j);
    cout<<i<<" "<<j<<endl;
    cout<<add()<<endl;
    return 0;
}