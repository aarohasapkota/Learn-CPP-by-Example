# Chapter 2

## Things Learnt
- `auto` using `for` over `vector<>`
- Initialization List
- Uniform Initialization


### auto using for over vector<>
- This should ideally be done over other containers like `map` and `unordered_map` as well.
- ```cpp
  //Initializing vector<int> using uniform intialization
  std::vector<int> data{ 1 }; // This will initialize a vector with value 1
  
  for ( auto number : numbers )
  {
    std::cout << number << ' ';
  }
  std::cout << '\n';
  ```
- `auto` here create each copy of `number` object by calling the `copy` constructor
- If your containers is huge better to use `auto&`
- ```cpp
  for (auto& number : numbers) //If you want read and write access
  for (const auto& number : numbers) // Read-Only
  ```
### Initialization List
- It is a basic way to quickly initialize a container.
- ```cpp
  std::vector<int> data(2); // This will create a vector with 2 values fill it with zeroes. ie. {0,0}
  
### Uniform Initiaization
- This is an easier way initialize all initializations since C++11
- ```cpp
  int x{ 42 };
  double y{3.42};
  ```
- $$\color{red}{Work\ in\ progress}$$
  
