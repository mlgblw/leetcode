/*************************************************************************
	> File Name: lc-20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时25分27秒
 ************************************************************************/
bool isValid(char * s){
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

}
