# Exercise 1-2. 
Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above.

# Notes
Although the program compiles and runs, it compiles with a warning:
  ```
    backslash_c.c:6:22: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
        printf("hello, wo\crld\n");
                         ^~
  ```
This simply adds the 'c' and the backslash is removed. Alas, there's no escape sequence with those characters.

Additionally, I've added type specificity to the solution and to further solutions; this will keep warnings to a minimum. 