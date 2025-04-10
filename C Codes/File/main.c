/*#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("ABC.txt", "r");
    if(fp==NULL)
    {
     printf("------FILE  OPENING  ERROR------");
    } a

    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch==EOF)
            {
                break;
            }
            printf("%c", ch);
        }
    }
    fclose(fp);
    return 0;
}

#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char ch;
    fp = fopen("ABC.txt", "a");
    if(fp==NULL)
    {
     printf("------FILE  OPENING  ERROR------\n");
    }

    else
    {
        while((ch=getchar())!='%')
        {
            fputc(ch,fp);
        }
    fclose(fp);
        }
    fp1=fopen("ABC.txt", "r");
    if(fp1==NULL)
    {
     printf("------File Opening Error------\n");
    }
    else
        {
        while(1)
        {
            ch=fgetc(fp1);
            if(ch==EOF)
            {
                break;
            }
            printf("%c", ch);

        }
        fclose(fp1);
    }
}
*/


#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("ABC.txt", "r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
    }
        fclose(fp);

    fp=fopen("f1.txt", "w");
    while(1)
    {
        fputc(ch,fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
}
fp=fopen("f1.txt", "r");
    if(fp==NULL)
    {
     printf("------File Opening Error------\n");
    }
    else
        {
        while(1)
        {
            ch=fgetc(fp);
            if(ch==EOF)
            {
                break;
            }
            printf("%c", ch);

        }
        fclose(fp);
    }
}
