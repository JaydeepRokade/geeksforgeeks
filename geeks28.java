class Solution {

    static int sameOccurrence(int arr[], int x, int y) {
        HashMap<Integer, Integer> countMap = new HashMap<>();
        countMap.put(0, 1); // Initialize with the count of sum 0
        int cumulativeSum = 0;
        int count = 0;

        for (int num : arr) {
            if (num == x) {
                cumulativeSum += 1;
            } else if (num == y) {
                cumulativeSum -= 1;
            }

            if (countMap.containsKey(cumulativeSum)) {
                count += countMap.get(cumulativeSum);
            }

            // Update the countMap with the current cumulative sum
            countMap.put(cumulativeSum, countMap.getOrDefault(cumulativeSum, 0) + 1);
        }

        return count;
    }

}
