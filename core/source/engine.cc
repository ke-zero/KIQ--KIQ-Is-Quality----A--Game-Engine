#include "stdio.h"
#include "engine.h"

using namespace KIQ;

bool Engine::IsOpened()
{
    return true;
}

void Engine::Init()
{
    printf("Engine::Init\n");
}

void Engine::Update()
{
    printf("\rEngine::Update");
}

void Engine::Shutdown()
{
    printf("Engine::Shutdown\n");
}