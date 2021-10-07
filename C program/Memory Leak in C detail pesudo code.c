/* Memory Leak in c */
/* The memory leak occurs, when a piece of memory which was previously allocated by the programmer. 
    Then it is not deallocated properly by programmer.
   That memory is no longer in use by the program.
    So that place is reserved for no reason.
   That’s why this is called the memory leak.*/
 
 #include <stdio.h>
void function_which_allocates(void) {
    /*allocate an array of 45floats */
    float *a = malloc(sizeof(float)*45);
    /*additional code making use of 'a' */
    /*return to main , having forgotten to free the memory we mallac'd */
}
int main(void) {
    function_which_allocates();
    /* the pointer 'a' no longer exists, and therfore cannot be freed, 
    but the memory is still allocated ,a leak has occurred.*/


}

/* we have to use the free() function to release the memory referenced by the pointer *a to avoid any memeory leaks */
