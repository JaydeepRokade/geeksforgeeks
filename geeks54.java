class Solution {
    public static void reverseArray(int arr[]) {
        int first = 0;
        int second = arr.length - 1;
        
        while (first <= second) {
            swap(arr, first++, second--);
        }
    } public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
