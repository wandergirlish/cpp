#include<iostream>
#include<cstring>
#include<ctime>
#include<random>
using namespace std;
//全局函数做友元
class Budling
{
    public :
    friend void GoodGay(Budling* buding );
    Budling();
    string my_sittingroom;
    private :
    string MyBedroom;
};
void GoodGay(Budling* buding )
{
    cout<<"好基友正在访问"<<buding->my_sittingroom<<endl;
    cout<<"好基友正在访问"<<buding->MyBedroom;
}
//类做友元
class Gg
{
   // friend class Gg ;
    public:
    Gg();
    public :
    void visit();//参观函数访问BUILDING中的属性;
    Budling* buling;
};
//类外实现
Budling::Budling()
{
    my_sittingroom="客厅";
    MyBedroom="卧室";
}
Gg::Gg()
{
    mt19937_64 r(time(0));
    uniform_int_distribution <int> e(10,50);
    cout<<e(r)<<endl;
    buling=new Budling;
}
void Gg::visit(){

}
void test01(){
Gg Good;
Good.visit();
}
int main()
{
    Budling b1;
    GoodGay(&b1);
    cout<<"==============="<<endl;
    test01();
    return 0;
}