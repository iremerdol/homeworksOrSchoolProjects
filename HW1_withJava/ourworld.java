//21050111055 İrem Erdöl
import java.util.Scanner;

public class ourworld{
    public static void main(String[] args){
        String[] signals = new String[6];
        char[][] arr = new char[6][8];

        Scanner inp = new Scanner(System.in);

        System.out.printf("Write six signals (with a space between them): ");

        for(int i=0; i<6; i++){
            signals[i] = inp.next();
            arr[i] = signals[i].toCharArray();

            if(arr[i][0] != '0'){
                
                arr[i][0] = '0';
                
                if(arr[i][7] == '0'){
                    arr[i][7] = '1';
                }
                else{
                    arr[i][7] = '0';
                }
            }
        }

        System.out.println("Noise has cleared: \n");

        for(int r=0; r<6; r++){
            for(int c=0; c<8; c++){
                System.out.print(arr[r][c]);
            }
            System.out.printf("\n");
        }

        System.out.printf("\n----------------------\n");
        System.out.printf("And the final message is: ");
        
        int total;

        for(int i=0; i<6; i++){
            total =0;

            for(int j=7; j>=0; j--){
                total += Character.getNumericValue(arr[i][j]) * Math.pow(2.0, (double)(7-j));
            }
            
            System.out.print((char)total);
        }
        
    }
}