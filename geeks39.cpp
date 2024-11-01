 sort(arr.begin() , arr.end()) ;
        int n = arr.size() ;
        long long sum = 0 ;
        for(int i = 0 ; i < n/2 ; i ++){
            sum += (arr[n - i - 1] - arr[i]) ;
        }
        return 2*sum ;
