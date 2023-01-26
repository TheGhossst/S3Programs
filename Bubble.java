import java.util.Scanner;

public class Bubble {
    public static void main(String args[]) {
        try (Scanner r = new Scanner(System.in)) {
            System.out.print("Enter the limit: ");
            int n = r.nextInt();
            int[] a = new int[n];
            int i, j;
            for (i = 0; i < n; i++) {
                System.out.print("Enter element a[" + (i + 1) + "]: ");
                a[i] = r.nextInt();
            }
            System.out.println("The Elements Of The Array Are: ");
            for (i = 0; i < n; i++) {
                System.out.print(a[i] + " ");
            }
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (a[j] > a[j + 1]) {
                        int t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }
                }
            }
            System.out.println();
            System.out.println("The Elements Of The Sorted Array Are: ");
            for (i = 0; i < n; i++) {
                System.out.print(a[i] + " ");

            }
        }
    }
}