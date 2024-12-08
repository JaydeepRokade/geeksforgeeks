class Solution {
    public List<int[]> mergeOverlap(int[][] arr) {
        // Code here // Code here
        Arrays.sort(arr, (a,b) -> Integer.compare(a[0],b[0]));
        List<int[]> intervals = new ArrayList<>();
        int start = arr[0][0];
        int end = arr[0][1];

        for (int i = 1; i < arr.length; i++) {
            if(end < arr[i][0] ) {
                intervals.add(new int[]{start,end});
                start = arr[i][0];
                end = arr[i][1];
            } else {
                start = Math.min(arr[i][0],start);
                end = Math.max(arr[i][1],end);
            }
        }

        intervals.add(new int[]{start,end});
        
        return intervals;
    }
}
