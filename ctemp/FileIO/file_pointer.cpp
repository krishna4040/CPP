# include <iostream>
# include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    // creating file pointer
    FILE *fp = NULL;
    fp = fopen("C:\\Users\\General\\Desktop\\file.txt","w");

    // FILE IO
        //formatted
        int a;
        fscanf(fp,"%d",&a);
        fprintf(fp,"%s","Hello");

        // unformatted
        char a = getc(fp);  // get char from file
        putc(a,fp);         // put char in file
        char b = fgetc(fp); // get char from file
        fputc(b,fp);        // put char in file


    // Function
        fseek(fp,5,SEEK_SET); // fseek(fp,offset(sursor_pos),position(set,cur,end))
        rewind(fp);    // set cursor_pos to 0 or beg of file
        int idx = ftell(fp);

    fclose(fp);
    return 0;
}
