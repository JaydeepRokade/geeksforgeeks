 int findMaximum(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(arr[0]>arr[1]) return arr[0];
        if(arr[n-1]>arr[n-2]) return arr[n-1];
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) lo=mid+1;
            else hi = mid - 1;
        }
