#include<iostream>
using namespace std;
int binary(int [],int ,int ,int ,int&);
int main()
{
    int n,m,k,flag,c;
    cout<<"Enter the number of Array:";
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
        c=0;
        flag=binary(a,0,m- 1,k,c);
        if(flag!=0)
           cout<<"Present "<<c<<endl;
        else
            cout<<"Not Present "<<c<<endl;
        n--;
    }
    return 0;
}

int binary(int a[],int lb,int ub,int k,int &c)
{
    if(lb<=ub)
    {
        c++;
        int mid=(ub+lb)/2;
        if(k==a[mid])
        return c;
        else if(k<a[mid])
        return binary(a,lb,mid- 1,k,c);
        else 
        return binary(a,mid+ 1,ub,k,c);
    }
    return 0;
}
