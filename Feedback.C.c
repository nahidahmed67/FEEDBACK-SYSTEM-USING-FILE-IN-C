#include <stdio.h>
int main()
{
    char ch;
    FILE*fp;
    fp=fopen("Feedback.txt","w");
    if(fp==NULL)
    {
        printf("File opening failed/n");
        return 0;
    }
    fprintf(fp,"feedback about the C programmingn");
    fprintf(fp,"C progamming is easily understandable/n");
    fprintf(fp,"it improves logical thinking/n");
    fprintf(fp,"it improves problem solving skills/n");
    fprintf(fp,"build a strong programming foundation/n");
    fprintf(fp,"its improves codings and debugging skills");
    fclose(fp);
    fp=fopen("feedback.txt","a");
    if(fp==NULL)
    {
        printf("file opening failed/n");
        return 0;
    }
fprintf(fp,"feedback about the C-sir");
fprintf(fp,"sir explains steps by steps");
fprintf(fp,"he revises all the previous concepts day by day before a new class");
fprintf(fp,"he is helping to understand the program");
fprintf(fp,"he slowly explains until we understand");
fprintf(fp,"he encourage the class and motivating");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
    printf("file opening failed/n");
    return 0;
}
while((ch=fgetc(fp))!=EOF)
{
    printf("%c",ch);

}
fclose(fp);
return 0;
}