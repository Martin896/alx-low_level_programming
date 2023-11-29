## Funtion Pointer
This project is about understanding what a function pointer is.
Recall that a pointer is a special kind of variable that stores the address of another variable.
Example
``
int a = 10;
int *ptr = &a;
``
Here 'a' is a normal variable that holds some value (in this case the integer 10).
ptr is the special variable that stores the address of 'a'
Hence, a function pointer store the address  of another function. The function pointer holds the address of thee code in function or the first base address of the function it points to. 
we can use function pointer to:
- Callback a function 
- Array of function pointer etc.
 
## Requirements
The codes are betty compiant Editor: vi Compilation: Ubuntu 20.04 LTS, gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89 New Line: All files ends with a new line

Important Files Included
The code was compiled on Ubuntu 20.04 LTS using gcc with the specified options. gcc -Wall -Werror -Wextra -pedantic -std=gnu89

How to Test
The main.c functions from the intranet have been used to test this functions

Author
Martin Odachi

Acknowledgments
Jenny's lecture on C programming has been my major resource in learning C programming. Dr Obed advice has helped me find the blearning resources that works for me.
