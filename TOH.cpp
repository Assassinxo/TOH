#include<iostream>
using namespace std;


void toi(char s, char d, char h, int n, int* c){
    if(n==1){
        cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        *c+=1;
        return;
    }
    else{
        toi(s,h,d,n-1,c);
        cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        *c+=1;
        toi(h,d,s,n-1,c);
        return;


    }

}

int main(){

    cout<<"Enter the number of disks";
    int n;
    cin>>n;
    char s='s';
    char d='d';
    char h='h';
    int count=0;
    

    toi(s,d,h,n,&count);
    cout<<count;
}