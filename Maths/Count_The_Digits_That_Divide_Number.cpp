// Problem : Count the Digits that divide the Number
// Platform : Leetcode (2520)
// Time Complexity : O(n)
// Level : Easy

// First of all we create a count in order to return the number of Digits
// Store given num into temp and then used a loop while temp > 0
// then calculate the LastDigit and check the condition if( num % lastDigit == 0 )
// if condition hits count ++;
// then modify temp 
// and return count 

class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int temp = num;
        
        while(temp > 0){
            int lastDigit = temp % 10;
            
            if(num % lastDigit == 0) count++;

            temp /= 10;
        }
        return count;
    }
};
