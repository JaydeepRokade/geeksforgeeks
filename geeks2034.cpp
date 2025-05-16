 int nCr(int n, int r) {
        // code here
        if(r>n) return 0;
        long long prod=1;
        // nCr=n!/(r! * (n-r)!)
        // 7C3=7!/(4! * 3!)  => (7*6*5)/(3*2*1) => 7*(1/1)*6*(1/2)*5*(1/3)
  
        
        for(int i=0;i<r;i++){
            prod*=(n-i);
            prod=prod/(i+1);
        }
        
        return (int)prod;
    }

