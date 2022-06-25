#include <stdio.h>

void print (int mat[10][10]){ 
    for(int n = 0;n<10;n++){
        for(int i = 0;i<10;i++){
        printf("%d ",mat[n][i]);
    }
    printf("\n");
    }

}

int main(){
    int matriz[10][10];
    for(int c =0; c<10;c++){
        for(int o = 0;o<10;o++){ 
            *(matriz[c]+o) = 0;
    }

}

print(matriz);
printf("\n");

int num = 0;
for(int l =0; l<10;l++){
    for(int a = 0;a<10;a++){
    num += 1;
    *(matriz[l]+a) = num;

    }

} 
print(matriz);

return 0;
}