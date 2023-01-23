import java.util.Scanner;

public class lava {

    public static int puddle(int[] arr) {
        int lavaNum = 0;
        int currentIndex = 0, tmp = 0;

        for (int i = 1; i < 10; i++) {

            if (arr[i] >= arr[currentIndex]) {
                for (int j = currentIndex; j < i; j++) {
                    if ((arr[currentIndex] - arr[j]) > 0) {
                        lavaNum += (arr[currentIndex] - arr[j]);
                    }
                }

                currentIndex = i;
            }
        }

        while (currentIndex != 10) {
            tmp = currentIndex + 1;
            for (int i = currentIndex + 2; i < 10; i++) {
                if (arr[i] >= arr[tmp]) {
                    tmp = i;
                }
            }

            for (int i = currentIndex + 1; i < tmp; i++) {
                lavaNum += (arr[tmp] - arr[i]);
            }
            currentIndex = tmp;
        }
        return lavaNum;
    }

    public static void main(String[] args) {
        int[] arr = new int[10];
        Scanner inp = new Scanner(System.in);

        System.out.println("Enter 10 numbers representing the rock formations in the valley:");

        for (int i = 0; i < 10; i++) {
            arr[i] = inp.nextInt();
        }

        System.out.print("There can be maximum observable amount of hot lava is (in cells): " + puddle(arr));
    }
}