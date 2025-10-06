
// //ROTATING A 2D MATRIX 90 DEGREE
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();

//         //Transpose
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         //Reverse each row
//         for (int i = 0; i < n; i++) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };

// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

//     Solution sol;
//     sol.rotate(matrix);

//     // Print rotated matrix
//     for (auto &row : matrix) {
//         for (auto &val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// // PLUS ONE
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         double power = pow(10, n-1);
//         int sum = 0;
//         for(int i = 0; i < n; i++){
//             sum += digits[i] * power;
//             power /= 10;
//         }
//         sum += 1;
//         vector<int> result;

//         while(sum > 0){
//             int digit = sum % 10;
//             result.push_back(digit);
//             sum /= 10;
//         }
//         reverse(result.begin(), result.end());
//         return result;
//     }

//     // int res(vector<int>& digits){
//     //     int n = digits.size();
//     //     double power = pow(10, n-1);
//     //     int sum = 0;
//     //     for(int i = 0; i < n; i++){
//     //         sum += digits[i] * power;
//     //         power /= 10;
//     //     }
//     //     return sum + 1;
//     //     vector<int> result;

//     //     while(sum > 0){
//     //         int digit = sum % 10;
//     //         result.push_back(digit);
//     //         sum /= 10;
//     //     }
//     //     reverse(result.begin(), result.end());
//     //     return result;
//     // }

// };

// int main() {
//     vector<int> digits = {1, 2, 3}; 

//     Solution sol;
//     vector<int> result = sol.plusOne(digits);
//     //int result = sol.res(digits);
    
//     //cout << "Result: " << result << endl;
//     cout << "Result: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }



// /*
// // MAJORITY ELEMENT Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 
// */

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int x = n/2;
//         int count = 1;
//         int res = 0;
//         for(int i = 1; i <= n; i++){
//             if(i < n && nums[i] == nums[i-1]){
//                 count++;
//             }else{
//                 if(count > x){
//                     res = nums[i-1]; 
//                 }
//                 count = 1;
//             }
//         }
//         return res;
//     }
// };
// int main() {
//     vector<int> nums = {2,2,1,1,1,2,2};

//     Solution sol;
//     int result = sol.majorityElement(nums);
    
//     cout << "Majority Element: " << result << endl;

//     return 0;
// }

/*

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<pair<int, int>> zeros;

        // Step 1: Find all positions where matrix[i][j] == 0
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        // 🔹 Print all zero positions
        cout << "Zero positions found at:" << endl;
        for (auto p : zeros) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }

        // Step 2: Commented out (set rows & cols to zero)
        /*
        for (auto [a, b] : zeros) {
            for (int j = 0; j < cols; j++) {
                matrix[a][j] = 0;
            }
            for (int i = 0; i < rows; i++) {
                matrix[i][b] = 0;
            }
        }
        */

        /*
        OTHER METHOD
        for (int k = 0; k < zeros.size(); k++) {
            int a = zeros[k].first;
            int b = zeros[k].second;

            for (int j = 0; j < cols; j++) {
                matrix[a][j] = 0;
            }

            for (int i = 0; i < rows; i++) {
                matrix[i][b] = 0;
            }
        }
        
        */
    }
};

int main() {
    vector<vector<int>> matrix = {{0, 1, 2, 0},{3, 4, 5, 2},{1, 3, 1, 5}};

    Solution sol;
    sol.setZeroes(matrix);

    return 0;
}
