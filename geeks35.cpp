class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        vector<int>freq(101,-1);
        for(int i = 0;i<n;i++){
             if(freq[arr[i]] == -1){
                 freq[arr[i]] = i;
             }
             else {
                 arr[i] = 0;
             }
        }
        for(int i=0;i<n;i++){
            if(arr[i] !=0){
                ans.push_back(arr[i]);
            }
        } 
        return ans;
    }
};
