#include<iostream>
#include<cstring>
//#include<easyx.h>
using namespace std;
void test01()
{
    string s1;
    const char* str1="Hello World";
    string s2(str1);
    cout<<"s2="<<str1<<endl;
    string s3(s2);
    cout<<"s3"<<s3<<endl;
    string s4(10,'1');
    cout<<s4;
}
void test()
{
   
    
}
int main()
{
    test01();
    return 0;
}