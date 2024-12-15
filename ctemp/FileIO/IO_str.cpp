# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // sprintf: sprintf(array_name, “format specifier”, variable_name);
    /*simliar to printf but instead of printing op on console it prints on char arr or string*/
    char str[50];
    int a = 2, b = 8 , c , d;
    sprintf(str, "%d ans %d are even number",a,b);  //%*s is used to skip

    // sscanf: sscanf(array_name, “format specifier”, &variable_name);
    /*simliar to scanf but instead of reading ip from console it reads from char arr or string*/
    sscanf(str, "a = %d and b = %d",&c, &d);
    return 0;
}
