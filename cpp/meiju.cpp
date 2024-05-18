
#include <iostream>
#include <random>
#include <ctime>
#define N 10
using namespace std;
int main() {
    mt19937_64 e(time(0));
    uniform_real_distribution <double> dis(1,N-1);
   int arr[N];
   for (size_t i = 0; i <N; i++)
   {
    arr[i]=i;
   }
   arr[N-1]=dis(e);
    for (size_t i = 0; i < N; i++)
  {
   cout<<arr[i]<<"  ";
   }

   int temp;int index=dis(e);
   temp=arr[N-1];
   arr[N-1]=arr[index];
   arr[index]=temp;
   
   
   int x1=0;
    for (size_t i = 0; i < N-1; i++)
    {
     x1=(x1^i);
    }
   for (size_t i = 0; i < N; i++)
   {
    x1=x1^arr[i];
   }
   
cout<<endl;
   cout<<x1<<endl;
   
    return 0;
}