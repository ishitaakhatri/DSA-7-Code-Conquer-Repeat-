// Given two sorted arrays of size n and m respectively, find their union. The Union of two arrays can be defined as the common and distinct elements in the two arrays. Return the elements in sorted order.

// Example 1:

// Input: 
// n = 5, arr1[] = {1, 2, 3, 4, 5}  
// m = 5, arr2 [] = {1, 2, 3, 6, 7}
// Output: 
// 1 2 3 4 5 6 7
// Explanation: 
// Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
// Example 2:

// Input: 
// n = 5, arr1[] = {2, 2, 3, 4, 5}  
// m = 5, arr2[] = {1, 1, 2, 3, 4}
// Output: 
// 1 2 3 4 5
// Explanation: 
// Distinct elements including both the arrays are: 1 2 3 4 5.
// Example 3:

// Input:
// n = 5, arr1[] = {1, 1, 1, 1, 1}
// m = 5, arr2[] = {2, 2, 2, 2, 2}
// Output: 
// 1 2
// Explanation: 
// Distinct elements including both the arrays are: 1 2.
// Your Task: 
// You do not need to read input or print anything. Complete the function findUnion() that takes two arrays arr1[], arr2[], and their size n and m as input parameters and returns a list containing the union of the two arrays.

// Expected Time Complexity: O(n+m).
// Expected Auxiliary Space: O(n+m).

// Constraints:
// 1 <= n, m <= 105
// -109 <= arr1[i], arr2[i] <= 109

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0; 
        int j = 0;
        vector<int> arr_union;
        while(i < n && j < m){
            if(arr1[i] <= arr2[j]){
                if(arr_union.size() == 0 || arr_union.back() != arr1[i]){
                    arr_union.push_back(arr1[i]);
                }
                i++;
            }
            else
            {
                if(arr_union.size() == 0 || arr_union.back() != arr2[j]){
                    arr_union.push_back(arr2[j]);
                }
                j++;
            }    
        }
        while(j < m){
             if(arr_union.size() == 0 || arr_union.back() != arr2[j]){
                    arr_union.push_back(arr2[j]);
                }
                j++;
        }
        while(i < n){
             if(arr_union.size() == 0 || arr_union.back() != arr1[i]){
                    arr_union.push_back(arr1[i]);
                }
                i++;
        }
        return arr_union;
    }
};