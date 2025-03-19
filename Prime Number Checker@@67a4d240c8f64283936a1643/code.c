// Your code here...
int isPrime(int num){

    if(num==1){
        printf("0\n");
    }
    else if (num==0){
        printf("0");
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
}