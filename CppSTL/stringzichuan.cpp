#include<iostream>
//求子串
void test()
{
    std::string str ="abcdef";
    str.replace(1,2,"xi");
    std::string subStr=str.substr(1,3);
    std::cout<<"substr="<<subStr<<std::endl;
}
int main()
{
    test();
    return 0;
}