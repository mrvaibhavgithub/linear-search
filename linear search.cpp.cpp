#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int key,flag=1;
    cout<<"\nenter the array element:\t";
         for(int i=0;i<5;i++)
         {
            cin>>a[i];
         }
     cout<<"\ndisplay the array element:\t";
     cout<<endl;
     
             for(int i=0;i<5;i++)
             {
                 cout<<a[i];
             }
    cout<<"\nenter element to search:\t";
    cin>>key;
    cout<<endl;
                 for(int i=0;i<5;i++)
                 {
                     if(key==a[i])
                     {
                         cout<<"\nindex of enter number is\t:"<<i+1;
                         cout<<endl;
                     }
                     else
                     {
                         flag=0;
                     }
                 }
                 if(flag==0)
                 {
                     cout<<"element not found";
                     cout<<endl;
                 }
     return 0;
}