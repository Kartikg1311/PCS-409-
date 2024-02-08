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
    for(int i=0;i<m- 2;i++)
    {
        for(int j=i+ 1;j<m- 1;j++)
        {
            for(int k=j+ 1;k<m;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    flag=1;
                    cout<<i+ 1<<" , "<<j+ 1<<" , "<<k+ 1<<endl;
                    break;
                }
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    cout<<"No Sequence Found."<<endl;
    return;
}
