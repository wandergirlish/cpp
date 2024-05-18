#include<iostream>
 // 1.查找
  void test1()
    {
        std:: string str1 = "abcdefg";
        int pos = str1.find("de");
        std::cout<<"pos="<<pos<<std::endl;
        pos =str1.rfind("de");
        std::cout<<"pos="<<pos<<std::endl;
        //rfind 和find区别 
        //find 从左往右查找 rfind从右往左查找
        }
        // 替换 
        void test02()
        {
            std::string str1="abcdefg";
            // 从1号位置起 3个字符 替换成1111
            str1.replace(1,0,"1");
            std::cout<<"str1="<<str1<<std::endl;
            str1.replace(2,3,"1");
            std::cout<<"str1="<<str1;
        }
int main()
{
   
  test1();
  test02();
    return 0;
}