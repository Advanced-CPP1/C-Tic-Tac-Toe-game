#include <iostream>

char game_board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

bool endOfGame {false};

char player = 'X';

void draw() {
    system("cls");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << game_board[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void togglePlayer() {
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}

void input() {
    int num {};
    if (player == 'X') {
        std::cout << "Player 1: ";
    }
    else {
        std::cout << "Player 2: ";
    }
    std::cin >> num;
    switch (num) {
        case 1:
        {
            if (game_board[0][0] != 'X' && game_board[0][0] != 'O') {
                game_board[0][0] = player;
            }
        }
        break;
        case 2:
        {
            if (game_board[0][1] != 'X' && game_board[0][1] != 'O') {
                game_board[0][1] = player;
            }
        }
        break;
        case 3:
        {
            if (game_board[0][2] != 'X' && game_board[0][2] != 'O') {
                game_board[0][2] = player;
            }
        }
        break;
        case 4:
        {
            if (game_board[1][0] != 'X' && game_board[1][0] != 'O') {
                game_board[1][0] = player;
            }
        }
        break;
        case 5:
        {
            if (game_board[1][1] != 'X' && game_board[1][1] != 'O') {
                game_board[1][1] = player;
            }
        }
        break;
        case 6:
        {
            if (game_board[1][2] != 'X' && game_board[1][2] != 'O') {
                game_board[1][2] = player;
            }
        }
        break;
        case 7:
        {
            if (game_board[2][0] != 'X' && game_board[2][0] != 'O') {
                game_board[2][0] = player;
            }
        }
        break;
        case 8:
        {
            if (game_board[2][1] != 'X' && game_board[2][1] != 'O') {
                game_board[2][1] = player;
            }
        }
        break;
        case 9:
        {
            if (game_board[2][2] != 'X' && game_board[2][2] != 'O') {
                game_board[2][2] = player;
            }
        }
        break;
    }
    draw();
    std::cout << "\n";
}

void check() {
    /*Player 1*/
    if (game_board[0][0] == 'X' && game_board[0][1] == 'X' && game_board[0][2] == 'X') {
        std::cout << "Player 1 wins!" << std::endl;
        endOfGame = true;
    }

    if (game_board[0][0] == 'X' && game_board[1][0] == 'X' && game_board[2][0] == 'X') {
        std::cout << "Player 1 wins!" << std::endl;
        endOfGame = true;
    }

    if (game_board[0][0] == 'X' && game_board[1][1] == 'X' && game_board[2][2] == 'X') {
        std::cout << "Player 1 wins!" << std::endl;
        endOfGame = true;
    }
    
    if (game_board[0][1] == 'X' && game_board[1][1] == 'X' && game_board[2][1] == 'X') {
        std::cout << "Player 1 wins!" << std::endl;
        endOfGame = true;
    }
    if (game_board[0][2] == 'X' && game_board[1][2] == 'X' && game_board[2][2] == 'X') {
        std::cout << "Player 1 wins!" << std::endl;
        endOfGame = true;
    }
    if (game_board[0][2] == 'X' && game_board[1][1] == 'X' && game_board[2][0] == 'X') {
        std::cout << "Player 1 wins!" << std::endl;
        endOfGame = true;
    }
    /*Player 1*/

    /*Player 2*/
    if (game_board[0][0] == 'O' && game_board[0][1] == 'O' && game_board[0][2] == 'O') {
        std::cout << "Player 2 wins!" << std::endl;
        endOfGame = true;
    }

    if (game_board[0][0] == 'O' && game_board[1][0] == 'O' && game_board[2][0] == 'O') {
        std::cout << "Player 2 wins!" << std::endl;
        endOfGame = true;
    }

    if (game_board[0][0] == 'O' && game_board[1][1] == 'O' && game_board[2][2] == 'O') {
        std::cout << "Player 2 wins!" << std::endl;
        endOfGame = true;
    }
    
    if (game_board[0][1] == 'O' && game_board[1][1] == 'O' && game_board[2][1] == 'O') {
        std::cout << "Player 2 wins!" << std::endl;
        endOfGame = true;
    }
    if (game_board[0][2] == 'O' && game_board[1][2] == 'O' && game_board[2][2] == 'O') {
        std::cout << "Player 2 wins!" << std::endl;
        endOfGame = true;
    }
    if (game_board[0][2] == 'O' && game_board[1][1] == 'O' && game_board[2][0] == 'O') {
        std::cout << "Player 2 wins!" << std::endl;
        endOfGame = true;
    }
    /*Player 2*/
    std::cout << std::endl;

}

int main() {
    draw();
    while (!endOfGame) {
        input();
        togglePlayer();
        check();
    }
    system("pause");
    return 0;
}