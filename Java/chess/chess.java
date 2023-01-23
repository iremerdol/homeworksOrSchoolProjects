//İrem Erdöl 21050111055

import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;

public class chess {

    public static void menu() {
        System.out.println("\t\tMENU\t\t");
        System.out.println("-----------------------------------");
        System.out.println("1- Initialize the board to all white");
        System.out.println("2- Initialize the board to all black");
        System.out.println("3- Change the minor and major diagonal to white or black (Enter 0 for white, 1 for black)");
        System.out.println(
                "4- Enter a rank and file together and make that specific square white or black  (Enter 0 for white, 1 for black)");
        System.out.println("5- Initialize a proper chessboard");
        System.out.println("6- Draw the chessboard on the console");
        System.out.println("7- EXIT");
    }

    public static void drawVirtualCB(String[] currentBoard) {
        for (int i = 0; i < 8; i++) {
            System.out.println(currentBoard[i]);
        }
    }

    public static void allWhite(String[] currentBoard) {
        for (int i = 0; i < 8; i++) {
            currentBoard[i] = "0 0 0 0 0 0 0 0";
        }
    }

    public static void allBlack(String[] currentBoard) {
        for (int i = 0; i < 8; i++) {
            currentBoard[i] = "1 1 1 1 1 1 1 1";
        }
    }

    public static void changeDiagonals(String[] currentBoard, char color) {
        int j = 0;

        for (int i = 0; i < 8; i++) {
            StringBuilder temp = new StringBuilder(currentBoard[i]);
            temp.setCharAt(j, color);
            currentBoard[i] = temp.toString();
            j += 2;
        }

        j = 0;

        for (int i = 7; i >= 0; i--) {
            StringBuilder temp = new StringBuilder(currentBoard[i]);
            temp.setCharAt(j, color);
            currentBoard[i] = temp.toString();
            j += 2;
        }
    }

    public static void convertIntoProperChessBoard(String[] currentBoard) {
        allWhite(currentBoard);

        for (int i = 0; i < 7; i += 2) {
            for (int j = 2; j < 15; j += 4) {
                StringBuilder temp = new StringBuilder(currentBoard[i]);
                temp.setCharAt(j, '1');
                currentBoard[i] = temp.toString();
            }
        }

        for (int i = 1; i < 8; i += 2) {
            for (int j = 0; j < 14; j += 4) {
                StringBuilder temp = new StringBuilder(currentBoard[i]);
                temp.setCharAt(j, '1');
                currentBoard[i] = temp.toString();
            }
        }
    }

    public static void changeSquare(String[] currentBoard, char color, char column, int row) {
        row = 8 - row;

        switch (column) {
            case 'a':
                StringBuilder temp = new StringBuilder(currentBoard[row]);
                temp.setCharAt(0, color);
                currentBoard[row] = temp.toString();
                break;

            case 'b':
                StringBuilder temp1 = new StringBuilder(currentBoard[row]);
                temp1.setCharAt(2, color);
                currentBoard[row] = temp1.toString();
                break;

            case 'c':
                StringBuilder temp2 = new StringBuilder(currentBoard[row]);
                temp2.setCharAt(4, color);
                currentBoard[row] = temp2.toString();
                break;

            case 'd':
                StringBuilder temp3 = new StringBuilder(currentBoard[row]);
                temp3.setCharAt(6, color);
                currentBoard[row] = temp3.toString();
                break;

            case 'e':
                StringBuilder temp4 = new StringBuilder(currentBoard[row]);
                temp4.setCharAt(8, color);
                currentBoard[row] = temp4.toString();
                break;

            case 'f':
                StringBuilder temp5 = new StringBuilder(currentBoard[row]);
                temp5.setCharAt(10, color);
                currentBoard[row] = temp5.toString();
                break;

            case 'g':
                StringBuilder temp6 = new StringBuilder(currentBoard[row]);
                temp6.setCharAt(12, color);
                currentBoard[row] = temp6.toString();
                break;

            case 'h':
                StringBuilder temp7 = new StringBuilder(currentBoard[row]);
                temp7.setCharAt(14, color);
                currentBoard[row] = temp7.toString();
                break;
        }

    }

    public static void main(String[] args) {
        String[] board = new String[8];

        int menuInp = 0;
        char color, column;
        int row;

        Scanner inp = new Scanner(System.in);

        for (int i = 0; i < 8; i++)
            board[i] = "0 0 0 0 0 0 0 0";

        while (menuInp < 7) {
            menu();
            System.out.printf("Please choose an option from the menu: ");
            menuInp = inp.nextInt();

            if (menuInp < 1) {
                System.out.println("What you entered is not a valid option number..");
            }

            else {
                if (menuInp == 1) {
                    allWhite(board);

                } else if (menuInp == 2) {
                    allBlack(board);

                } else if (menuInp == 3) {
                    System.out.printf("Choose the color: ");
                    color = inp.next().charAt(0);
                    changeDiagonals(board, color);

                } else if (menuInp == 4) {
                    System.out.print("Choose the color: ");
                    color = inp.next().charAt(0);

                    System.out.print("Choose the column: ");
                    column = inp.next().charAt(0);

                    System.out.print("Choose the row: ");
                    row = inp.nextInt();

                    changeSquare(board, color, column, row);

                } else if (menuInp == 5) {
                    convertIntoProperChessBoard(board);

                } else if (menuInp == 6) {
                    drawVirtualCB(board);

                } else
                    break;
            }

        }
    }
}