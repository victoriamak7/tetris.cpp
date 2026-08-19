#include "grid.h"
#include <iostream>

Grid::Grid(){ //constructor
    numCol = 10; 
    numRows = 20;
    cellSize = 30;
    Initialize();
    colors = getcellcolor();
}

void Grid::Initialize(){ //a regular member function
    for(int rows = 0; rows < numRows; rows++){
        for(int cols = 0; cols < numCol; cols++){
            grid[rows][cols] = 0; //just like on the exam
        }
    }
}

void Grid::Print(){
    for(int rows = 0; rows < numRows; rows++){
        for(int cols = 0; cols < numCol; cols++){
            std::cout<<grid[rows][cols]<<" ";
        }
        std::cout<<std::endl;
    }
}

std::vector<Color> Grid::getcellcolor(){
    Color skyBlue   = { 102, 191, 255, 255 }; //empty cell
    Color limeGreen = {   0, 158,  47, 255 };
    Color gold      = { 255, 203,   0, 255 };
    Color violet    = { 135,  60, 190, 255 };
    Color orange    = { 255, 161,   0, 255 };
    Color darkBlue  = {   0,  82, 172, 255 };
    Color emerald   = {   0, 228,  48, 255 };
    Color gray   =    {  228, 228,  172, 0 };

    return {skyBlue,limeGreen,gold,violet,orange,darkBlue,emerald,gray};

}

void Grid::Draw(){
    for(int rows = 0; rows < numRows; rows++){
        for(int cols = 0; cols < numCol; cols++){
            int cellValue = grid[rows][cols]; //assigning color to number 
            DrawRectangle(cols * cellSize+1,rows * cellSize+1, cellSize-1, cellSize-1 ,colors[cellValue]); //x,y,h,w,
        }
    }

}
