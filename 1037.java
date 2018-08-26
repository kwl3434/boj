import java.util.Arrays;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int loop = sc.nextInt();
		int[] arr = new int[loop];
		for(int i=0; i<loop; i++) {
			arr[i] = sc.nextInt();
		}
		if(loop == 1) {
			System.out.println(arr[0] * arr[0]);
		}
		else {
			Arrays.sort(arr);
			int s = arr[0] * arr[loop-1];
			System.out.println(s);
		}
		sc.close();
	}
}
