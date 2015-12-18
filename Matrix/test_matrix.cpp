#include <iostream>
#include "matrix.h"

int main() {
  // Defines two 10x10 matrices of type long double
  // The first has elements set to 1
  // The second has elements set to 2
  Matrix<long double> mat1(10, 10, 1.0);
  Matrix<long double> mat2(10, 10, 4.0);

  mat1(3,4) = 10.0;
  mat2(1,2) = -15.0;

  // a third matrix is product of the first two

   Matrix<long double> mat3 = mat1 -mat2 ;
  save(mat3, "test.csv");

  // Print the third matrix 
  for (int i=0; i<mat3.get_rows(); i++) {
    for (int j=0; j<mat3.get_cols(); j++) {
      std::cout << mat3(i,j) << ", ";
    }
    std::cout << std::endl;
  }

  return 0;
}
