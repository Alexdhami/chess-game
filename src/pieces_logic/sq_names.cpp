#include <iostream>
#include "squares.h"
std::vector<std::vector<std::string>> get_square_names(){
    std::vector<std::vector<std::string>> squarenames;


    std::vector<std::string> sqN = {"a","b","c","d","e","f","g","h"};
    for (int i{1}; i<9;i++){
        std::vector<std::string> rows;
        for (int j{1}; j<9; j++){
            std::string var = std::format("{}{}",sqN[i-1],j);
            rows.push_back(var);
        }
        squarenames.push_back(rows);
    }
    return squarenames;


}
