import java.util.Scanner;

public class multithread extends Thread{
 public  void run(){
  System.out.println("khushi");
 }
    public static void main(String[] args) {
   

   Thread t = new Thread();
   t.start();
   t.start();

    }
}
