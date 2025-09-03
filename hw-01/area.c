#include <stdio.h>
int main(){
    int height, width;
    float area;
    scanf("%d %d",&height,&width);
    area = 0.5*height*width;
    printf("%.3f\n",area);
    return 0;
}