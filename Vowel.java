import java.util.*;

public class Vowel {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String str = r.nextLine();
        str = str.toLowerCase();
        for (int j = 0; j < str.length(); j++) {
            if (str.charAt(j) == 'a' || str.charAt(j) == 'e' || str.charAt(j) == 'i' || str.charAt(j) == 'o'
                    || str.charAt(j) == 'u') {
                if (str.charAt(j) == 'a') {
                    str = str.substring(0, j) + 'e' + str.substring(j + 1);
                    // j++;
                } else if (str.charAt(j) == 'e') {
                    str = str.substring(0, j) + 'i' + str.substring(j + 1);
                    // j++;
                } else if (str.charAt(j) == 'i')
                    str = str.substring(0, j) + 'o' + str.substring(j + 1);
                else if (str.charAt(j) == 'o')
                    str = str.substring(0, j) + 'u' + str.substring(j + 1);
                else if (str.charAt(j) == 'u')
                    str = str.substring(0, j) + 'a' + str.substring(j + 1);

            }
        }
        System.out.println(str);
        r.close();
    }
}
