#include "change_position.h"

void move_piece(std::unordered_map<std::string, std::string> &curr_pieces_pos,const std::string &old_pos, const std::string &new_pos){
    curr_pieces_pos[new_pos] = curr_pieces_pos.at(old_pos);
    curr_pieces_pos.erase(old_pos);

}

