import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int i, j;
        int a = sc.nextInt(); int b = sc.nextInt();
        int sum = 0; int minimum = 0;
        for(i=b;i>=a;i--){
            for(j=2;j<i;j++){
               if(i%j==0)break;
            }
            if(j==i){
                sum+=i;
                minimum=j;
            }
        }
        System.out.println(sum==0?-1:sum+"\n"+minimum);
    }
}