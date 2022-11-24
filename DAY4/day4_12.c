// Cats and Mouse https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
/*
!Function Description:

Complete the catAndMouse function in the editor below.

catAndMouse has the following parameter(s):

int x: Cat A's position
int y: Cat B's position
int z: Mouse C's position

!Returns:
string: Either 'Cat A', 'Cat B', or 'Mouse C'

!Sample Input 0:
2
1 2 3
1 3 2

!Sample Output 0
Cat B
Mouse C

?Explanation 0
*Query 0: The positions of the cats and mouse are given.

Cat B will catch the mouse first, so we print Cat B on a new line.

*Query 1: In this query, cats A and B reach mouse C at the exact same time.

Because the mouse escapes, we print Mouse C on a new line.
*/
#include <stdio.h>
#include <string.h>
int abs(int x)
{
    if (x > 0)
    {
        return x;
    }
    return (x * (-1));
}
char *catAndMouse(int x, int y, int z)
{
    static char str[3][8];
    strcpy(str[0], "Cat A");
    strcpy(str[1], "Cat B");
    strcpy(str[2], "Mouse C");
    int a, b;
    a = abs(z - x);
    b = abs(z - y);
    if (a == b)
    {
        return str[2];
    }
    else if (a < b)
    {
        return str[0];
    }
    else
    {
        return str[1];
    }
}

int main()
{
    int x, y, z,t;
    printf("NO. OF TEST CASES:");
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        printf("ENTER THE LOCATION OF (CAT A,CAT B,MOUSE C): ");
        scanf("%d%d%d",&x,&y,&z);
        char *result = catAndMouse(x, y, z);
        printf("%s\n", result);
    }
    return 0;
}