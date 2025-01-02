import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a string
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Check if the string is a palindrome
        boolean isPalindrome = isPalindrome(input);

        // Display the result
        if (isPalindrome) {
            System.out.println("\"" + input + "\" is a palindrome.");
        } else {
            System.out.println("\"" + input + "\" is not a palindrome.");
        }

        // Close the scanner
        scanner.close();
    }

    // Method to check if a string is a palindrome
    public static boolean isPalindrome(String str) {
        // Remove non-alphanumeric characters and convert to lowercase
        String cleanedStr = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();

        // Get the length of the cleaned string
        int len = cleanedStr.length();

        // Compare characters from both ends
        for (int i = 0; i < len / 2; i++) {
            if (cleanedStr.charAt(i) != cleanedStr.charAt(len - 1 - i)) {
                return false;
            }
        }

        return true;
    }
}
