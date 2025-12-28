#include "sq_names.h"

// this function gives all 64 square names.

std::vector<std::vector<std::string>> get_square_names(){
    std::vector<std::vector<std::string>> squarenames;

    for (int i{1}; i<9;i++){
        std::vector<std::string> rows;

        for (int j{1}; j<9; j++){
            char cols = 'a' + (j-1); // 'a' + 0 = a | 'a' + 1 = b | ...
            std::string var = std::format("{}{}",cols,i);
            rows.push_back(var);

        }
        squarenames.push_back(rows);
    }
    return squarenames;

}
