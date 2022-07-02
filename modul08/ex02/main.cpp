#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << BLUE << "--------------------------" << DEFAULT << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    int i = 0;
    while (it != ite)
    {
        std::cout << MAGENTA << "stack[" << i << "]: " << *it << DEFAULT << std::endl;
        ++it;
        i++;
    }
    std::cout << GREEN << mstack.top() << DEFAULT << std::endl;
    std::stack<int> s(mstack);

    std::cout << BLUE << "------PROGRAM FINISH------" << DEFAULT << std::endl;
    return 0;
}