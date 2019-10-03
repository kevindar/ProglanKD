#ifndef MARKS_H_
#define MARKS_H_

#define ENTER 13
#define ESCAPE 27
#define UP_ARROW 72
#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define DOWN_ARROW 80
#define BACKSPACE 8
#define SPACE 32
#define F1_BUTTON 59
#define DELETE_BUTTON 83
#define ALT 224

int marks(char square[3][3], char player1[10], char player2[10])
{
    int player = 1, a, i, j, choice;
    char turn[10];
    char mark;
    do
    {
    	arrow();
        board();
        player = (player % 2) ?   printf(" %s, enter a number:  ", player1): printf(" %s, enter a number:  ", player2);

       
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (ENTER && square[i][j] == '1')
            square[0][0] = mark;
            
        else if (ENTER && square[i][j] == '2')
            square[0][1] = mark;
            
        else if (ENTER && square[i][j] == '3')
            square[0][2] = mark;
            
        else if (ENTER && square[i][j] == '4')
            square[1][0] = mark;
            
        else if (ENTER && square[i][j] == '5')
            square[1][1] = mark;
            
        else if (ENTER && square[i][j] == '6')
            square[1][2] = mark;
            
        else if (ENTER && square[i][j] == '7')
            square[2][0] = mark;
            
        else if (ENTER && square[i][j] == '8')
            square[2][1] = mark;
            
        else if (ENTER && square[i][j] == '9')
            square[2][2] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
     //   i = checkwin();

        player++;
    }while (a ==  - 1);
    
    board();
    
    if (a == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*********************************************

FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 **********************************************/
//
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

#endif
