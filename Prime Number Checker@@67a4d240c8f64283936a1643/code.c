// Your code here...
int isPrime(int t){
    if(t==1){
        printf("0\n");
    }
    else if (t==0){
        printf("0\n");
    }
    for(int i=2;i<t;i++){
        if(t%i==0){
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
}