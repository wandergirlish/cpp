#include<iostream>
using namespace std;
class Animal{
public :
       virtual void speak()=0;
};
class cat:public Animal
{
    public :
    void speak(){
        cout<<"小猫在说话·"<<endl;
    }
};
void test()
{
    Animal* animal=new cat;
    animal->speak();
    delete animal;
    animal=NULL;
}
int main()
{
    test();
    return 0;
}