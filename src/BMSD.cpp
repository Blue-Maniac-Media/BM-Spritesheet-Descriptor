#include "BMSD.hpp"
#include "imgui.h"
#include "raylib.h"
#include "rlImGui.h"

void BMSD::Run()
{
    // main loop
    Init();
    while (!WindowShouldClose()) 
    {
        Update();
        Draw();
    }
    Close();
}

// ================================================================================

void BMSD::Init()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(640, 480, "BMSD");
    SetTargetFPS(60);
    rlImGuiSetup(true);
}

void BMSD::Update()
{
    // logic
}

void BMSD::Draw()
{
    BeginDrawing();
    ClearBackground(BLACK);

        rlImGuiBegin();
            ImGui::Begin("Inspector");
                ImGui::Text("BMSD");
            ImGui::End();
        rlImGuiEnd();

    EndDrawing();
}

void BMSD::Close()
{
    rlImGuiShutdown();
    CloseWindow();
}
