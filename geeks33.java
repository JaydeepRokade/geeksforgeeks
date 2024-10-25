class Solution {
    public static ArrayList<Integer> alternateSort(int[] arr) {
        Arrays.sort(arr);
        ArrayList<Integer> result = new ArrayList<>();
        int left = 0;                
        int right = arr.length - 1;  
        while (left <= right) {
            if (right >= left) {
                result.add(arr[right--]);  
            }
            if (left <= right) {
                result.add(arr[left++]);   
            }
        }
        return result;
    }
}
