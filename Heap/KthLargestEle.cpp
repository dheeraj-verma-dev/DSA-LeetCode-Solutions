class Solution {
public:
    void heapify(int n, vector<int>& arr, int i){
        int smallest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && arr[left] < arr[smallest]) smallest = left;
        if(right < n && arr[right] < arr[smallest]) smallest = right;

        if(smallest != i){
            swap(arr[i], arr[smallest]);
            heapify(n, arr, smallest);
        }
    }
    void minHeap(int n, vector<int>& arr){
        for(int i = (n/2) - 1 ; i>=0; i--){
            heapify(n, arr, i);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        minHeap(k, nums); // O(k logk)

        for(int i = k ; i < n; i++){ // O(n-k)
            if(nums[i] > nums[0]){
                nums[0] = nums[i];
                heapify(k, nums, 0); // O(logk) * O(n-k)
            }
        }
        return nums[0];  // TOTAL = O(k logk) + O(logk*(n-k)) = O(n logk)
    }
};
