class Solution
{
    //Function to check if brackets are balanced or not.
    static boolean ispar(String x)
    {
        // add your code here
        //using stack
        char[] arr = x.toCharArray();
        Stack<Character> st = new Stack<>();
        for(int i=0;i<arr.length;i++){
            if(openBra(arr[i])){
                st.push(arr[i]);
            }
            else if(st.isEmpty() || !checkSimilar(arr[i], st.pop())){
                return false;
            }
        }
        if(st.size()>0)
            return false;
        return true;
    }
    static boolean openBra(char c){
        if(c=='{' || c=='(' || c=='[')
            return true;
        return false;
    }
    static boolean checkSimilar(char x, char y){
        if(x==']' && y=='[')
            return true;
        else if(x=='}' && y=='{')
            return true;
        else if(x==')' && y=='(')
            return true;
        else
            return false;
    }
}
