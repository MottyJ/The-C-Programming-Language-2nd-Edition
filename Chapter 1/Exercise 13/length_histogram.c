#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_CHARS 45
#define MAX_WORDS 30

int main(void)
{
    int c, i, j, state, word_length, sentence_length;
    int word[MAX_WORDS];

    for (i = 0; i < MAX_WORDS; ++i)
    {
        word[i] = 0;
    }

    state = OUT;
    word_length = sentence_length = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                word[sentence_length] = word_length;
                ++sentence_length;
                word_length = 0;
                state = OUT;
            }
        }
        else
        {
            ++word_length;
            state = IN;
        }
    }

    for (i = MAX_WORDS; i >= 1; --i)
    {
        for (j = 0; j <= sentence_length; ++j)
        {
            if (i <= word[j])
            {
                putchar('*');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}