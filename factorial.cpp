#include <iostream>

int factorial(int n) {
  if(n == 0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Error: please give an argument\n";
    return 1;    
  }

  int n = std::stoi(argv[1]);

  int result = factorial(n);
  std::cout << "fac(" << n << ")=" << result << "\n";

  return 0;  
}
