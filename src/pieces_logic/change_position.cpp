#include "change_position.h"

// function takes addresses of curr_pieces_pos, old_pos and new_pos. changes the position from old to new and writes to curr_pieces_pos hashmap.

void move_piece(dict &curr_pieces_pos,const str &old_pos, const str &new_pos){
    curr_pieces_pos[new_pos] = curr_pieces_pos.at(old_pos);
    curr_pieces_pos.erase(old_pos);

}

