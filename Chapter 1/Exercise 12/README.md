# Exercise 1-12.

Write a program that prints its input one word per line.

# Notes

Initially, I had left out the code:

```
    if (word == IN)
    {
        putchar('\n');
        word = OUT;
    }
```

This works without it - except when clicking tabs between words, it would consider it another word.

I tried doing:

```
if ((word == IN) && (c == ' ' || c == '\n' || c == '\t'))
```

But that doesn't ignore the tabs. I still don't understand why.