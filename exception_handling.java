// exceptions handling
import java.util.*;
public class exception_handling {
public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    int n=input.nextInt();
    int m=input.nextInt();
    
    try {
        int sum=n/m;
        System.out.println("sum ="+sum);
    } catch (Exception e) {
        System.out.println("error division by 0 !");
        // TODO: handle exception
    } finally{
        System.out.println("FInally block executed");
    }
}
    
}
