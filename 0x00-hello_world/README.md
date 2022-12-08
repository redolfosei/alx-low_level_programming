[Write a script that runs a C file through the preprocessor and save the result into another file.]
gcc $CFILE -E -o c

[Write a script that compiles a C file but does not link.]
gcc -c $CFILE

[Write a script that generates the assembly code of a C code and save it in an output file. #the -o is the output to the cisfun file.]
gcc $CFILE -o cisfun

