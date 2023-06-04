#include "number_store.h"
#include "multiplication_table.h"
#include "overflow_manager.h"
// operation multiplication class
///Global counters
int x_counter = ((sizeof(num1))/4)-1;
int y_counter = ((sizeof(num2))/4)-1;
/// declaration of controller
int controller = 0;
class operation_multiplication {
public:
int data_fetch_multiplication_table() {
///object of multiplication table
multiplication_table_array myTable;
///call to true digit multiplication table
for(int i=x_counter; i>=0; i--) {

  for(int j=y_counter;j>=0; j--) {
  controller= j;
     int x =  num1[j];
     int y =  num2[i];
     ///multiplication table correspondent
     myTable.__table__M(x-1,y-1);
  }
}
return 0;
}

//int result_addition() {
//
//
//}

};
