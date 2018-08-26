import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] array = new int[4];
        int count = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < array.length; j++) {
                array[i] = sc.nextInt();
                if (array[i] == 1) {
                    count++;
                }
            }
            switch (count) {
            case 0:
                System.out.println("D");
                break;
            case 1:
                System.out.println("C");
                break;
            case 2:
                System.out.println("B");
                break;
            case 3:
                System.out.println("A");
                break;
            case 4:
                System.out.println("E");
                break;
            }
            count = 0;
        }
}
}
