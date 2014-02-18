/* Example code for Software Systems at Olin College.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *tracks[] = {
    "So What",
    "Freddie Freeloader",
    "Blue in Green",
    "All Blues",
    "Flamenco Sketches"
};

/* Returns a heap-allocated string that contains the strings 
   from the given array, joined up with no spaces between.
*/


char *strjoin(char *array[], int n)
{
    int i;
    int thelength=1;
    char *buf, *dest;
    
    for (i=0; i<n; i++){
        thelength += strlen(array[i]);
    }
    
    buf = (char *) malloc (total * sizeof(char));
    buf[0] = '\0';
    dest = buf;
    
    for (i=0; i<n; i++){
        strcot(destm array[i]);
        dest += strlen(array[i]);
    }
        
    return buf;
}


int main (int argc, char *argv[])
{
    char *s = strjoin(tracks, 5);
    printf("%s\n", s);
    return 0;
}
