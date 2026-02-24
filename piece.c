#include "chess.h"

void whitePawnSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y) {
    if (board[pos_y-1][pos_x] == EMPTY_SQUARE) board[pos_y-1][pos_x] = MOVE_SQUARE;
    if (board[pos_y-1][pos_x+1] >= 'a' && board[pos_y-1][pos_x+1] <= 'z') board[pos_y-1][pos_x+1] = CAPTURE_SQUARE;
    if (board[pos_y-1][pos_x-1] >= 'a' && board[pos_y-1][pos_x-1] <= 'z') board[pos_y-1][pos_x-1] = CAPTURE_SQUARE;
}

void blackPawnSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y) {
    if (board[pos_y+1][pos_x] == EMPTY_SQUARE) board[pos_y+1][pos_x] = MOVE_SQUARE;
    if (board[pos_y+1][pos_x+1] >= 'A' && board[pos_y+1][pos_x+1] <= 'Z') board[pos_y+1][pos_x+1] = CAPTURE_SQUARE;
    if (board[pos_y+1][pos_x-1] >= 'A' && board[pos_y+1][pos_x-1] <= 'Z') board[pos_y+1][pos_x-1] = CAPTURE_SQUARE;
}

void knightSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y, char side) {
    if (board[pos_y-2][pos_x+1] == EMPTY_SQUARE) board[pos_y-2][pos_x+1] = MOVE_SQUARE;
    if (board[pos_y-2][pos_x-1] == EMPTY_SQUARE) board[pos_y-2][pos_x-1] = MOVE_SQUARE;
    if (board[pos_y-1][pos_x+2] == EMPTY_SQUARE) board[pos_y-1][pos_x+2] = MOVE_SQUARE;
    if (board[pos_y-1][pos_x-2] == EMPTY_SQUARE) board[pos_y-1][pos_x-2] = MOVE_SQUARE;
    if (board[pos_y+2][pos_x+1] == EMPTY_SQUARE) board[pos_y+2][pos_x+1] = MOVE_SQUARE;
    if (board[pos_y+2][pos_x-1] == EMPTY_SQUARE) board[pos_y+2][pos_x-1] = MOVE_SQUARE;
    if (board[pos_y+1][pos_x+2] == EMPTY_SQUARE) board[pos_y+1][pos_x+2] = MOVE_SQUARE;
    if (board[pos_y+1][pos_x-2] == EMPTY_SQUARE) board[pos_y+1][pos_x-2] = MOVE_SQUARE;

    if (side == 'N') {
        if (board[pos_y-2][pos_x+1] >= 'a' && board[pos_y-2][pos_x+1] <= 'z') board[pos_y-2][pos_x+1] = CAPTURE_SQUARE;
        if (board[pos_y-2][pos_x-1] >= 'a' && board[pos_y-2][pos_x-1] <= 'z') board[pos_y-2][pos_x-1] = CAPTURE_SQUARE;
        if (board[pos_y-1][pos_x+2] >= 'a' && board[pos_y-1][pos_x+2] <= 'z') board[pos_y-1][pos_x+2] = CAPTURE_SQUARE;
        if (board[pos_y-1][pos_x-2] >= 'a' && board[pos_y-1][pos_x-2] <= 'z') board[pos_y-1][pos_x-2] = CAPTURE_SQUARE;
        if (board[pos_y+2][pos_x+1] >= 'a' && board[pos_y+2][pos_x+1] <= 'z') board[pos_y+2][pos_x+1] = CAPTURE_SQUARE;
        if (board[pos_y+2][pos_x-1] >= 'a' && board[pos_y+2][pos_x-1] <= 'z') board[pos_y+2][pos_x-1] = CAPTURE_SQUARE;
        if (board[pos_y+1][pos_x+2] >= 'a' && board[pos_y+1][pos_x+2] <= 'z') board[pos_y+1][pos_x+2] = CAPTURE_SQUARE;
        if (board[pos_y+1][pos_x-2] >= 'a' && board[pos_y+1][pos_x-2] <= 'z') board[pos_y+1][pos_x-2] = CAPTURE_SQUARE;
    }
    else {
        if (board[pos_y-2][pos_x+1] >= 'A' && board[pos_y-2][pos_x+1] <= 'Z') board[pos_y-2][pos_x+1] = CAPTURE_SQUARE;
        if (board[pos_y-2][pos_x-1] >= 'A' && board[pos_y-2][pos_x-1] <= 'Z') board[pos_y-2][pos_x-1] = CAPTURE_SQUARE;
        if (board[pos_y-1][pos_x+2] >= 'A' && board[pos_y-1][pos_x+2] <= 'Z') board[pos_y-1][pos_x+2] = CAPTURE_SQUARE;
        if (board[pos_y-1][pos_x-2] >= 'A' && board[pos_y-1][pos_x-2] <= 'Z') board[pos_y-1][pos_x-2] = CAPTURE_SQUARE;
        if (board[pos_y+2][pos_x+1] >= 'A' && board[pos_y+2][pos_x+1] <= 'Z') board[pos_y+2][pos_x+1] = CAPTURE_SQUARE;
        if (board[pos_y+2][pos_x-1] >= 'A' && board[pos_y+2][pos_x-1] <= 'Z') board[pos_y+2][pos_x-1] = CAPTURE_SQUARE;
        if (board[pos_y+1][pos_x+2] >= 'A' && board[pos_y+1][pos_x+2] <= 'Z') board[pos_y+1][pos_x+2] = CAPTURE_SQUARE;
        if (board[pos_y+1][pos_x-2] >= 'A' && board[pos_y+1][pos_x-2] <= 'Z') board[pos_y+1][pos_x-2] = CAPTURE_SQUARE;
    }
}

void bishopSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y) {

}

void rookSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y) {

}

void queenSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y) {

}

void kingSelected(char board[BOARD_HEIGHT][BOARD_WIDTH], short pos_x, short pos_y) {

}

