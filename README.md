# fork-logic
generate a c/c++ code snippet for desired no. of processes to create using fork() system call<br>
test by placing fork-logic output inside test.c<br>
eg.<br>
```
$ ./fork-logic 99
pid_t p;
if((p=fork())==0){
    fork();
    if((p=fork())==0){
        fork();
        fork();
        fork();
        fork();
        if((p=fork())==0){
            fork();
        }
    }
}
```
