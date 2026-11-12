#include <stdio.h>

int main(){
    int n, max = 0, min = 0, index_max = 0, index_min = 0;
    int a[100];

    scanf("%d", &n);
    for(int i = 0;i < n; i++){
        scanf("%d", &a[i]);
    }

    max = a[0];
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
            index_max = i;
        }
    }

    min = a[0];
    for(int i = 0; i < n; i++){
        if(min > a[i]){
            min = a[i];
            index_min = i;
        }
    }

    printf("%d %d, %d %d", min, index_min, max, index_max);

    return 0;
}
