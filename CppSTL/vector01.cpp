#include<iostream>
#include<vector>
int main()
{
    std:: vector<int> v;
    v.push_back(1);
    std::vector<int>::iterator begin=v.begin();
    std::vector<int>::iterator end=v.end();
    while(begin!=end)
    {
        std::cout<<*begin;
        begin++;
    }
    return 0;
}