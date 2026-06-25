#include <stdio.h>

struct board {
    char cells[3][3];
};

struct player {
    char symbol;
};

struct game {
    struct board board;
    struct player players[2];
    int turn;
};

void initboard (struct board *b) {
    int i,j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            b->cells[i][j] = ' ';
        }
    }
}

void print_board(struct board *b) {
    int i,j;
    printf("\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf(" %c ", b->cells[i][j]);
            if (j < 2){
                printf("|");
            }
        }
        printf("\n");
        if (i < 2){
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

int check_win(struct board *b, char s) {
    int i;

    for(i = 0; i < 3; i++){
        if ( b->cells[0][i] == s && b->cells[1][i] == s && b->cells[2][i] == s)
        return 1;
        if (b->cells[i][0] == s && b->cells[i][1] == s && b->cells[i][2] == s)
        return 1;
    }

    for (i = 0; i < 3; i++){
        if (b->cells[0][0] == s && b->cells[1][1] == s && b->cells[2][2] == s)
        return 1;
        if (b->cells[0][2] == s && b->cells[1][1] == s && b->cells[2][0] == s)
        return 1;
    }
    return 0;
}

int check_draw (struct board *b) {
    int i,j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (b->cells[i][j] == ' ')
            return 0;
        }
    }
    return 1;
}

int main(){
    struct game game;
    int row, col;
    char play_again = 'y';

    game.players[0].symbol = 'x';
    game.players[1].symbol = 'o';
    
    while(play_again == 'y'){

        initboard(&game.board);
        game.turn = 0;
        
        while (1){

            print_board(&game.board);

            printf("Player %c\n Enter row and column (0-2): ", game.players[game.turn].symbol);
            scanf("%d %d", &row, &col);

            if (row < 0 || row > 2 || col < 0 || col > 2 || game.board.cells[row][col] != ' '){
                printf("invalid move! try again");
                continue;
            }

            game.board.cells[row][col] = game.players[game.turn].symbol;

            if (check_win (&game.board, game.players[game.turn].symbol)){
                print_board(&game.board);
                printf("player %c won!!!\n", game.players[game.turn].symbol);
                break;
            }

            if (check_draw(&game.board)){
                print_board(&game.board);
                printf("game is draw!\n");
                break;
            }
            game.turn = 1 - game.turn;
        }
        printf("Do you want to play again (y/n)?? ");
        scanf(" %c", &play_again);
    }
    printf("Have nice time!\n Good byeeee...");
    return 0;
}