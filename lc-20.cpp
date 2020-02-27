/*bool isValid(char * s){
    int length = strlen(s);
    char * m = (char * )malloc(sizeof(char) * length);
    int count = -1;

    if(length == 0)return true;

    for(int i = 0; i< length; i++){
        if(*(s+i) == ')'){
            if(count > -1  &&*(m + count ) == '(') count --;
            else return false;
        }
        else if(*(s+i) == '}'){
            if(count > -1  &&*(m + count ) == '{') count --;
            else return false;
        }else if(*(s+i) == ']'){
            if(count > -1  &&*(m + count ) == '[') count --;
            else return false;
        }
        else m[++count] =s[i];
    }
    if(count > -1)return false;
    return true;

}*/
bool isValid(char * s){
    int length = strlen(s);
    char * m = (char * )malloc(sizeof(char) * length);
    int top = -1,flag  = 1;
    int cnt  = 0;
    while(s[cnt]){
        switch(s[cnt]){
                case '(' :
                case '[':
                case '{':m[++top] = s[cnt];break;
                case ')':flag = (top != -1 && m[top--] == '(');break;
                case ']':flag = (top != -1 && m[top--] == '[');break;
                case '}':flag = (top != -1 && m[top--] == '{');break;
        }
        cnt++;        
        if(!flag)break;
    }
    free(m);
    return (flag && top == -1);
}
