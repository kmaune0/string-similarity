#include<stdio.h>
#include<string.h>
void stringMatch(char strMain[]) {
        int similarity = 0,i,j;
        for(i =0;i<strlen(strMain);i++){
            for(j =0;j+i<strlen(strMain);j++){
                if(strMain[j] == strMain[j+i]){
                    similarity++;
                }else{
                    break;
                }

            }
        }
        printf("%d\n",similarity);
}

int main(){
        int T,i;
        scanf("%d",&T);
        char str[1000000];
        for(i =0;i<T;i++){
            scanf("%s",str);
            stringMatch(str);
        }
}
