#include<iostream>
using namespace std;
class a
{public :
            int age;
            float score;

};
class b:public a
{
};
void test()
{
    b b1;
    a*a1=new b;
    a1->age=18;
    cout<<a1->age;
}
int main()
{
    test();
    return 0;
}