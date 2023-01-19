//21050111055 İrem Erdöl

import java.util.Scanner;

public class yineyeniyeniden{
    public static void main(String[] args){

        int num1, num2, num3, num4, num5, num6;

        int digit1_1, digit1_2, digit1_3, digit1_4, digit1_5, digit1_6, digit1_7, digit1_8, digit2_1, digit2_2, digit2_3, digit2_4, digit2_5, digit2_6, digit2_7, digit2_8, digit3_1, digit3_2, digit3_3, digit3_4, digit3_5, digit3_6, digit3_7, digit3_8, digit4_1, digit4_2, digit4_3, digit4_4, digit4_5, digit4_6, digit4_7, digit4_8, digit5_1, digit5_2, digit5_3, digit5_4, digit5_5, digit5_6, digit5_7, digit5_8, digit6_1, digit6_2, digit6_3, digit6_4, digit6_5, digit6_6, digit6_7, digit6_8;

        Scanner inp = new Scanner(System.in);

        num1 = inp.nextInt();
        num2 = inp.nextInt();
        num3 = inp.nextInt();
        num4 = inp.nextInt();
        num5 = inp.nextInt();
        num6 = inp.nextInt();

        digit1_8 = num1%10;
        num1 /= 10;
        digit1_7 = num1%10;
        num1 /= 10;
        digit1_6 = num1%10;
        num1 /= 10;
        digit1_5 = num1%10;
        num1 /= 10;
        digit1_4 = num1%10;
        num1 /= 10;
        digit1_3 = num1%10;
        num1 /= 10;
        digit1_2 = num1%10;
        num1 /= 10;
        digit1_1 = num1%10;
        num1 /= 10;

        digit2_8 = num2%10;
        num2 /= 10;
        digit2_7 = num2%10;
        num2 /= 10;
        digit2_6 = num2%10;
        num2 /= 10;
        digit2_5 = num2%10;
        num2 /= 10;
        digit2_4 = num2%10;
        num2 /= 10;
        digit2_3 = num2%10;
        num2 /= 10;
        digit2_2 = num2%10;
        num2 /= 10;
        digit2_1 = num2%10;
        num2 /= 10;

        digit3_8 = num3%10;
        num3 /= 10;
        digit3_7 = num3%10;
        num3 /= 10;
        digit3_6 = num3%10;
        num3 /= 10;
        digit3_5 = num3%10;
        num3 /= 10;
        digit3_4 = num3%10;
        num3 /= 10;
        digit3_3 = num3%10;
        num3 /= 10;
        digit3_2 = num3%10;
        num3 /= 10;
        digit3_1 = num3%10;
        num3 /= 10;

        digit4_8 = num4%10;
        num4 /= 10;
        digit4_7 = num4%10;
        num4 /= 10;
        digit4_6 = num4%10;
        num4 /= 10;
        digit4_5 = num4%10;
        num4 /= 10;
        digit4_4 = num4%10;
        num4 /= 10;
        digit4_3 = num4%10;
        num4 /= 10;
        digit4_2 = num4%10;
        num4 /= 10;
        digit4_1 = num4%10;
        num4 /= 10;

        digit5_8 = num5%10;
        num5 /= 10;
        digit5_7 = num5%10;
        num5 /= 10;
        digit5_6 = num5%10;
        num5 /= 10;
        digit5_5 = num5%10;
        num5 /= 10;
        digit5_4 = num5%10;
        num5 /= 10;
        digit5_3 = num5%10;
        num5 /= 10;
        digit5_2 = num5%10;
        num5 /= 10;
        digit5_1 = num5%10;
        num5 /= 10;

        digit6_8 = num6%10;
        num6 /= 10;
        digit6_7 = num6%10;
        num6 /= 10;
        digit6_6 = num6%10;
        num6 /= 10;
        digit6_5 = num6%10;
        num6 /= 10;
        digit6_4 = num6%10;
        num6 /= 10;
        digit6_3 = num6%10;
        num6 /= 10;
        digit6_2 = num6%10;
        num6 /= 10;
        digit6_1 = num6%10;
        num6 /= 10;

        int hold1 = (digit1_1+10)/11;
        digit1_1 = 0;
        digit1_8 += hold1;
        digit1_8 = digit1_8 % 2;

        int hold2 = (digit2_1+10)/11;
        digit2_1 = 0;
        digit2_8 += hold2;
        digit2_8 = digit2_8 % 2;

        int hold3 = (digit3_1+10)/11;
        digit3_1 = 0;
        digit3_8 += hold3;
        digit3_8 = digit3_8 % 2;

        int hold4 = (digit4_1+10)/11;
        digit4_1 = 0;
        digit4_8 += hold4;
        digit4_8 = digit4_8 % 2;

        int hold5 = (digit5_1+10)/11;
        digit5_1 = 0;
        digit5_8 += hold5;
        digit5_8 = digit5_8 % 2;

        int hold6 = (digit6_1+10)/11;
        digit6_1 = 0;
        digit6_8 += hold6;
        digit6_8 = digit6_8 % 2;

        System.out.println("");

        System.out.print(digit1_1);
        System.out.print(digit1_2);
        System.out.print(digit1_3);
        System.out.print(digit1_4);
        System.out.print(digit1_5);
        System.out.print(digit1_6);
        System.out.print(digit1_7);
        System.out.print(digit1_8);
        System.out.println("");

        System.out.print(digit2_1);
        System.out.print(digit2_2);
        System.out.print(digit2_3);
        System.out.print(digit2_4);
        System.out.print(digit2_5);
        System.out.print(digit2_6);
        System.out.print(digit2_7);
        System.out.print(digit2_8);
        System.out.println("");

        System.out.print(digit3_1);
        System.out.print(digit3_2);
        System.out.print(digit3_3);
        System.out.print(digit3_4);
        System.out.print(digit3_5);
        System.out.print(digit3_6);
        System.out.print(digit3_7);
        System.out.print(digit3_8);
        System.out.println("");

        System.out.print(digit4_1);
        System.out.print(digit4_2);
        System.out.print(digit4_3);
        System.out.print(digit4_4);
        System.out.print(digit4_5);
        System.out.print(digit4_6);
        System.out.print(digit4_7);
        System.out.print(digit4_8);
        System.out.println("");

        System.out.print(digit5_1);
        System.out.print(digit5_2);
        System.out.print(digit5_3);
        System.out.print(digit5_4);
        System.out.print(digit5_5);
        System.out.print(digit5_6);
        System.out.print(digit5_7);
        System.out.print(digit5_8);
        System.out.println("");

        System.out.print(digit6_1);
        System.out.print(digit6_2);
        System.out.print(digit6_3);
        System.out.print(digit6_4);
        System.out.print(digit6_5);
        System.out.print(digit6_6);
        System.out.print(digit6_7);
        System.out.print(digit6_8);
        System.out.println("");

        hold1 = (digit1_1 * 128)+(digit1_2 * 64)+(digit1_3 * 32)+(digit1_4 * 16)+(digit1_5 * 8)+(digit1_6 * 4)+(digit1_7 * 2)+(digit1_8 * 1);
        hold2 = (digit2_1 * 128)+(digit2_2 * 64)+(digit2_3 * 32)+(digit2_4 * 16)+(digit2_5 * 8)+(digit2_6 * 4)+(digit2_7 * 2)+(digit2_8 * 1);
        hold3 = (digit3_1 * 128)+(digit3_2 * 64)+(digit3_3 * 32)+(digit3_4 * 16)+(digit3_5 * 8)+(digit3_6 * 4)+(digit3_7 * 2)+(digit3_8 * 1);
        hold4 = (digit4_1 * 128)+(digit4_2 * 64)+(digit4_3 * 32)+(digit4_4 * 16)+(digit4_5 * 8)+(digit4_6 * 4)+(digit4_7 * 2)+(digit4_8 * 1);
        hold5 = (digit5_1 * 128)+(digit5_2 * 64)+(digit5_3 * 32)+(digit5_4 * 16)+(digit5_5 * 8)+(digit5_6 * 4)+(digit5_7 * 2)+(digit5_8 * 1);
        hold6 = (digit6_1 * 128)+(digit6_2 * 64)+(digit6_3 * 32)+(digit6_4 * 16)+(digit6_5 * 8)+(digit6_6 * 4)+(digit6_7 * 2)+(digit6_8 * 1);

        System.out.println("");

        System.out.printf("%c%c%c%c%c%c",(char)hold1,(char)hold2,(char)hold3,(char)hold4,(char)hold5,(char)hold6);

    }
}