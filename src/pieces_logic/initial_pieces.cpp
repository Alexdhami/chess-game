#include "initial_pieces.h"


std::unordered_map<std::string, std::string> get_initial_chesspieces(){
    std::unordered_map<std::string,std::string> initialPos{
        // White Other Pieces

        {"a1","w_rook_1"},
        {"b1","w_knight_1"},
        {"c1","w_bishop_1"},
        {"d1","w_queen"},
        {"e1","w_king"},
        {"f1","w_bishop_2"},
        {"g1","w_knight_2"},
        {"h1","w_rook_2"},

        // White Pawns
        {"a2","w_pawn_1"},
        {"b2","w_pawn_2"},
        {"c2","w_pawn_3"},
        {"d2","w_pawn_4"},
        {"e2","w_pawn_5"},
        {"f2","w_pawn_6"},
        {"g2","w_pawn_7"},
        {"h8","w_pawn_8"},

        // Black Other Pieces
        {"a8","b_rook_1"},
        {"b8","b_knight_1"},
        {"c8","b_bishop_1"},
        {"d8","b_queen"},
        {"e8","b_king"},
        {"f8","b_bishop_2"},
        {"g8","b_knight_2"},
        {"h8","b_rook_2"},

        // Black Pawns
        {"a7","b_pawn_1"},
        {"b7","b_pawn_2"},
        {"c7","b_pawn_3"},
        {"d7","b_pawn_4"},
        {"e7","b_pawn_5"},
        {"f7","b_pawn_6"},
        {"g7","b_pawn_7"},
        {"h7","b_pawn_8"},
    };
    return initialPos;
}
