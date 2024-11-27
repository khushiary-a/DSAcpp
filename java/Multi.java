import java.lang.*;

public class Multi extends Thread{
    public void run(){
        System.out.println("hello Thread");
    }
    public static void main(String arg[]){
         Multi obj = new  Multi();
         obj.start();
    }
}