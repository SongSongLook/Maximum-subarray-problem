# Maximum-subarray-problem-最大子數列問題
最大子數列問題的目標是在數列的一維方向找到一個連續的子數列  
使該子數列的和最大  
例如，對一個數列 [−1, 2, −3, 4, 5, 6, 1, −8, 7]  
其連續子數列中和最大的是 [4, 5, 6, 1] 其和為16。  
接著會以C++實現Kadane算法處理這個問題。   
-
Kadane演算法的簡單想法就是尋找所有連續的正的子陣列  
，同時，  
記錄所有這些連續的正的子陣列中的和最大的連續陣列。  
每一次我們得到一個正數，就將它與max比較，如果它的值比max大，則更新max的值。  
