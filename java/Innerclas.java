class cl1{
    class cl2{
        private int a = 10;
        public void m2(){
            System.out.println(a);
        }
    }
}

public class Innerclas {
    public static void main(String[] args) {
      cl1 obj = new cl1();
      cl1.cl2 obj2 = obj.new cl2();
      obj2.m2();
    }
}
