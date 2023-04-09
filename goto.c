
#include <stdio.h>

void main()
{
    printf("start\n");
    
    goto label;
    
    printf("skip\n");
    
    label:printf("goto\n");
    
    printf("end");


}
