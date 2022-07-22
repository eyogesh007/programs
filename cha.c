#include<stdio.h>
#include<string.h>
char input[100];
void ascendingOrdString()
{
    int i,j;
    char temp;
    int StringLength=strlen(input);
    for(i=0;i<StringLength-1;i++)
    {
        for(j=i+1;j<StringLength-1;j++)
        {
            if(input[i]>input[j])
            {
                temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }
}
int main()
{
    printf("\n \t Enter the String: ");
    gets(input);
    ascendingOrdString();
    printf("%s",input);
    return 0;
}
