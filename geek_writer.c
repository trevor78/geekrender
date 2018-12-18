#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fp = fopen("gfile.txt", "wx");
    else
    {
        fputs("GeeksforGeeks", fp);
        puts("Done");
        fclose(fp);
    }
    return 0;
}
