

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        for(int i = 0 ; i < a.size() ; i++){
            for(int j = 0 ; j < b.size() ; j++){
                if(a[i] == b[j]){
                    if(j == b.size() - 1 ) ans.push_back(-1);
                    else{
                        bool flag = false;
                        int val = -1;
                        for(int k = j ; k < b.size() ; k++){
                            if(a[i] < b[k]) {
                            flag = true;
                            val = b[k];
                            //ans.push_back(b[k]);
                            break;
                            }
                            // else ans.push_back(-1);  
                        }
                        if(flag == true) ans.push_back(val);
                        else ans.push_back(-1);
                    }
                    break;
                }
                
            }
        }
        return ans;
    }
};
