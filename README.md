# fork-logic
generate a c/c++ code snippet for desired no. of processes to create using fork() system call<br>
test by placing fork-logic output inside test.c<br>
eg.<br>
```
$ ./fork-logic 99<br>
pid_t p;<br>
if((p=fork())==0){<br>
    fork();<br>
    if((p=fork())==0){<br>
        fork();<br>
        fork();<br>
        fork();<br>
        fork();<br>
        if((p=fork())==0){<br>
            fork();<br>
        }<br>
    }<br>
}<br>
```
