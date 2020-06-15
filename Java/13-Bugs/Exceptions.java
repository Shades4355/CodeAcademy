// public class Debug {
//
//   public static void main(String[] args) {
//
//     int width = 0;
//     int length = 40;
//
//     int ratio = length / width;
//
//     System.out.println(ratio);
//
//   }
//
// }

/* Exception in thread "main" java.lang.ArithmeticException: / by zero
at Debug.main(Debug.java:8) */

public class Debug {

  public static void main(String[] args) {

    int width = 20;
    int length = 40;

    int ratio = length / width;

    System.out.println(ratio);

  }

}
