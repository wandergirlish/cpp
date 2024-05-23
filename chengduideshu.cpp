#include <iostream>
#include<random>
#include<ctime>
using namespace std;
int main()
{
  uniform_int_distribution <int> m(0,10);
  mt19937_64 b(time);
  
  cout<<m(b);
  return 0;
}