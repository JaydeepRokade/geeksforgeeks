int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int,int>mp;
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]]>0){
            // {cout<<"T"<<arr[i]<<" "<<mp[arr[i]]<<" ";
                ans=max(ans,i-mp[arr[i]]+1);
                continue;
            }
            mp[arr[i]]=i+1;
        }
        
        return ans;
        
    }

