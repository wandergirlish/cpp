//继承的对象模型

#include<iostream>
//构造对象的顺序 
class Base{
public:
int age;
   Base()
   {
    std::cout<<"base 构造函数"<<std::endl;
   }
   ~Base()
   {
    std::cout<<"Base 析构函数"<<std::endl;
   }
protected:
std:: string name;
private:
double height;
};
class Son :public Base
{
    public:
    Son()
    {
        std::cout<<"Son 构造函数"<<std::endl;
    }
    ~Son()
    {
        std::cout<<"Son 析构函数"<<std::endl;
    }
    int m_D;
};
void test()
{
    std::cout<<"size of son = "<<sizeof(Son)<<std::endl;
    Son son1;  //测试 类的构造函数 析构函数构造的顺序和 销毁顺序
}


int main()
{
    test();
    Son son1;
    return 0;
}