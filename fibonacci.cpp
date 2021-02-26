#include <iostream>

int fibonacci(int n) 
{  
  if (n == 1) {
    return 1;
  } else if (n > 1) {
    return fibonacci(n-1) + fibonacci(n - 2);
  }  
  return 1;
}

int main(int argc, char* argv[])
{
  if (argc != 2) {
    std::cout << "Please input as one arguement the length of the series you want to print.\n";
    return 1;
  }
  int length = std::stoi(argv[1]);

  if (length < 1) {
    std::cout << "Length of the series must be a whole number, greater or equal to one.\n";
  }

  for (int i = 0; i < length; ++i){
    std::cout << fibonacci(i) << " ";  
  }
  std:: cout << "\n";
}