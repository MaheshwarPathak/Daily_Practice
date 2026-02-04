int lengthOfLastWord(char* s) {
    int l=strlen(s);
    int count=0;
    while(l>0 && s[l-1]==' '){
        l--;
    }
    while(l>0 && s[l-1]!=' '){
        count+=1;
        l--;
    }
    return count;
}