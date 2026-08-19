#pragma once
#include <vector>
#include <raylib.h>

class Grid{
    public:
        Grid();
        int grid[20][10]; //20 rows by 10 columns
        void Initialize(); //filling the grid with zeroes
        void Print();
        void Draw();

    private:
        std::vector<Color>getcellcolor();
        int numRows;
        int numCol;
        int cellSize;
        std::vector<Color>colors;
};


