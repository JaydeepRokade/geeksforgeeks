 HashSet<Integer> set = new HashSet<>();
       for(var i:arr) set.add(i);
       int i;
       for( i  = 1;i<=set.size();i++){
           if(!set.contains(i))return i;
       }
       return i;
