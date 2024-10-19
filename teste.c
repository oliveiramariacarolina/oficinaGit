#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    printf("%.1i\n\n\n", rand()%1000);

    return 0;
}
