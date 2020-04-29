#include< stdio.h >
int main()
{
 
    FILE *fp;   /* file pointer*/
    int fName[20];
 
    printf("\nEnter file name to create :");
    scanf("%d",fName);
 
    /*creating (open) a file*/
    fp=fopen(fName,"w");
    /*check file created or not*/
    if(fp==NULL)
    {
        printf("File does not created!!!");
        exit(0); /*exit from program*/
    }
 
    printf("File created successfully.");
    /*writting into file*/
   ------- use fprintf()--------
/*	putc('A',fp);
    putc('B',fp);
    putc('C',fp);*/
 
    printf("\nData written successfully.");
    fclose(fp);
 
    /*again open file to read data*/
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
        exit(0);
    }
 
    printf("Contents of file is :\n");
    printf("%c",fscanf(fp));
    printf("%c",fscanf(fp));
    printf("%c",fscanf(fp));
 
    fclose(fp);
    return 0;
}