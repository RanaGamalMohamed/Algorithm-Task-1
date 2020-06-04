#include <iostream>
#include <cstdlib>
using namespace std;


void intersectionofDiscs (int mainArray[],int n);//prototype
int main()
{
    cout<<"enter the num of circles"<<endl;
    int size;
    cin>>(size);
    int i , arr[size];
    for (i=0;i<size;i++){

        cin>>arr[i];
    }
    intersectionofDiscs(arr,size);

     return 0;
    }
void intersectionofDiscs (int mainArray[],int size){
        int i,j,intersections=0;
    for(i=0; i<size-1 ; i++){
        for(j=i+1 ; j<size ; j++){
            if(abs(i-j)<(mainArray[i]+mainArray[j])){
                 cout<<"there is intersection between "<<i <<"and"<<j<<endl;
            intersections++;

            }
            else { continue; }
            }}
         cout<<"the number of intersection"<<intersections;}
