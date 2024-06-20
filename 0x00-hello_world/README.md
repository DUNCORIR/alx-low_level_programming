1.gcc -E "$CFILE" > c:script that runs a C file through the preprocessor and save the result into another file.
2.gcc -c $CFILE -o ${CFILE%.c}.o:script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c
3.gcc -S 2.main.c -o 2-main.s:script that generates the assembly code of a C code and save it in an output file.The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c
4.
