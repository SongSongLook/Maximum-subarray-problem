# Maximum-subarray-problem-最大子數列問題
最大子數列問題的目標是在數列的一維方向找到一個連續的子數列  
使該子數列的和最大  
例如，對一個數列 [−1, 2, −3, 4, 5, 6, 1, −8, 7]  
其連續子數列中和最大的是 [4, 5, 6, 1] 其和為16。
-
接著，我會以C++實現Kadane算法以處理這個問題。   
#Kadane算法   
. 掃描一次整個數列的所有數值   
. 在每一個掃描點計算以該點數值為結束點的子數列的最大和（正數和)  
. 該子數列由兩部分組成：以前一個位置為結束點的最大子數列、該位置的數值

by SongSongLook.   
//程式開始//  

#include <iostream>   
using namespace std;  
int kadanes(int array[],int length) {  
   int highestMax = 0;  
   int currentElementMax = 0;  
   for(int i = 0; i < length; i++){  
      currentElementMax =max(array[i],currentElementMax + array[i]) ;  
      highestMax = max(highestMax,currentElementMax);  
   }  
   return highestMax;  
}  
int main() {  
   cout << "Enter the array length: ";  
   int l;  
   cin >> l;  
   int arr[l];  
   cout << "Enter the elements of array: ";  
   for (int i = 0; i < l; i++) {  
      cin >> arr[i];  
   }  
   cout << "The Maximum Sum is: "<<kadanes(arr,l) << endl;  
   return 0;  
}  
