// pattern2: requiere single input from user square patterns(rows=column)
# include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    //1.Inverted pyramid: row_no. = star
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //2.Half pyramid after 180 rotation
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j<=n-i){
                cout<<" ";
            }
            else{
            cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;
    
    //3.Half pyramid using number
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<i;  
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //4.Floyds triangle:Half pyramid 
    int count = 1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;  
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //5.Butterfly pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //6.Hollow butterfly
    for(int i=1;i<=n;i++){
        //printing two columns with *
        for(int j=1;j<=n*2;j++){
            if ((j==1)||(j==i)){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        //printing rest stuff
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // copying down by symmetry
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n*2;j++){
            if ((j==1)||(j==i)){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }   
    cout<<"--------"<<endl;

    //7.Inverted pattern using numbers:
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //8.Half 01 pyramid pattern:
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //9.Rhombus pattern:
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //10.Number pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //11.palandromic number pattern
    for(int i=1;i<=n;i++){
        int j=1;
        for(j;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(j;j<=n;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //12.Star pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"--------"<<endl;

    //13.zig-zag pattern
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0)||(i==2&&j%4==0)){
                cout<<"*";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}