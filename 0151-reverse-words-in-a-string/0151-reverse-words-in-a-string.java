class Solution {
    public String reverseWords(String s) {
        StringBuilder reversed = new StringBuilder();
        Stack<String> words = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != ' ') {
                StringBuilder word = new StringBuilder();
                while (i < s.length() && s.charAt(i) != ' ') {
                    word.append(s.charAt(i));
                    i++;
                }
                words.push(word.toString());
            }
        }

        while (!words.isEmpty()) {
            reversed.append(words.pop());
            if (!words.isEmpty()) {
                reversed.append(" ");
            }
        }

        return reversed.toString();
    }
}