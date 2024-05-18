#include<iostream>
using namespace std;
int main()
{
    int *p_i=new int [10];
    for(int a=0;a<10;a++)
    {
        *(p_i++)=a;
    }
  //  delete []p_i;
    for (size_t i = 0; i < 10; i++)
    {
       cout<<*p_i<<"\n";
    }
    if(p_i!=nullptr)
    {
        delete []p_i;
    }
    
    return 0;
}