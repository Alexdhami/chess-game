#include "sq_names.h"

// this function gives all 64 square names.
typedef std::vector<std::string> arr_1d_str ;
typedef std::string str;

arr_2d_str get_square_names(){
    arr_2d_str squarenames;

    for (int i{1}; i<9;i++){
        arr_1d_str rows;

        for (int j{1}; j<9; j++){
            char cols = 'a' + (j-1); // 'a' + 0 = a | 'a' + 1 = b | ...
            str var = std::format("{}{}",cols,i);
            rows.push_back(var);

        }
        squarenames.push_back(rows);
    }
    return squarenames;

}
