#include<iostream>
using namespace std;
void selection(int [],int );
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
        selection(a,n);
        m--;
    }
    return 0;
}

void selection(int a[],int n)
{
    int c=0,s=0;
    for(int i=0;i<n- 1;i++)
    {
        int k=i;
        int key=a[i];
        for(int j=i+ 1;j<n;j++)
        {
            c++;
            if(a[j]<key)
            {
                key=a[j];
                k=j;
            }
        }
        a[k]=a[i];
        a[i]=key;
        s++;
    }
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<"Comparisons:"<<c<<endl<<"Shift:"<<s<<endl;
}
