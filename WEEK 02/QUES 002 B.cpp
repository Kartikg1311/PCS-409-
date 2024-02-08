#include<iostream>
using namespace std;
void func(int [],int );
int main()
{
    int n,m;
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
        func(a,m);
        n--;
    }
    return 0;
}

void func(int a[],int m)
{
    int flag=0;
    for(int k=m- 1;k>=0;k--)
    {
        int i=0;
        int j=k- 1;
        while(i<j)
        {
            int sum=a[i]+a[j];
            if(sum==a[k])
            {
                cout<<i+ 1<<" , "<<j+ 1<<" , "<<k+ 1<<endl;
                flag=1;
                break;
            }
            else if(sum>a[k])
            j--;
            else
            i++;
        }
    }
    if(flag==0)
    cout<<"No sequence Found"<<endl;
    return ;
}
