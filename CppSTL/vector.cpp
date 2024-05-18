#include<iostream>
#include<vector>
using namespace std;
int main()
{
    for(int i=0;i<=30;i++)
    {
        if(i*2+(30-i)*4 == 90)
        {
            std::cout<<"鸡的数量为"<<i<<std::endl;
            std::cout<<"兔子的数量为"<<30-i<<std::endl;
        }
    }
    
    return 0;
}