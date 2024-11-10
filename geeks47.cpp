class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
         set<int> st(a.begin(),a.end());
        for(auto &i:b) st.insert(i);
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};
