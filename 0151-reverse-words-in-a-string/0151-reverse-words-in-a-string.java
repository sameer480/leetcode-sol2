class Solution {
    public String reverseWords(String s) {
        StringBuilder sb = new StringBuilder();
        Stack<String> st = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            
            if (ch != ' ') {
                StringBuilder temp = new StringBuilder();
                
                while (i < s.length() && ch != ' ') {
                    temp.append(ch);
                    i++;  // Increment i to move to the next character
                    if (i < s.length())
                        ch = s.charAt(i);
                }
                
                st.push(temp.toString());
            }
        }

        while (!st.isEmpty()) {
            sb.append(st.pop());

            if (!st.isEmpty()) {
                sb.append(" ");
            }
        }

        return sb.toString();
    }
}







