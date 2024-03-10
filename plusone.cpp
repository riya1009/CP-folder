#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[len];
    int length = 3;
    int number;
    int rem;
    string plus= to_string(arr[0]);
    for(int i = 1 ; i<length;i++){
        plus = plus+to_string(arr[i]);
    }
    number = stoi(plus);
    number = number+1;
    for(int i=length-1;i>=0;i--){
        rem = number%10;
        number=number/10; 
        arr2[i]=rem;
    }
    for(int i = 0;i<len;i++){
        cout<<arr2[i];
    }

}