# Chapter 1:

## Things learnt:
- `auto` keyword and deductions
- trailing return type using `auto` and `->`
- templates and functions utilizing `auto`

### auto keyword
- Basically `auto` does the **return type deduction** which means telling the compiler to figure out the return type.
- There is not much overhead while using `auto` and making the compiler do the work.
- The only drawback is that, `auto` create a copy of each object and if used to access a `<vector>` of size 1000 using `for (auto number : numbers)` it will create 1000 copies of object.
- `auto` can only be used with Variable cannnot do something like `std::cout << (auto) 1+1.23 << "\n";`

### Trailing return type
- A simple example is to rewrite of the main function:
  ```cpp
  auto main() -> int
  {
  }
  ```
- Another example can be taken with custom functions.
- Lets see by creating our own `+` operator similar to `std::plus<>`
  ```cpp
  template<typename A, typename B>
  auto simple_plus(A lhs, B rhs) -> decltype(lhs+rhs)
  {
    return lhs+rhs;
  }
  ```
- You can also create multiple functions under the same template just make sure to use Structs. Make sure the functions are `static`.
- ```cpp
  template<typename D, typename C>
  struct Simple_Strings {
    static auto Simple_Concat(D word1, C word2) -> decltype(word1+word2)
    {
      return word1 + word2;
    }
      static auto Simple_Access(D word, int k) -> decltype(word[k])
    {
      return word[k];
    }
  };

  std::string s1 = "Hello, ";
  const char* s2 = "World!";

  auto result = Simple_Strings<std::string, const char*>::Simple_Concat(s1, s2);
  auto ch = Simple_Strings<std::string, const char*>::Simple_Access(s1, 1);

  ```
  
