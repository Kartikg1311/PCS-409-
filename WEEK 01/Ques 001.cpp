#include<iostream>
using namespace std;
int main()
{
    int n,m,k,flag;
    cout<<"Enter the number of Array:";
    cin>>n;
    while(n!=0)
    {
        cout<<"Enter the Size of the Array:";
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cout<<"Enter the"<<i+ 1<<" element:";
            cin>>a[i];
        }
        cout<<"Enter the element:";
        cin>>k;
        flag=0;
        for(int i=0;i<m;i++)
        {
            if(k==a[i])
            {
                flag=1;
                cout<<"Present"<<i+ 1<<endl;
                break;
            }
        }
        if(flag==0)
        cout<<"Not Present"<<m<<endl;
        n--;
    }
}
