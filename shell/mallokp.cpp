#include<bits/stdc++.h>
#define MAX_SIZE 10

using namespace std;


void malloc_init(int A[] , int size )
{
    int init_val;
    cout<<"\n Enter the value with which you want to initilize : ";
    cin>>init_val;

    int n = size;
    for(int i=0;i<n;i++)
    {
        A[i] = init_val;
    }
}


void free_func(int A[] , int size)
{						//free function
    int n = size;
    for(int i=0;i<n;i++)
        A[i] = rand();
}


int main()
{
    int n,A[MAX_SIZE];

    cout<<"\n Values in A[] before initilization ( Garbage Values ) : ";
    for(int i=0;i<MAX_SIZE;i++)
    {
        cout<<A[i]<<endl;
    }

    cout<<"\n Enter the Size that you want to Allocate : ";
    cin>>n;

    malloc_init(A,n);

    cout<<"\n Values in A[] after initilization : ";
    for(int i=0;i<n;i++)
        cout<<" "<<A[i];

    free_func(A,n);

    cout<<"\n\n After free() from A[] values : ";
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;

    return 0;
}
