import java.util.*;

public class Staqu {
    public static void main(String[] args) {
        try {
            System.out.println("............................");
            System.out.println("1.Stack\n2.Queue\n3.Exit\n");
            System.out.println("................................");
            Sta st = new Sta();
            Qu que = new Qu();
            Scanner r = new Scanner(System.in);
            int c;
            do {
                System.out.print("Enter the choice: ");
                c = r.nextInt();
                switch (c) {
                    case 1:
                        st.stack();
                        break;
                    case 2:
                        que.qu();
                        break;
                    case 3:
                        System.out.println("Exit");
                        break;
                    default:
                        System.out.println("Invalid");
                        break;
                }
            } while (c != 3);
            r.close();
        } catch (Exception e) {
            System.out.println("lol");
        }
    }
}

class Sta {
    void stack() {
        try {
            Scanner r = new Scanner(System.in);
            System.out.print("Enter size of stack: ");
            int top = -1;
            int n = r.nextInt();
            int s[] = new int[n];
            System.out.println("............................");
            System.out.println("Stack Operations");
            System.out.println("1.Push\n2.Pop\n3.Display\n4.Exit");
            System.out.println("................................");
            int c, item;
            do {
                System.out.print("Enter the choice: ");
                c = r.nextInt();
                switch (c) {
                    case 1:
                        System.out.println(".........Push............");
                        System.out.print("Enter the item to be pushed: ");
                        item = r.nextInt();
                        if (top == n - 1)
                            System.out.println("Overflow");
                        else {
                            top++;
                            s[top] = item;
                        }
                        break;
                    case 2:
                        System.out.println("..............POP.................");
                        if (top == -1)
                            System.out.println("Underflow");
                        else {
                            System.out.println("Element to be poped is " + s[top]);
                            top--;
                        }
                        break;
                    case 3:
                        System.out.println("...........DISPLAY......................");
                        for (int i = 0; i <= top; i++)
                            System.out.print(s[i] + "\t");
                        System.out.println();
                        break;
                    case 4:
                        System.out.println("Exit");
                        break;
                    default:
                        System.out.println("Invalid Choice");
                        break;
                }
            } while (c != 4);
            r.close();
        } catch (Exception e) {
            System.out.println("lol");
        }
    }
}

class Qu {
    void qu() {
        try {
            Scanner r = new Scanner(System.in);
            System.out.print("Enter the size of queue: ");
            int n = r.nextInt();
            int q[] = new int[n];
            int top = -1, rear = -1;
            System.out.println("............................");
            System.out.println("Queue Operations");
            System.out.println("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
            System.out.println("................................");
            int c, item;
            do {
                System.out.print("Enter the choice: ");
                c = r.nextInt();
                switch (c) {
                    case 1:
                        System.out.println("..................ENQUEUE................");
                        System.out.print("Enter the item: ");
                        item = r.nextInt();
                        if (rear == n - 1)
                            System.out.println("OverFlow");
                        else {
                            if (top == -1)
                                top = 0;
                            rear++;
                            q[rear] = item;
                        }
                        System.out.println("..................................................");
                        break;
                    case 2:
                        System.out.println("....................DEQUEUE....................");
                        if (top == -1 && rear == -1)
                            System.out.println("Underflow");
                        else {
                            System.out.println("The deqeued element is " + q[top]);
                            top++;
                        }
                        System.out.println("....................................................");
                        break;
                    case 3:
                        System.out.println(".................DISPLAY.....................");
                        for (int i = top; i <= rear; i++)
                            System.out.print(q[i] + "\t");
                        System.out.println();
                        System.out.println("...................................................");
                        break;
                    case 4:
                        System.out.println("Exit");
                        break;
                    default:
                        System.out.println("Invalid Choice");
                        break;
                }
            } while (c != 4);
            r.close();
        } catch (Exception e) {
            System.out.println("\nlol");
        }
    }
}