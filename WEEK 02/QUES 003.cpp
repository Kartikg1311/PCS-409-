#include<iostream>
using namespace std;
void func(int [],int ,int );
int main()
{
    int n,m,k;
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
        func(a,m,k);
        n--;
    }
    return 0;
}

void func(int a[],int m,int k)
{
    int c=0;
    for(int i=0;i<m- 1;i++)
    {
        for(int j=i+ 1;j<m;j++)
        {
            if((a[i]-a[j]==k)||(a[j]-a[i]==k))
            c++;
        }
    }
    if(c==0)
    cout<<"No Found."<<endl;
    else
    cout<<c<<endl;
    return ;
}
