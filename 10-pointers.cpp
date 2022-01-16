#include <iostream>

int main() {
  // pointer is a variable whose value is the address of another variable. 
  // type *var-identifier;

  int *int_pointer;
  float *float_pointer;
  char *char_pointer;

  // even though these pointer types are for different datatypes, they are all of same datatype
  // which is a a long hexadecimal number.
  // difference only exists between the variables these pointers refer to.

  // example:
  int var = 32;
  int *id;

  id = var;
  std::cout << var << std::endl;  // would print 32
  std::cout << id << std::endl;	  // would print adress of var
  std::cout << *id << std::endl;  // would print 32

  // pointers can be defined values during declaration, however this value would be some memory
  // address hence hex value. For example:
  // int *var2 = 232; would give an error as 232 isn't hexadecimal number, whereas-
  int *var3 = 0x234;
  // wouldn't give error as that is a hexa value.

  return 0;
}

void null_pointer() {
  int *var1 = NULL;
  // is a better way of declaring a new pointer than
  int *var2;
}

void pointer_to_array() {
  // It is legal to use array names as constant pointers, and vice versa. Therefore, 
  // *(balance + 4) is a legitimate way of accessing the data at balance[4].

  double balance[5] = {12, 4, 34, 23, 58};
  double *ptr_bal;

  ptr_bal = balance;

  // this would print all elements of the list
  for (int i = 0; i < 5; i++) {
    cout << *(ptr_bal + i) << endl;
  }
}


