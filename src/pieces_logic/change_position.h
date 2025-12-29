#ifndef CHANGE_POS
#define CHANGE_POS
#include "headers.h"

typedef std::unordered_map<std::string, std::string> dict ;
typedef std::string str;

void move_piece(dict &curr_pieces_pos,const str &old_pos, const str &new_pos);
#endif
