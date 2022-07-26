// Enter this below code to print "Hello World". This is NOT a complete project!
//>+++++++++[<++++++++>-]<.>+++++++[<++++>-]<+.+++++++..+++.>++++++++[<---------->-]<+.>+++++[<++++++++++>-]<+++++.>++[<++++++++++>-]<++++.+++.------.--------.
#include <iostream>
#include <string>
using namespace std;

int Array[100]={};
int index=0;

int nextcell()
{
    index++;
    return 0;
}
int prevcell()
{
    if(index>0)
    {
        index--;
    }    
    return 0;
}

int increment()
{
    Array[index]++;
    return 0;
}

int decrement()
{
    Array[index]--;
    return 0;
}

int display()   
{

    int ascii = Array[index];
    char character = char(ascii);
    cout<<character;
    return 0;
}

int charinput()
{
    cin>>Array[index];
    return 0;
}

int main()
{
    int i;
    char input[1000];
    cout<<"Any input other than the valid inputs will be ignored \n     {< , > , . , [ , ] , , , + , _ } \n Maximum inputs are till 100 limit\n";
    cout<<"enter the code:  ";
    cin>>input;    
    for(i=0;input[i]!='\0';i++)
    {
        switch (input[i])
        {
        case '>' : nextcell();
                    break;
        case '<' : prevcell();
                    break;                    
        case '+' : increment();
                    break;                    
        case '-' : decrement();
                    break;                            
        case '.' : display();
                    break;                            
        case ',' : charinput();
                    break;   
        case '[' : if(Array[index]==0)
                    {
                        while(input[i]!=']')
                        {
                            ++i;
                        }
                    }
                    break; 
        case ']' :  if(Array[index]==0)
                    {
                    
                        continue;
                    }
                    else if(Array[index]!=0)
                    {
                        while(input[i]!='[')
                        {
                            --i;
                        }
                    }
                    break;   
        default:
                    break;
        }
    }
}
