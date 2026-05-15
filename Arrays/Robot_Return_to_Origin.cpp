// Problem: Robot Return to Origin
// Platform: LeetCode
// Approach: Direction Counting
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// Count movements in all four directions.
// Robot returns to origin only if:
// Up == Down and Left == Right.

class Solution {
public:
    bool judgeCircle(string moves) {
        int countUp = 0;
        int countDown = 0;
        int countRight = 0;
        int countLeft = 0;

        for(int i = 0 ; i < moves.length(); i++){
            if(moves[i] == 'U') countUp++;
            else if(moves[i] == 'D') countDown++;
            else if(moves[i] == 'L') countLeft++;
            else countRight++;
        }

        if(countUp == countDown && countLeft == countRight) return true;
        return false;
    }
};
