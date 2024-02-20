#include<iostream>
using namespace std;
void insertion(int [],int );
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
        insertion(a,n);
        m--;
    }
    return 0;
}

void insertion(int a[],int n)
{
    int c=0,s=0;
    for(int i=1;i<n;i++)
    {
        int j=i- 1;
        int key=a[i];
        while(j>=0&&a[j]>key)
        {
            c++;
            s++;
            a[j+ 1]=a[j];
            j--;
        }
        s++;
        a[j+ 1]=key;
    }
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<"Comparisons:"<<c<<endl<<"Shift:"<<s<<endl;
}
