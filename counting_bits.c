#include <stdio.h>
#include <stdlib.h>

int* countBits(int num, int* returnSize) {
    if(num<0){
        *returnSize=0;
        return NULL;
    }
    int *result=malloc((num+1)*sizeof(int));
    *returnSize=num+1;
    result[0]=0;
    int i=1,end=1;
    while(1) {
        int lback;
        for(lback=0;lback<end;lback++) {
            if(i>num) return result;
            result[i]=result[lback]+1;
            i++;
        }
        end=i;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int size;
    int *res=countBits(100, &size);
    int i;
    for(i=0;i<size;i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
