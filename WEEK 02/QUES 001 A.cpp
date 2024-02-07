#include<iostream>
using namespace std;
int binarysearch(int [],int ,int ,int ,int );
int main()
{
    int n,m,k;
    cout<<"Enter the number of the Array:";
    cin>>n;
    while(n!=0)
    {
        cout<<"Enter the size of the Array:";
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cout<<"Enter the "<<i+ 1<<" element:";
            cin>>a[i];
        }
        cout<<"Enter the number:";
        cin>>k;
        int r=binarysearch(a,m,0,m- 1,k);
        if(r==0)
        cout<<"Number not Found "<<r<<endl;
        else
        cout<<"Found "<<r<<endl;
        n--;
    }
    return 0;
}

int binarysearch(int a[],int m,int lb,int ub,int k)
{
    if(lb>ub)
    return 0;
    else
    {
        int mid=(lb+ub)/2;
        if(k==a[mid])
        return 1+binarysearch(a,m,lb,mid- 1,k)+binarysearch(a,m,mid+ 1,ub,k);
        else 
        return binarysearch(a,m,lb,mid- 1,k)+binarysearch(a,m,mid+ 1,ub,k);
    }
}
