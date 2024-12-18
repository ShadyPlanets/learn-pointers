#include <stdio.h>

void* func(char *var)
{
    char *temp = var;
    printf("var = %d\n", var);
    printf("&var = %d\n", &var);
    printf("*var = %c\n", *var);

    printf("temp = %d\n", temp);
    printf("&temp = %d\n", &temp);
    printf("*temp = %c\n", *temp);

    return temp;
}

int main() {
    
// // ----------------------pointing to strings ------------------------------------------------------------------------------------------------------------
// char *val = "hello";
// char **ptr = &val; //notice that in order to point to strings you need a pointer to pointer since strings are basically pointers to a set of values
// char ***ptr2 = &ptr;
// char *result = func(val); //this was added lately to show the addresses when strings are passed to a function, since functions exist on the stack memory

// // result = func(val);
// printf("result = %d\n", *result);

// printf("address of val = %d \n", &val);
// printf("address of ptr = %d \n", &ptr);
// printf("address of ptr2 = %d \n", &ptr2);

// printf("value stored in val = %c \n", *val);
// printf("value stored in ptr = %d \n", ptr); //gives me the content of ptr which will be the address of val
// printf("value stored in ptr2 = %d \n", ptr2); //gives me the content of ptr2 which will be the address of ptr

// printf("value stored in val = %c \n", *val);
// printf("value pointed to from the stored address in ptr = %c \n", **ptr); //gives me the value that ptr is pointing pointing at which is h
// printf("value pointed to from the stored address in ptr = %c \n", ***ptr2); //gives me the value that ptr2 is pointing pointing pointing at which is h

// printf("value stored in val = %d \n", val);
// printf("value pointed to from the stored address in ptr = %d \n", *ptr); //gives me the value that ptr is pointing pointing at which is h
// printf("value pointed to from the stored address in ptr = %d \n", ***ptr2); //gives me the value that ptr2 is pointing pointing pointing at which is h

// *ptr += 1; //incrementing the address by 4
// printf("address of ptr after incrementing the address = %d \n", ptr);
// printf("value stored in ptr after incrementing the address = %c \n", **ptr);
// printf("value stored in ptr after incrementing the address = %c \n", ***ptr2);

// // ----------------------pointing to variable ------------------------------------------------------------------------------------------------------------
// // Make sure to comment other sections before uncommenting this one
// char val = 15;
// char *ptr = &val;
// char **ptr2 = &ptr;

// printf("address of val = %d \n", &val);
// printf("address of ptr = %d \n", &ptr);
// printf("address of ptr2 = %d \n", &ptr2);

// printf("value stored in val = %d \n", val);
// printf("value stored in ptr = %d \n", ptr);
// printf("value stored in ptr2 = %d \n", ptr2);

// printf("value stored in val = %d \n", val);
// printf("value pointed to from the stored address in ptr = %d \n", *ptr); //gives me the value that ptr is pointing at which is h
// printf("value pointed to from the stored address in ptr = %d \n", **ptr2); //gives me the value that ptr2 is pointing pointing at which is h

// //----------------------pointing to arrays ------------------------------------------------------------------------------------------------------------
// // Make sure to comment other sections before uncommenting this one
// char val[5] = "hello";
// char *ptr = val;
// char **ptr2 = &ptr;
// char *result;

// result = func(val);
// printf("result = %d\n", *result);

// printf("address of val = %d \n", &val);
// printf("address of ptr = %d \n", &ptr);
// printf("address of ptr2 = %d \n", &ptr2);

// printf("value stored in val = %c \n", val[4]);
// printf("value stored in ptr = %d \n", ptr); //gives me the content of ptr which will be the address of val[0]
// printf("value stored in ptr2 = %d \n", ptr2); //gives me the content of ptr2 which will be the address of ptr

// printf("value stored in val = %c \n", *val);
// printf("value pointed to from the stored address in ptr = %c \n", *ptr); //gives me the value that ptr is pointing at which is h
// printf("value pointed to from the stored address in ptr = %c \n", **ptr2); //gives me the value that ptr2 is pointing pointing at which is h

// ptr += 4; //incrementing the address by 4
// printf("address of ptr after incrementing the address = %d \n", ptr);
// printf("value stored in ptr after incrementing the address = %c \n", *ptr);
// printf("value stored in ptr after incrementing the address = %c \n", **ptr2);

    return 0;
}