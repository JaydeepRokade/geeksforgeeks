vector<int> findMajority(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int x=nums.size()/3;
        for(auto i:m)
        {
            if(i.second>x)
            ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()>0) return ans;
        else return {-1};
    }
