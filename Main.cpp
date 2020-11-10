#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

//for digit conditions 
int digit[20]={0};
int tnum = 0;
int l =-1;

//for alpha conditions
int row = 0, column = -1;
char variables[20][20];
int lastpos[10];
int lp_n=0;



void show(int arr[20])
{
cout<<"[";
for (int i = 0; i < 20 ; i++)
{
    if(i<19){
    cout<<arr[i]<<",";
    }
    else if (i==19)
    {
        cout<<arr[i]<<"]";
    }
    
   
}
}

void lexer(string source){

int len = source.length();
char char_list[len];
strcpy(char_list,source.c_str());

int ascii[len] = {0} ;

for (int i = 0 ; i<len; ++i){
    ascii[i] =  (int) char_list[i];
    //cout<<ascii[i]<<" ";
    
}
cout<<isalpha('1');
//////////////////////Lexical anlysis//////////////////

for (int k = 0; k<len;k++){

    //Checking if the character is a digit;

    if(isdigit(char_list[k])){
        cout<<"Got a digit!";
        while(isdigit(char_list[k])){

        tnum = (tnum *10) + (ascii[k] - '0');  //if 6,0 => 54-48 = 6(int) 
        k++;
    }
    l++;
    digit[l] = tnum;
    tnum = 0;
    
    }



    //Checking if current and successive elements formed is a variable(formed from alphabets)  valid variables - abc , ab1 , ab_

    // if (isalpha(char_list[k])) 
    // {
       
    //     while (isalpha(char_list[k]) || isdigit(char_list[k])  || char_list[k] == '_')
    //     {
    //         column++;
    //         variables[row][column] = char_list[k];
    //         k++;      
    //     }
    //     row++;
    //     lastpos[lp_n] = column;
    //     lp_n++;
    //     k = -1;
    // }
}

cout<<">DIGIT TABLE : ";
show(digit);

//len = sizeof(lastpos)/sizeof(lastpos[0]);

//cout<<variables[0][lastpos[0]]<<endl;

}


int main(){

    cout<<">>>Dodo Language:"<<endl;
    string inp = "frd : 60;";

    cout<<"<<"<<inp<<endl;
    
    lexer(inp);

    return 0;


}