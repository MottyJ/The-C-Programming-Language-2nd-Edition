# Exercise 1-6.

Verify that the expression getchar() != EOF is 0 or 1.

# Notes

I'm uncertain as to the author's instruction here; if I input any character(s) the value of EOF is 1 and if I simply exit the program EOF value is 0. Seems like that's either 1 or 0. But right before the question the author writes:

"This has the undesired effect of setting c to 0 or 1, depending on whether or not the call of
getchar returned end of file."