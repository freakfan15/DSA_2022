
int makeAnagram(char str1[], char str2[]){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    unordered_map<int,int> mp;

    for(int i=0; str1[i]!='\0'; i++){
        mp[str1[i]]++;
    }

    for(int i=0; str2[i]!='\0'; i++){
        char c = str2[i];
        if(mp[c] > 0){
            mp[c]--;
        } 
        else {
            mp[c]++;
        }
    }

    int ans = 0;

    for(auto it: mp){
        ans+= abs(it.second);
    }

    return ans;
    
}
