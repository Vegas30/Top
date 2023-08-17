#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int boardSize = 5;
char board[boardSize][boardSize];

int shipRow, shipCol;

void initializeBoard() {
    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardSize; ++j) {
            board[i][j] = 'O';
        }
    }

    // Размещаем корабль на случайной позиции
    srand(time(nullptr));
    shipRow = rand() % boardSize;
    shipCol = rand() % boardSize;
}

void printBoard() {
    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardSize; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    initializeBoard();

    for (int turn = 0; turn < 4; ++turn) { // Игроку дается 4 попытки
        cout << "Ход " << turn + 1 << endl;
        printBoard();

        int guessRow, guessCol;
        cout << "Введите номер строки: ";
        cin >> guessRow;
        cout << "Введите номер столбца: ";
        cin >> guessCol;

        if (guessRow == shipRow && guessCol == shipCol) {
            cout << "Поздравляем! Вы потопили корабль!" << endl;
            break;
        }
        else {
            if (guessRow < 0 || guessRow >= boardSize ||
                guessCol < 0 || guessCol >= boardSize) {
                cout << "Выстрел за пределами поля!" << endl;
            }
            else if (board[guessRow][guessCol] == 'X') {
                cout << "Вы уже стреляли в эту клетку." << endl;
            }
            else {
                cout << "Мимо!" << endl;
                board[guessRow][guessCol] = 'X';
            }
        }

        // Если попытки закончились
        if (turn == 3) {
            cout << "Игра окончена. Вы проиграли." << endl;
        }
    }

    return 0;
}
