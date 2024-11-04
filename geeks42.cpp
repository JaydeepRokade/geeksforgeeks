class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &nums) {
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
        {
            unordered_map<int,unordered_set<int>> mp;
            
            for(int j=i+1;j<nums.size();j++)
            mp[nums[j]].insert(j);
            
            for(int j=i+1;j<nums.size();j++)
                if(mp.find(((-1) * nums[i])-nums[j])!=mp.end())
                    for(auto it : mp[((-1) * nums[i])-nums[j]])
                        if(it>i && it>j)
                            res.push_back({i,j,it});
        }

        return res;
    }
};
