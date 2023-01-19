#include<iostream>
using namespace std;

class BinarySearch
{
  public:
  void getarray(int*arr,int n)
  {
   for(int i=0;i<n;i++)
   {
    cout<<"["<<i<<"]";
    cin>>arr[i];
   }
  }
  
  int search(int*a,int key,int low,int high)
  {
    if(high>=low)
    {
     int mid=(low+high)/2;
     if(a[mid]==key)
     return mid;
     else if(key<a[mid])
     return search(a,key,low,mid-1);
     else  
     return search(a,key,mid+1,high);
     
     }
    return -1;
  }
 };
  int main()
  {
    BinarySearch BS;
    int ele,size,res;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    int*array=new int[size];
    cout<<"Enter array elements in an ascending order:"<<endl;
    BS.getarray( array,size);
    
    cout<<"Enter element to search:"<<endl;
    cin>>ele;
    
    int first=0,last=size-1;
    res=BS.search(array,ele,first,last);
    cout<<res;
    
    if(res>=0)
    {
     cout<<"element found at"<<res<<endl;}
     else
     cout<<"element not found"<<endl;
     
    }