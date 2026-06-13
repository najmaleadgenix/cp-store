#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
     printf("Enter a string: \n");
     fgets(str, sizeof(str), stdin);

     int current_length=0, max_lenght=0;
     int start_index=0;
     int i=0;
     while(1)
     {
        if(str[i]=='\0')
        break;

        if(str[i]!=' ')
        current_length++;
        else 
        {
            if(current_length>max_lenght)
            {
                max_lenght=current_length;
                start_index= i - current_length;
            }
            current_length=0;
        }

        i++;

     }
     printf("The largest word is: ");
     for(int i=start_index; i<start_index+max_lenght; i++)
     printf("%c",str[i]);
    return 0;
}