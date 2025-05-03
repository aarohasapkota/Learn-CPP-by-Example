#include <iostream>
#include <vector>

void generate_triangle()
{
    /*=======================
    * ====+With Vectors+====+
    * =======================
    * */
    //Uniform Initialization
    std::vector<int> data{ 1 }; // Curly Bracket means we are putting direct values

    //Initialization List
    std::vector<int> data_2(2); // Normal Bracket means instialize with 1 value which is zero, 2 means 2 zero

    for (auto number : data){
        std::cout << number << ' ';

    }
    std::cout << '\n';

    for (auto number : data_2){
        std::cout << number << ' ';

    }
    std::cout << '\n';

    // using auto creates a new object by calling the copy constructor
    // if the data is large like string or vectors and has 1000 object, 1000 copies are made.
    //for (auto& number : data)       // modifies original (if needed)
    //for (const auto& number : data) // read-only, efficient



    /*==============================================
    * ====Uniform Initializatio with other types====
    * ==============================================
    * */

    //We can do the { } initialization with other types as well.
    std::cout << "We can do the { } initialization with other types as well." << std::endl;
    int x{42};
    double y{3.4};
    std::cout << x << ' ' << y << std::endl;
}


auto main() -> int
{
    generate_triangle();
}