#include <iostream>
#include <chrono>  //for sleeping
#include <thread>  // --do--
#include <cstdlib> //for random increments
#include <ctime>   // --do--
void progressbar()
{
    std::cout << "MISSION RUSSIA HACK" << std::endl;
    std::srand(time(NULL)); // seed random
    for (int progress = 0; progress != 100; progress += std::rand() % 20)
    { // increment progress randomly
        // Delete the line below and change for loop condition to 'progress<=100' and put something meaningful in for loop progress increment in implementation.
        if (progress > 100)
            progress = 100;
        std::cout << "[";
        for (int i = 0; i < 100; i++)
            if (i < progress)
                std::cout << '*';
            else if (i == progress)
                std::cout << '>';
            else
                std::cout << ' ';
        std::cout << "] " << progress << " %" << '\r';
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // sleep
        
        if (progress == 100) ////  
            break;
    }
    std::cout << std::endl;
}
int main()
{
    // again:
    progressbar();
    // goto again;
    return 0;
}
