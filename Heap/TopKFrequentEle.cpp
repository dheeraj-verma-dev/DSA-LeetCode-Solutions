// overall TC = O(n^2)
class Solution {
public:
    void heapify(int n , vector<pair<int,int>>& arr, int i){
        int smallest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        
        if(left < n && arr[left].second < arr[smallest].second) smallest = left;
        if(right < n  && arr[right].second < arr[smallest].second) smallest = right ;

        if(smallest != i){
            swap(arr[i], arr[smallest]);
            heapify(n, arr, smallest);
        }
    }
    void minHeap(int n, vector<pair<int,int>>& arr){
        for(int i =( n/2 )- 1; i >= 0 ; i--){
            heapify(n, arr, i);
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> temp;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){ // O(n)
            int count = 0;
            bool found = false;
            for(int x = 0 ; x < temp.size(); x++){ // O(n*n)
                if(temp[x].first == nums[i]){
                    found = true;
                    break;
                }
            }
            if(found == true) continue;

            for(int j = 0 ; j < n ; j++){ // O(n*n)
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            temp.push_back({nums[i],count});
        }

        minHeap(k, temp); // O(k logk)
        for(int i = k ; i < temp.size() ; i++){  // O(temp.size() - k)
            if(temp[i].second > temp[0].second){
                temp[0] = temp[i];
                heapify(k, temp, 0);
            }
        }
        vector<int> ans;
        for(int i = 0 ; i < k ; i++){  // O(k)
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
