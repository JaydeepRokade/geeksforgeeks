class Solution {
    public int minIncrements(int[] arr) {
        Arrays.sort(arr);
        int c = 0;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]>=arr[i]){
                c+=(arr[i-1] - arr[i] + 1);
                arr[i] = arr[i - 1] +1;
            }
        }
        return c;
    }
}
