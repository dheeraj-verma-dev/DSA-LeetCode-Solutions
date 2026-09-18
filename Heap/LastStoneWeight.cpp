// OVERALL TC = O(n logn)
class Solution {
public:
    void heapify(int n, vector<int>& stones, int i){
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && stones[left] > stones[largest]) largest = left;
        if(right < n && stones[right] > stones[largest]) largest = right;

        if(largest != i){
            swap(stones[i], stones[largest]);
            heapify(n, stones, largest);
        }
    }
    int deletionHeap(int& n, vector<int>& stones){
        int ele = stones[0];
        swap(stones[n - 1], stones[0]);
        stones.pop_back();
        n--;
        if (n > 0) {
            heapify(n, stones, 0);
            }
        return ele;
    }
    void maxHeap(int n , vector<int>& stones){
        for(int i = (n/2) - 1 ; i>= 0; i--){
            heapify(n, stones, i);
        }
    }

    void insertHeap(int& n, vector<int>& stones, int ele){
        stones.push_back(ele);
        n++;
        int i = n - 1;
        
        while(i > 0){
            int parent = (i - 1)/2;
            if(stones[parent] < stones[i]) {
                swap(stones[parent], stones[i]);
                i = parent;
            }
            else{
                break;
            }
        }
    }
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        maxHeap(n, stones); // O(n logn)
        

        while(n > 1) { 
        
        int stone1 = deletionHeap(n, stones); // O(logn)
        int stone2 = deletionHeap(n, stones);// O(logn)

        if(stone1 != stone2){
            int rem = abs(stone1 - stone2);
            insertHeap(n, stones, rem);  // O(logn)
        }
      }
      if(n == 1) return stones[0];

      return 0;
    }
};
