#include<iostream>
using namespace std;
#define max 100
typedef struct list{
	int data[max];
	int length;
}list;
void Init(list* L)
{
	L->length=0;
	cout<<"初始化成功"<<endl;
}
void insert(list* L,int i,int e)
{
	if(i<1||i>L->length+1)
	{
		cout<<"插入位置有误";
		return ; 
	}
	if(L->length>=max)
	{
		cout<<"表满了"<<endl; 
	 } 
	 for(int j=L->length;j>=i;j--)
	 {
	 	L->data[j]=L->data[j+1];
	 }
	 L->data[i-1]=e;
	 L->length++;
	 cout<<"插入成功"<<endl;
	  
}
void print(list* L)
{
	if(L->length==0)
	{
		cout<<"这是空表"<<endl;
	}
	for(int i=0;i<L->length;i++)
	{
		cout<<L->data[i]<<endl;
	}
}

class animal
{
public :
		int age;
		string name;
		animal(int age,string name)
		{
			this->age=age;
			this->name=name;
		}
		virtual void eat()
		{
			cout<<"小动物在吃饭"; 
		}
};
class dog : public animal
{

};

int main()
{
	
/*	list L;
	Init(&L);
	insert(&L,1,2);
	print(&L);
 				*/
 //	test();
	return 0;
}