#include <iostream>   
using namespace std;  
//create gcd
int kadane(int array[],int length) 
{  
   int highestMax=0;  
   int currentElementMax=0;  
   for(int i=0;i<length;i++){  
      currentElementMax =max(array[i],currentElementMax+array[i]) ;  
      highestMax=max(highestMax,currentElementMax);  
   }  
   return highestMax;  
}  
//main code
int main(){  
   cout<<"輸入數組長度:";  
   int l;  
   cin>>l;  
   int arr[l];  
   cout<<"輸入數組裡的數值:";  
   for(int i=0;i<l;i++){  
      cin>>arr[i];  
   }  
   cout<<"最大子序列和:"<<kadane(arr,l)<<endl;  
   return 0;  
}  
