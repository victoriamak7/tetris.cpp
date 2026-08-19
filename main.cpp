#include <raylib.h>
#include "grid.h"

int main() {
//creating game window
    Color pink = {255, 109, 194, 255};
    InitWindow(300,600,"Tetris"); //w,h,n
    SetTargetFPS(60); //frames per second

    Grid grid = Grid(); //grid obejct
    grid.Print();
    
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(pink);
        grid.Draw();



        EndDrawing();
    }


    CloseWindow();
}
