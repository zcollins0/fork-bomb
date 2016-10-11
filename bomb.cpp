#include <iostream>
#include <thread>

int main();

void bomb()
{
    main();
    std::cout << "exiting" << std::endl;
}

int main()
{
    std::thread first(bomb);
    std::thread second(bomb);
    first.join();
    second.join();
    return 0;
}
