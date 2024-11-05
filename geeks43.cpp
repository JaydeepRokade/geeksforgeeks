void rotate(vector<vector<int> >& mat) {
    int n=mat.size();
    //step1: take transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    //step2//swap first col with last col and 2 col with 2nd last col and so on...
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(mat[i][j],mat[i][n-1-j]);
        }
    }
}
