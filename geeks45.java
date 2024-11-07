   int sum=0;
        for(int i:arr)sum+=i;
        List<Integer> list=new ArrayList<>();
        if(sum%3!=0){
            list.add(-1);
            list.add(-1);
            return list;
        }
        if(sum%3!=0) return Arrays.asList(-1,-1);
        int ans=0;
        for(int i=0;i<arr.length;i++){
            ans+=arr[i];
            if(ans==(sum/3)) {
                list.add(i);
                ans=0;
                if(list.size()==2)return list;
            }
        }
        list.add(-1);
        list.add(-1);
        return list;
