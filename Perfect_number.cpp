// Intuition
// To check if a number is a perfect number, the idea is to find all positive divisors of the number except itself, sum them up, and compare the sum with the number itself.
// If the sum equals the number, then it's a perfect number.

// Approach
// 1.Create a vector a to store all divisors of the number num (excluding num itself).

// 2.Loop from 1 to num - 1.

// 3.If i divides num evenly (i.e., num % i == 0), then i is a divisor — add it to the vector.

// 4.After collecting all such divisors, loop through the vector and sum the values.

// 5.If the final sum is equal to num, return true; otherwise, return false.

// Complexity
// Time complexity:
// O(n) — We check every number from 1 to num - 1 to see if it's a divisor.
// Space complexity:
// O(n) — We store all divisors in a vector.
class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>a;
        int n=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                a.push_back(i);
            }
        }
        for(int i=0;i<a.size();i++){
            n+=a[i];
        } 
        if(n==num){
            return true;
        }
        return false;   
    }
};
