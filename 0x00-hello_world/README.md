[0. Write a script that runs a C file through the preprocessor and save the result into another file.]
gcc $CFILE -E -o c

[1. Write a script that compiles a C file but does not link.]
gcc -c $CFILE

[2. Write a script that generates the assembly code of a C code and save it in an output file. #the -o is the output to the cisfun file.]
gcc -S $CFILE

[3. Write a script that compiles a C file and creates an executable named cisfun]
gcc $CFILE -o cisfun

[4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.]
[puts already brings a newline at the end of the print.]
4-puts.c


[5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.]
5-printf.c

[6. Write a C program that prints the size of various types on the computer it is compiled and run on.]
6-size.c

[7. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.]
gcc -S -masm=intel $CFILE

[8. Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error]
[these are some other ways to print]
puts
fputs
printf
write(STDOUT_FILENO, "and that piece of art is useful\" - DK, 2022-10-19\n", 59);
