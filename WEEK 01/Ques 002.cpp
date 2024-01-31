#include<iostream>
using namespace std;
int find(int [],int ,int ,int );
int c=0;
int main()
{
    int n,m,k,flag;
    cout<<"Enter the number of Array:";
    cin>>n;
    while(n!=0)
    {
        cout<<"Enter the size of the Array:";
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cout<<"Enter the"<<i+ 1<<" element:";
            cin>>a[i];
        }
        cout<<"Enter the number:";
        cin>>k;
        flag=find(a,0,m,k);
        if(flag==1)
            cout<<"Present"<<c<<endl;
        else
            cout<<"Not Present"<<c<<endl;
        n--;
    }
}

int find(int a[],int lb,int ub,int k)
{
    c++;
    if(k==a[ub/2])
    return 1;
    else if(k<a[ub/2])
    find(a,lb,ub/2,k);
    else if(k>a[ub/2])
    find(a,ub/2,ub,k);
    return 0;
}
