#include <iostream>
#include <functional> //for inclusion of std::plus



template<typename T, typename U>
auto simple_plus(T lhs, U rhs) -> decltype(lhs + rhs)
{
    return lhs + rhs;
}

template<typename T, typename U>
auto simple_minus(T lhs, U rhs) -> decltype(lhs-rhs)
{
    return lhs - rhs;
}

/*=======================
* ====Alternative way====
* =======================
*/

template<typename A, typename B>
struct SimpleMath {
    static auto simple_Minus(A lhs, B rhs) -> decltype(lhs-rhs)
    {
        return lhs - rhs;
    }

    static auto simple_Plus(A lhs, B rhs) -> decltype(lhs+rhs)
    {
        return lhs+rhs;
    }
};


auto main() -> int {
    std::cout << "Hello, World! \n";


    std::cout << std::plus<int>{}(1,1.23) << "\n";
    
    // Cannot use auto on values only variable. need to use static_cast
    //std::cout << (auto) 1+1.23 << "\n";

    std::cout << static_cast<double>(1) + 1.23 << std::endl;
    std::cout << 1 + static_cast<int>(1.23) << std::endl;

    auto a = SimpleMath<int,double>::simple_Plus(3,4.5);
    std::cout << a << std::endl;
}
