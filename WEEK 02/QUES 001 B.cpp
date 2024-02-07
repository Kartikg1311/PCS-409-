//using Lower bound and Upper bound function in Algorithm Library

#include<iostream>
#include<algorithm>
using namespace std;
void bound(int [],int ,int );
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
        bound(a,m,k);
        n--;
    }
    return 0;
}

void bound(int a[],int m,int k)
{
    int *r1=lower_bound(a,a+m,k);    //auto r1=lower_bound(a,a+m,k);
    int *r2=upper_bound(a,a+m,k);    //auto r2=upper_bound(a,a+m,k);
    int r=r2-r1;
    if(r==0)
    cout<<"Number not Found "<<r<<endl;
    else
    cout<<"Found "<<r<<endl;
    return ;
}

