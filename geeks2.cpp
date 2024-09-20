int count = 0;
        
        int Maximum = INT_MIN;
        
        for(const int& x : height){
            
            if(Maximum < x){
                count++;
                Maximum = x;
            }
        }
        
        return count;
