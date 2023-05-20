#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void world()
{
    printf("World Start\n");
    printf("World End\n");
}

void hello()
{
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}

int main()
{

    printf("Main start\n");
    hello();
    printf("Main End\n");

    return 0;
}

// Expected Output

// Main start
// Hello Start
// World Start
// World End
// Hello End
// Main End

// resone call stack