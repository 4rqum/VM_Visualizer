#include <iostream>
#include "raylib.h"

using namespace std;



int main() {
    InitWindow(1000, 700, "VM Visualizer");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("VM Visualizer", 40, 40, 30, BLACK);
        DrawRectangleLines(80, 140, 140, 80, BLACK);
        DrawText("CPU", 125, 170, 20, BLACK);

        DrawRectangleLines(280, 140, 140, 80, BLACK);
        DrawText("TLB", 330, 170, 20, BLACK);

        DrawRectangleLines(480, 140, 180, 80, BLACK);
        DrawText("Page Table", 520, 170, 20, BLACK);

        DrawRectangleLines(740, 140, 200, 80, BLACK);
        DrawText("Physical Memory", 765, 170, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}