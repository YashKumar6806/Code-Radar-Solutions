// Your code here...
int isPrime(int t){
    if(t==1){
        return 0;
    }
    else if (t==0){
        return 0;
    }
    for(int i=2;i<t;i++){
        if(t%i==0){
            return 0;
        }
    }
    return 1;
}