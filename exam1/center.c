/* Example code for Software Systems at Olin College.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Returns a heap-allocated string with length n, with
// the given string in the middle, surrounded by fillchar.
//
// For example, if s is allen, n is 10 and fillchar is .
// the result is ..allen... 

char *center(char *s, int n, char fillchar)
{
<<<<<<< HEAD
    int st_length = strlen(s);
    int fill_num = n - st_length;
    char fill1;
    char fill2;

    if (fill_num%2 == 1)
    {
        fill1 = ((fill_num - 1)/2 +1)*(fillchar);
        fill2 = ((fill_num - 1)/2)*(fillchar);
    }else
    {
        fill1 = (fill_num/2)*(fillchar);
        fill2 = (fill_num/2)*(fillchar);
    }

    if (st_length < n)
    {
        char first = *strcat(&fill1, s);
        char last = *strcat(&first, &fill2);
        return &last;
    }else
    {
        return s;
    }

=======
>>>>>>> 4aef9a2dead75b19d72ccc9cf4bf52f02c1342c6
    // FILL THIS IN
    //    return NULL;
}


int main (int argc, char *argv[])
{
    char *s = center("Software", 30, '.');
    printf("%s\n", s);

    char *s2 = center("Systems", 31, '-');
    printf("%s\n", s2);

    char *s3 = center("Spring 2014", 32, '*');
    printf("%s\n", s3);

    char *s4 = center("Exam 1", 33, '^');
    printf("%s\n", s4);

    return 0;
}
