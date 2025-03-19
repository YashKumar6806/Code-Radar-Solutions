// Your code here...


int bubbleSort(int a[],int b){
    int max =a[0];
    for(int i=0;i<b;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

void printArray(int a[],int b){
    for(int i=0;i<b;i++){
        printf("%d",a[i]);
        printf(" ");
    }
}

