#include<iostream>
#include<vector>
int main()
{
    std::vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    std::vector<int> ::iterator begin=v1.begin();
    std::vector<int> ::iterator end=v1.end();
    while(begin!=end)
    {
        std::cout<<*begin<<std::endl;
        begin++;
    }
    
        return 0;
}