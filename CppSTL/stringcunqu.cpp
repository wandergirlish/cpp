#include<iostream>
void test()
{
    std::string str="hello";
    std::cout<<"str="<<str<<std::endl;
    //通过【】访问单个字符
    str[0]='l';
    for(int i=0;i<str.size();i++)
    {
        std::cout<<str[i]<<" ";
    }
    std::cout<<std::endl;
    //通过at方式访问字符
    for(int i=0;i<str.size();i++)
    {
        std::cout<<str.at(i)<<" ";
    }
}
int main()
{
    test();
    return 0;
}