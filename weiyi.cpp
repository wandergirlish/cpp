#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,4,3,8,9,7,0};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-1-i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                arr[j]=arr[j]^arr[j-1];
                arr[j-1]=arr[j]^arr[j-1];
                arr[j]=arr[j]^arr[j-1];
            }
        }
        
    }
    for (size_t i = 0; i < length-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
	return 0;
}

 
 
   