void reverseEachWord(char input[]) {
    int s = 0;
    for(int i=0; input[i]!='\0'; i++){
        if(input[i+1] == ' ' or input[i+1] == '\0'){
            int e = i;
            while(s<e){
                swap(input[s], input[e]);
                s++; e--;
            }
            s = i + 2; 
        }
    }
}