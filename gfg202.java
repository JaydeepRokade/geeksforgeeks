class Solution {
    // Function to find all possible paths
    static void f(ArrayList<String> l,String s,ArrayList<ArrayList<Integer>> mat,int i,int j,int n,int m,boolean vis[][]){
        if(i<0 || i>=n || j<0 || j>=m) return ;
        if(mat.get(i).get(j)==0) return ;
        if(i==n-1 && j==m-1){
            l.add(s);
            return ;
        }
        if(!vis[i][j]){
            vis[i][j]=true;
            f(l,s+"D",mat,i+1,j,n,m,vis);
            vis[i][j]=false;
        }
        if(!vis[i][j]){
            vis[i][j]=true;
            f(l,s+"U",mat,i-1,j,n,m,vis);
            vis[i][j]=false;
        }
        if(!vis[i][j]){
            vis[i][j]=true;
            f(l,s+"L",mat,i,j-1,n,m,vis);
            vis[i][j]=false;
        }
        if(!vis[i][j]){
            vis[i][j]=true;
            f(l,s+"R",mat,i,j+1,n,m,vis);
            vis[i][j]=false;
        }
    }
    public ArrayList<String> findPath(ArrayList<ArrayList<Integer>> mat) {
        int n=mat.size();
        int m=mat.get(0).size();
        ArrayList<String> l=new ArrayList<>();
        String s="";
        if(mat.get(0).get(0)==0 || mat.get(n-1).get(m-1)==0) return l;
        boolean vis[][]=new boolean[n][m];
        f(l,s,mat,0,0,n,m,vis);
        Collections.sort(l);
        return l;
    }
}

