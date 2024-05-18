#include<iostream>
int main()
{
    const char* str="Hello World!!!";
    std::string name(10,'h');
    std::string str1(str);
    std::cout<<name<<std::endl;
    std::cout<<str1<<std::endl;
    return 0;
}