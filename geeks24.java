class Solution {

    public boolean checkSorted(List<Integer> arr) {
        int[] arr2 = new int[arr.size()];
        for(int i = 0; i < arr.size(); i++)
        {
            arr2[i] = arr.get(i);
        }
        Arrays.sort(arr2);
        ArrayList<Integer> list = new ArrayList<>();
        ArrayList<Integer> list2 = new ArrayList<>();
        for(int i = 0; i < arr.size(); i++) {
            if(arr2[i] != arr.get(i)) {
                //count++;
                list.add(arr.get(i));
                list2.add(arr.get(i));
            }
        }
        
        if(list.size() == 0)
        return true;
        if(list.size() > 4 || list.size() < 3)
        return false;
        if(list.size() == 3)
        return true;
        Collections.sort(list2);
        return check(list,list2);
    }
    public boolean check(ArrayList<Integer> list,ArrayList<Integer> list2) {
        int max = list2.get(3);
        int min = list2.get(0);
        int a = 0;
        int b = 0;
        for(int i = 0; i < 4; i++) {
            if(list.get(i) == max)
                a = i;
            if(list.get(i) == min)
                b = i;
        }
        if(b == 3 && a == 0)
            return true;
        list.set(a,list.get(3));
        list.set(3,max);
        list.set(b,list.get(0));
        list.set(0,min);
        if(list.get(0) > list.get(1) && list.get(1) > list.get(2) && list.get(2) > list.get(3)) {
            return true;
        }
        return false;
    }
}
