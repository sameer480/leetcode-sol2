class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        Stack<String> stack = new Stack<>();

        for (String word : words) {
            stack.push(word);
        }

        StringBuilder reversed = new StringBuilder();
        while (!stack.isEmpty()) {
            reversed.append(stack.pop());
            if (!stack.isEmpty()) {
                reversed.append(" ");
            }
        }

        return reversed.toString();
    }
}