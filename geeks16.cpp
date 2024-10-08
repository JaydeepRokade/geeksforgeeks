class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int maxi1=*max_element(arr.begin(),arr.end());
        int maxi2=-1;
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]<maxi1 && maxi2<arr[i])
            maxi2=arr[i];
        }
        return maxi1+maxi2;
    }
};
