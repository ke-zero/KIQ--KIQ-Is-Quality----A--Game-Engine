#include <main.h>
#include <engine.h>
#include <stdio.h>

int main()
{
    std::printf("NAME: %s\nVERSION: VERSION: %s\n", APP_NAME->c_str(), APP_VERSION->c_str());
    
    auto engine = alloc<KIQ::Engine>();

    engine->Init();

    if (engine->IsOpened())
    {
        while (engine->IsOpened())
        {
            engine->Update();
        }
    }

    engine->Shutdown();

    return 0;
}