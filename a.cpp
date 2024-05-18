#include<iostream>
using namespace std;
typedef struct Seqlist{
int data[10];
int length;
}Seqlist;
bool InitList(Seqlist* L)
{
    L->length=0;
    return true;
}
bool Insertlist(Seqlist* L,int i,int e)
{
    if(i<1||i>L->length+1)
    {
        cout<<"插入位置有误"<<endl;
        return false;
    }
    if(L->length>10)
    {
        cout<<"表满了"<<endl;
    }
    for(int j=i;j>i;j--)
    {
        L->data[j]=L->data[j-1];
    }
    L->data[i-1]=e;
    L->length++;
    return true;
}
void printseqlist(Seqlist L)
{
    if(L.length==0)
    {
        cout<<"空表"<<endl;
    }
    for(int a=0;a<L.length;a++)
    {
        cout<<L.data[a]<<"--->"<<endl;
    }
}
int main()
{
    Seqlist L;
    InitList(&L);
    Insertlist(&L,1,1);
    printseqlist(L);
   // system("pasue"); 
    return 0;
}
