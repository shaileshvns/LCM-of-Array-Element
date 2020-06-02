#include<iostream>
#include<array>
using namespace std;

    
    int lcm(int a,int b){
    
     int max,min,temp;
    if(a>b){
        max = a;
        min = b;
    }
    else
    {   temp = a;
        a = b;
        b = temp;
        max = a;
        min = b;
    } 
    while (max%b!=0)
    {
        max = max +a;     
    }

    return max;
}
int FindLcm(int a[],int n){
    int tempLcm = 1;
    for(int i=0;i<n;i++){
        tempLcm = lcm(tempLcm,a[i]);
    }
    
    return tempLcm;
}
int main(){
    int a[]={100,20,200,50,40};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<" LCM of Array : "<<FindLcm(a,n)<<endl;
    return 0;
}