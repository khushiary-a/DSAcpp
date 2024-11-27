public class Throw1 {
        

        public  static void checkeven(int a)throws Exception{
            if(a %2 != 0){
              throw new IllegalArgumentException("Not even");
            }else{
             System.out.println("Its even");
            }
         }
    
         public static void main(String[] args) {
              try{
                 checkeven(3);
              }catch(Exception e){
                System.out.println(e.getMessage()); 
              }
         }
    }
    

   

