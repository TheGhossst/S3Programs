package Lab;

class Test {
    public void finalize() {
        System.out.println("Garbage Value");
    }
}

class Teste {
    public static void main(String[] args) {
        Test n1 = new Test();
        Test n2 = new Test();
        Test n3 = new Test();
        n1 = null;
        System.gc();
    }
}