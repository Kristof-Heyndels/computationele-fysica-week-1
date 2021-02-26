#include <iostream>
#include <cmath>
#include <tuple>

double sq(double a){
  return a*a;
}

double distance(std::tuple<double,double> p1, std::tuple<double,double> p2) {
  double x1 = std::get<0>(p1);
  double y1 = std::get<1>(p1);
  double x2 = std::get<0>(p2);
  double y2 = std::get<1>(p2);

  return sqrt(sq(x2-x1) + sq(y2-y1));
}

int main(int argc, char* argv[]) {
  if (argc != 5) {
    std::cout << "Please enter 4 arguments! (x1,y1,x2,y2)";
    return 1;  
  }

  std::tuple<double,double> p1 (std::stod(argv[1]),std::stod(argv[2]));
  std::tuple<double,double> p2 (std::stod(argv[3]),std::stod(argv[4]));

  std::cout << distance(p1, p2) << "\n";

  return 0;
}