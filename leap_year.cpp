#include <iostream>
#include <string>

using namespace std;

bool is_leap_year(int year)
{
  return (year % 4 && year % 100 != 0) || year % 400 == 0;
}

void print_is_leap_year(int year)
{
  string feedback{" is not a leap year.\n"};

  if (is_leap_year(year))
  {
    feedback = " is indeed a leap year.\n";
  }
  cout << "The year " << year << feedback;
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    std::cout << "Please enter a year";
    return 1;
  }

  int year{std::stoi(argv[1])};
  print_is_leap_year(year);
}