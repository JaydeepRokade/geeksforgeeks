class Solution {
  public:
      void rev(vector<int>& arr, int i, int j)
    {
        while(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        } 
    }
    void rotateArr(vector<int>& arr, int d) 
    {
        d = d%(arr.size()); 
        int i = 0;
        int j = d - 1;
        rev(arr,i,j);
        
        i = d;
        j = arr.size() - 1;
        rev(arr,i,j); 
        
        i = 0;
        j = arr.size() - 1;
        rev(arr,i,j); 
    }
};
