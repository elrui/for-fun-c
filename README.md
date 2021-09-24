# for-fun-c

Just for fun

This repo is a compilation of curious or funny pieces of code in C or C++, mostly with strange or unexpected results

- **indetermined_sum.c:** This one creates two functions that apparently don't do anything and combining them manages to implement an addition of two integers. The unexpected behavior can be compiler-dependant, but you may try it in your computer.

```bash
$ gcc -o indetermined_sum indetermined_sum.c
$ ./indetermined_sum 12 473
Sum is: 485
Do you know what just happened? And why?
```

- **charseq.c:** Funny experiment with types and arrar referencing. Print elements of an integer array as characters, and referencing the array in a weird way. It gets two parameters; where to start (default is 1, letter A), and length of the sequence (default 10).

```bash
$ gcc -o charseq charseq.c
$ ./charseq 1 15
These are the chars:
ABCDEFGHIJKLMNO
End of execution.
```

Or just use the `makefile`
