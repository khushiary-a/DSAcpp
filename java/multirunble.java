public class multirunble implements Runnable {
    public void run(){
      System.out.println("helo");
    }
    public static void main(String[] args) {
         multirunble obj = new multirunble();

         Thread obj1 = new Thread(obj);
         obj1.start();
    }
    
}
