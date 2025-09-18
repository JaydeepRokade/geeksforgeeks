class Solution {
  public:
    //Return after 
    vector<int> nextGreater(vector<int> &arr) {
        stack<int> st;
        vector<int> temp=arr;
        reverse(temp.begin(),temp.end());
        for(auto x:temp)st.push(x);
        vector<int> ans;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && st.top() <= arr[i] ) st.pop();
            if(!st.empty() && st.top() > arr[i] ) ans.push_back(st.top());
            else if(st.empty()) ans.push_back(-1);
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
