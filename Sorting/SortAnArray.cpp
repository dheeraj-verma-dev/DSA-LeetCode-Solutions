class Solution {
public:
    // int partition (vector<int>& arr, int lo , int hi){
    //     int i = lo-1;
    //     int pivot = arr[hi];

    //     for(int j=lo ; j<hi ; j++){
    //         if(arr[j] < pivot){
    //             i++;
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    //     swap(arr[i+1], arr[hi]);
    //     return i+1;
    // }

    // void quickSort(vector<int>& arr, int lo, int hi){
    //     if(lo >= hi){
    //         return;
    //     }

    //     int p = partition(arr, lo, hi);

    //     quickSort(arr, lo, p-1);
    //     quickSort(arr, p+1, hi);
    // }
    void merge(vector<int>& arr, int low, int mid, int high){
        vector<int> temp;
        int i = low;
        int j = mid+1;

        while(i <= mid && j <= high){
            if(arr[i] < arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int k = 0 ; k < temp.size() ; k++){
            arr[low + k ] = temp[k];
        }
    }

    void mergeSort(vector<int>& arr, int low, int high){
        if(low >= high ){
            return;
        }
        int mid = (high - low)/2 + low;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        // quickSort(nums, 0, nums.size() - 1);
        // return nums;
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};
