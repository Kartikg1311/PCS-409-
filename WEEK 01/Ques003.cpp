#include<iostream>
using namespace std;
void find(int [],int ,int ); 
void linear(int [],int ,int ,int ,int );
int c=0;
int main()
{
    int n,m,k;
    cout<<"Enter the Number of Array:";
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
        find(a,m,k);
        c=0;
        n--;
    }
    return 0;
}

void find(int a[],int m,int k)
{
    c++;
    if(a[0]==k)
    {
        cout<<"Present "<<c<<endl;
        return ;
    }
    else
    {
        int i;
        for(i=1;i<m&&a[i]<=k;i=i*2)
        {
            c++;
        }
        linear(a,i/2,i,k,c- 1);
    }
}

void linear(int a[],int lb,int ub,int k,int c)
{
    int flag=0;
    for(int i=lb;i<ub;i++)
    {
        c++;
        if(a[i]==k)
        {
            flag=1;
            cout<<"Present "<<c<<endl;
            break;
        }
    }
    if(flag==0)
    cout<<"Not Present "<<c<<endl;
}
