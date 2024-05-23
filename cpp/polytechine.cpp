#include<iostream>
using namespace std;
class animal{
public :
        int age;
        string name;
        animal()
        {

        }
        animal(int age,string name)
        {
            this->age=age;
            this->name=name;
            cout<<"动物的名字为"<<this->name<<"动物的年龄为"<<this->age<<endl;
        }

};
class dog :public animal
{
   public :
   dog(int age,string name)
   {
    this->age=age;
    this->name=name;
    cout<<"狗的名字为"<<this->name<<"狗的年龄"<<this->age<<endl;
   }
   dog()
   {

   }
   void info()
   {
    cout<<"姓名"<<name<<"年龄"<<age<<endl;
   }
};
void test()
{
    animal *a=new dog;
    
   // a(13,"xiaohuang");

}
int main(int argc, char const *argv[])
{
    test();
    
    return 0;
}
