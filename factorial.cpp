#include <iostream>

int factorial(int n, bool& error) {
  int fac {1};

  if(n >= 0) {
    for (int i = 1; i <= n; ++i) {
      fac *= i;
    }
    error = false;
    return fac;
  }
  error = true;
  return 0;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Error: please give an argument\n";
    return 1;    
  }

  int n = std::stoi(argv[1]);
  bool has_error;

  int result = factorial(n, has_error);
  if (!has_error) {
    std::cout << "fac(" << n << ")=" << result << "\n";
  } else {
    std::cout << "Error: negative value\n";
  }

  return 0;  
}
