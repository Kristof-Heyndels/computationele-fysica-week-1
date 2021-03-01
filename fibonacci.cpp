#include <iostream>

int fibonacci(int n) 
{
  if (n == 1) {
    return 1;
  } 
  else if (n > 1) {
    int f_n_1 {1};
    int f_n {1};
    
    for (int i = 2; i != n; ++i) {
      int tmp (f_n);

      f_n += f_n_1;
      f_n_1 = tmp;
    }
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
    return 2;
  }

  for (int i = 0; i != length; ++i){
    std::cout << fibonacci(i) << "\n";  
  }
  return 0;
}