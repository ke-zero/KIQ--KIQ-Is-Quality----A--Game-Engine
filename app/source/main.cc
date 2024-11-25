#include <main.h>
#include <KIQ.h>
#include <iostream>

int main()
{
    std::cout << "NAME: " << APP_NAME << "\n VERSION: " << APP_VERSION << "\n";

    ref<Engine> engine = alloc<Engine>();

    engine->Init();

    if (engine->isOpened)
    {
        while (engine->isOpened)
        {
            engine->Update();
        }
    }

    engine->Shutdown();

    return 0;
}