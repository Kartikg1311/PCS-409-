#include<iostream>
using namespace std;
int partition(int [],int ,int );
void quick(int [],int ,int );
void duplicate(int [],int );
int main()
{
    int n,m;
    cout<<"Enter the number of array:";
    cin>>m;
    while(m!=0)
    {
        cout<<"Enter the size of the array:";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the "<<i+ 1<<" element:";
            cin>>a[i];
        }
        quick(a,0,n);
        cout<<"Sorted array:";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"  ";
        }
        cout<<endl;
        duplicate(a,n);
        m--;
    }
}

void quick(int a[],int l,int h)
{
    if(l<h)
    {
        int p=partition(a,l,h);
        quick(a,l,p- 1);
        quick(a,p+ 1,h);
    }
}

int partition(int a[],int l,int h)
{
    int key=a[h];
    int i=l- 1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<=key)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+ 1],a[h]);
    return i+ 1;
}

void duplicate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+ 1])
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    return;
}
