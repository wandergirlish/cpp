#include<iostream>
using namespace std;
class father{
public :
      int age;
      string name;
      string sex;

};
//公共继承
class son:public father{
public :
      son()
      {
        age=19;
        name="xiaohong";
        sex="famel";
      }
};
//保护继承
class son1:protected father
{
    public :
    int age;
    string name;
    string sex;
    son1()
    {
        age=10;
        name="xiaogang";
        sex="mal";
    }
};
void test()

{
    son s1;
    cout<<s1.age<<s1.name;
    cout<<endl;
    son1 s2;
    cout<<s2.age<<s2.name<<s2.sex;

}
int main()
{
    test();
    return 0;
}