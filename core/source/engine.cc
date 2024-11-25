#include "stdio.h"
#include "KIQ.h"

Engine::Engine()
{
    this->isOpened = alloc<bool>();
    this->window = alloc<Window>();
    this->timer = alloc<Timer>();
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