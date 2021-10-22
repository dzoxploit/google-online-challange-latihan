public class deretarimatics {
    public static void main(String args[]) {
        int d,i,n = 10;
        for(i=0;i<=n;i++){
            if(i == 0){
                System.out.print(i+"\n");
            }else{
                d=i*i+1;
                if(i != 4){
                    System.out.print(d+"\n");
                }
            }
        }
    }
}