#include<iostream>
void test1()
{
    std::string str ="hello";
    str.insert(1,"1");
    std::cout<<str<<std::endl;
    str.erase(1,1);
    std::cout<<str<<std::endl;
}
int main()
{
    test1();
    return 0;
}