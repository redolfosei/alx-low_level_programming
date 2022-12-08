[0. Write a script that runs a C file through the preprocessor and save the result into another file.]
gcc $CFILE -E -o c

[1. Write a script that compiles a C file but does not link.]
gcc -c $CFILE

[2. Write a script that generates the assembly code of a C code and save it in an output file. #the -o is the output to the cisfun file.]
gcc -S $CFILE

[3. Write a script that compiles a C file and creates an executable named cisfun]
gcc $CFILE -o cisfun

[4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.]

