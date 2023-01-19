// 21050111055 İrem Erdöl
import java.util.Scanner;

public class multiverse{
    public static void main(String[] args){
        int temp;
        int[] nums = new int[6];

        Scanner inp = new Scanner(System.in);

        System.out.printf("Write six signals (with a space between them): ");

        nums[0] = inp.nextInt();
        nums[1] = inp.nextInt();           // Sir, I really wish you would give the permission to use for loop
        nums[2] = inp.nextInt();
        nums[3] = inp.nextInt();
        nums[4] = inp.nextInt();
        nums[5] = inp.nextInt();

        int[] num1 = new int[8];
        int[] num2 = new int[8];
        int[] num3 = new int[8];
        int[] num4 = new int[8];
        int[] num5 = new int[8];
        int[] num6 = new int[8];

        num1[7] = nums[0] % 10;
        nums[0] /= 10;
        num1[6] = nums[0] % 10;
        nums[0] /= 10;
        num1[5] = nums[0] % 10;
        nums[0] /= 10;
        num1[4] = nums[0] % 10;
        nums[0] /= 10;
        num1[3] = nums[0] % 10;
        nums[0] /= 10;
        num1[2] = nums[0] % 10;
        nums[0] /= 10;
        num1[1] = nums[0] % 10;
        nums[0] /= 10;
        num1[0] = nums[0] % 10;
    
        num2[7] = nums[1] % 10;
        nums[1] /= 10;
        num2[6] = nums[1] % 10;
        nums[1] /= 10;
        num2[5] = nums[1] % 10;
        nums[1] /= 10;
        num2[4] = nums[1] % 10;
        nums[1] /= 10;
        num2[3] = nums[1] % 10;
        nums[1] /= 10;
        num2[2] = nums[1] % 10;
        nums[1] /= 10;
        num2[1] = nums[1] % 10;
        nums[1] /= 10;
        num2[0] = nums[1] % 10;

        num3[7] = nums[2] % 10;
        nums[2] /= 10;
        num3[6] = nums[2] % 10;
        nums[2] /= 10;
        num3[5] = nums[2] % 10;
        nums[2] /= 10;
        num3[4] = nums[2] % 10;
        nums[2] /= 10;
        num3[3] = nums[2] % 10;
        nums[2] /= 10;
        num3[2] = nums[2] % 10;
        nums[2] /= 10;
        num3[1] = nums[2] % 10;
        nums[2] /= 10;
        num3[0] = nums[2] % 10;

        num4[7] = nums[3] % 10;
        nums[3] /= 10;
        num4[6] = nums[3] % 10;
        nums[3] /= 10;
        num4[5] = nums[3] % 10;
        nums[3] /= 10;
        num4[4] = nums[3] % 10;
        nums[3] /= 10;
        num4[3] = nums[3] % 10;
        nums[3] /= 10;
        num4[2] = nums[3] % 10;
        nums[3] /= 10;
        num4[1] = nums[3] % 10;
        nums[3] /= 10;
        num4[0] = nums[3] % 10;

        num5[7] = nums[4] % 10;
        nums[4] /= 10;
        num5[6] = nums[4] % 10;
        nums[4] /= 10;
        num5[5] = nums[4] % 10;
        nums[4] /= 10;
        num5[4] = nums[4] % 10;
        nums[4] /= 10;
        num5[3] = nums[4] % 10;
        nums[4] /= 10;
        num5[2] = nums[4] % 10;
        nums[4] /= 10;
        num5[1] = nums[4] % 10;
        nums[4] /= 10;
        num5[0] = nums[4] % 10;

        num6[7] = nums[5] % 10;
        nums[5] /= 10;
        num6[6] = nums[5] % 10;
        nums[5] /= 10;
        num6[5] = nums[5] % 10;
        nums[5] /= 10;
        num6[4] = nums[5] % 10;
        nums[5] /= 10;
        num6[3] = nums[5] % 10;
        nums[5] /= 10;
        num6[2] = nums[5] % 10;
        nums[5] /= 10;
        num6[1] = nums[5] % 10;
        nums[5] /= 10;
        num6[0] = nums[5] % 10;

        int[] oneZero = new int[2];

        oneZero[0] = num1[7];
        oneZero[1] = 1 - num1[7];
        temp = (num1[0] + 10) / 11;
        num1[0] = 0;
        num1[7] = oneZero[temp]; 

        oneZero[0] = num2[7];
        oneZero[1] = 1 - num2[7];
        temp = (num2[0] + 10) / 11;
        num2[0] = 0;
        num2[7] = oneZero[temp];

        oneZero[0] = num3[7];
        oneZero[1] = 1 - num3[7];
        temp = (num3[0] + 10) / 11;
        num3[0] = 0;
        num3[7] = oneZero[temp];

        oneZero[0] = num4[7];
        oneZero[1] = 1 - num4[7];
        temp = (num4[0] + 10) / 11;
        num4[0] = 0;
        num4[7] = oneZero[temp];

        oneZero[0] = num5[7];
        oneZero[1] = 1 - num5[7];
        temp = (num5[0] + 10) / 11;
        num5[0] = 0;
        num5[7] = oneZero[temp];

        oneZero[0] = num6[7];
        oneZero[1] = 1 - num6[7];
        temp = (num6[0] + 10) / 11;
        num6[0] = 0;
        num6[7] = oneZero[temp];

        System.out.println("Noise has cleared: ");

        System.out.printf("%d%d%d%d%d%d%d%d\n%d%d%d%d%d%d%d%d\n%d%d%d%d%d%d%d%d\n%d%d%d%d%d%d%d%d\n%d%d%d%d%d%d%d%d\n%d%d%d%d%d%d%d%d", num1[0], num1[1], num1[2], num1[3], num1[4], num1[5], num1[6], num1[7], num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6], num2[7], num3[0], num3[1], num3[2], num3[3], num3[4], num3[5], num3[6], num3[7], num4[0], num4[1], num4[2], num4[3], num4[4], num4[5], num4[6], num4[7], num5[0], num5[1], num5[2], num5[3], num5[4], num5[5], num5[6], num5[7], num6[0], num6[1], num6[2], num6[3], num6[4], num6[5], num6[6], num6[7]);

        System.out.printf("\n----------------------\n");

        System.out.printf("And the final message is: %c%c%c%c%c%c", (char)(num1[0]*128 + num1[1]*64 + num1[2]*32 + num1[3]*16 + num1[4]*8 + num1[5]*4 + num1[6]*2 + num1[7]), (char)(num2[0]*128 + num2[1]*64 + num2[2]*32 + num2[3]*16 + num2[4]*8 + num2[5]*4 + num2[6]*2 + num2[7]), (char)(num3[0]*128 + num3[1]*64 + num3[2]*32 + num3[3]*16 + num3[4]*8 + num3[5]*4 + num3[6]*2 + num3[7]), (char)(num4[0]*128 + num4[1]*64 + num4[2]*32 + num4[3]*16 + num4[4]*8 + num4[5]*4 + num4[6]*2 + num4[7]), (char)(num5[0]*128 + num5[1]*64 + num5[2]*32 + num5[3]*16 + num5[4]*8 + num5[5]*4 + num5[6]*2 + num5[7]), (char)(num6[0]*128 + num6[1]*64 + num6[2]*32 + num6[3]*16 + num6[4]*8 + num6[5]*4 + num6[6]*2 + num6[7]));

    }
}