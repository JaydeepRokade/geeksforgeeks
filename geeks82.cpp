        int n = arr.length;
        int maxlr = Integer.MIN_VALUE,maxrl = Integer.MIN_VALUE;
        int curr1 = 1,curr2 = 1;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0)
            {
                curr1 = 1;
                continue;
            }
            curr1 *= arr[i];
            maxlr = Math.max(maxlr,curr1);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i] == 0)
            {
                curr2 = 1;
                continue;
            }
            curr2 *= arr[i];
            maxrl = Math.max(maxrl,curr2);
        }
        if(n==1)
        {
            return arr[0];
        }
        if(maxlr<0 && maxrl<0)
        {
            return 0;
        }
        return Math.max(maxlr,maxrl);
