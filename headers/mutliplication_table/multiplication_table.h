// multiplication table library
#include <iostream>
#include "overflow_manager.h"
#define X 9
#define Y 9
///controllers
extern int controller;
int overflow = 0;
// multiplication table
class multiplication_table_array {
public:
int** a_multiplication_table = new int* [X];

//allocate memory of y for each row
int __table__M(int x, int y) {

for(int i =0; i<X; i++) {
a_multiplication_table[i] = new int[Y];
}

   // assign values to the allocated memory
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++) {
            a_multiplication_table[i][j] = (i+1)*(j+1);
        }
    }
        // print the 2D array
//    for (int i = 0; i < X; i++)
//    {
//        for (int j = 0; j < Y; j++) {
//            std::cout << a_multiplication_table[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//    if(p==0) {
//        std:: cout<<a_multiplication_table[x][y]<<std::endl;
//
//    }else{
//        std:: cout<<a_multiplication_table[x][y]<<",";
//
//    }

///four overrflow operations & special end 0 overflow
int rem;
if(overflow != 0 && a_multiplication_table[x][y]/10 != 0) {
///creation of new overflow
a_multiplication_table[x][y] = a_multiplication_table[x][y] + overflow;
overflow =a_multiplication_table[x][y]/10;
float c = a_multiplication_table[x][y];
float d = c/10;
int rem = (d-overflow)*10;
std::cout<<overflow<<std::endl;
std::cout<<rem<<std::endl;
overflow = 0;
}else if(overflow == 0 && a_multiplication_table[x][y]/10 != 0){
std::cout<<"real number: "<<a_multiplication_table[x][y]<<std::endl;
overflow =a_multiplication_table[x][y]/10;
float c = a_multiplication_table[x][y];
float d = c/10;
int rem = (d-overflow)*10;
std::cout<<overflow<<std::endl;
std::cout<<rem<<std::endl;
overflow = 0;
}else if(overflow != 0 && a_multiplication_table[x][y]/10 == 0) {
a_multiplication_table[x][y] = a_multiplication_table[x][y] + overflow;
std::cout<<a_multiplication_table[x][y]<<std::endl;
std::cout<<overflow<<std::endl;
overflow == 0;
}else if(overflow == 0 && a_multiplication_table[x][y]/10 == 0) {
std::cout<<a_multiplication_table[x][y]<<std::endl;
overflow = 0;
}else {
}

  return 0;
    }

};


