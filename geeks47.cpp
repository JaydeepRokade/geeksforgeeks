class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
         set<int> st(a.begin(),a.end());
        for(auto &i:b) st.insert(i);
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};
