#include<iostream>
#include<random>
#include<ctime>
#define N 10
#include<ctime>
#include<vector>
using namespace std;
int main()
{
    int a;
    if(a == 0)
    {
            std::cout<<"hello world!!"<<std::endl;
    }
    for(int i=10;i<10;i++)
    {
        
        
    }
    mt19937_64 r(time(NULL));
    uniform_int_distribution <int> m(1,N-1);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        arr[i]=i+1;
    }
    arr[N-1]=m(r);
    int temp;int index=m(r);
    temp=arr[N-1];
    arr[N-1]=arr[index];
    arr[index]=temp;
    for (size_t i = 0; i < N; i++)
    {
        /* code */cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int x=0;
    for(int i=0;i<N;i++)
    {
        x=(x^i);
    }
    for (size_t i = 0; i <N; i++)
    {
        x^=arr[i];
    }
    cout<<x;
    return 0;
}
