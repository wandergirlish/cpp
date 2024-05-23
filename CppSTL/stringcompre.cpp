#include<iostream>
//字符串比较 
void test()
{
    
    std::string str1="hello";
    std::string str2="hello";
    if(str1.compare(str2) ==0)
    {
        std::cout<<"str1等于str2"<<std::endl;
    }
    else if(str1.compare(str2)>0) {
        std::cout<<"str1大于str2"<<std::endl;
    }
}
int main()
{
    test();
    return 0;
}