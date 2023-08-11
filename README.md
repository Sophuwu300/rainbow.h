# rainbow.h
Print rainbows in the terminal in c++!

see example for more info. 

To use, simply initiate the rainbow with the length of the rainbow that you want:
```
rainbow r;
r.init(30);
```
then loop some amount of times. and print a string and go to the next color. 
```
for (int i = 0; i < 30; i++) {
    r.print(string);
    printf("\t");
    r.print2d(string);
    printf("\n");
    r.next();
```

<img src="https://cdn.discordapp.com/attachments/400086257214029826/1137537986347667618/image.png">
