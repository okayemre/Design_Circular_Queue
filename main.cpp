#include <iostream>
#include <vector>
#include "MyCircularQueue.h"



int main()
{
    
    MyCircularQueue myCircularQueue(3);
    std::cout << std::boolalpha << myCircularQueue.enQueue(1) << '\n'; // return True
    std::cout << std::boolalpha << myCircularQueue.enQueue(2) << '\n'; // return True
    std::cout << std::boolalpha << myCircularQueue.enQueue(3) << '\n'; // return True
    std::cout << std::boolalpha << myCircularQueue.enQueue(4) << '\n'; // return False
    std::cout << myCircularQueue.Rear() << '\n';     // return 3
    std::cout << std::boolalpha << myCircularQueue.isFull() << '\n';   // return True
    std::cout << std::boolalpha << myCircularQueue.deQueue() << '\n';  // return True
    std::cout << std::boolalpha << myCircularQueue.enQueue(4) << '\n'; // return True
    std::cout << myCircularQueue.Rear() << '\n';     // return 4
   
}