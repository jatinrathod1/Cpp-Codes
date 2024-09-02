import java.util.HashSet;
import java.util.Set;

public class LeetCodeStr {

    //1) count the word 
    public static int cntword(String s) {
        int c = 1;
        s = s.trim();
        s = s.replaceAll("\\s+", " ");
        for (int i = 0; i < s.length() - 1; i++) {
            if (s.charAt(i) == ' ') {
                c++;
            }
        }
        return c;
    }

    //2) find the longest string + count string
    public static void lrgstr(String s) {
        s = s.trim();
        String[] words = s.split("\\s+");
        String longestWord = " ";
        for (String word : words) {
            if (word.length() > longestWord.length()) {
                longestWord = word;
            }
        }
        int wordcnt = words.length;
        System.out.println("Word length: " + wordcnt);
        System.out.println("Longest Word: " + longestWord);
    }

    // finding the length of the longest substring without repeating characters
    public static int lengthOfLongestSubstring(String s) {
        Set<Character> charSet = new HashSet<>();
        int left = 0, right = 0, maxLength = 0;

        while (right < s.length()) {
            if (!charSet.contains(s.charAt(right))) {
                charSet.add(s.charAt(right));
                right++;
                maxLength = Math.max(maxLength, right - left);
            } else {
                charSet.remove(s.charAt(left));
                left++;
            }
        }
        return maxLength;
    }

    public static void main(String[] args) {
        String s = " i love my india ";
        // System.out.print(cntword(s));
        lrgstr(s);
        // String s1 = "abcdabcebb"; 
        // int maxLength = lengthOfLongestSubstring(s1);
        // System.out.println("longest substring : " + maxLength);
    }
}

// List sort krvni -
// Stock and buy -
// Tarnspose 2d array -
// Number ne divide krvnu without operater (solution is use bitwise Operater) -
// Check paranthis / Paranthis evaluation
