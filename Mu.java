import java.util.*;

public class Mu {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        t1.start();
    }
}

class Thread1 extends Thread {
    public void run() {
        try {
            Random r = new Random();
            for (int i = 0; i < 10; i++) {
                int x = r.nextInt(1, 10);
                System.out.println("Number is: " + x);
                Thread2 t2 = new Thread2(x);
                Thread3 t3 = new Thread3(x);
                if (x % 2 == 0)
                    t2.start();
                else
                    t3.start();
                Thread1.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread2 extends Thread {
    int x;

    Thread2(int x) {
        this.x = x;
    }

    public void run() {
        System.out.println("Sqaure of " + x + " is " + x * x);
    }
}

class Thread3 extends Thread {
    int x;

    Thread3(int x) {
        this.x = x;
    }

    public void run() {
        System.out.println("Cube of " + x + " is " + x * x * x);
    }
}
