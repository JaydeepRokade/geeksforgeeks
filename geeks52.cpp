int getSecondLargest(vector<int> &arr) {
        set<int> ans(arr.begin(),arr.end());
        if(*next(ans.begin(),ans.size()-1) > *next(ans.begin(),ans.size()-2)) return *next(ans.begin(),ans.size()-2);
        return -1;
