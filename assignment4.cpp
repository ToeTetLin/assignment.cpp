
#include <stdio.h>
#include <stdlib.h>
int arr[7];
int winhtut[7]={119,105,110,104,116,117,116};
int nation[17]={};
void readFILE();

int main(){
    if(arr[7]==winhtut[7]){
        printf("True");
    }
    readFILE();
    printf("DONE\n");
    return 0;
}

void readFILE(){
    //w-119,i=105;n=110,h=104;t=116;u=117;
    FILE *fptr;
    fptr = fopen("words.txt","r");
    int count = 0;
    int i =0;
    char c = fgetc(fptr);
    while(!feof(fptr)){
        arr[i] = c;
        c = fgetc(fptr);
        i++;
        if(i==6){
            if(arr[i]==winhtut[7]){
                count++;
                i=0;
            }
        }
        else{
            continue;
        }
    }
    fclose(fptr);
    printf("total Num of winhtut : %d",count);
}
