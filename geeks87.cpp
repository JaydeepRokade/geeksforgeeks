
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size()) return false;
        
        map<int,int>mp;
        for(auto elem : s1)
        {
            mp[elem]++;
        }
        
        for(auto elem : s2)
        {
            mp[elem]--;
            if(mp[elem]==0)
            {
                mp.erase(elem);
            }
        }
        
        return mp.empty() ? true : false;

    }
};
