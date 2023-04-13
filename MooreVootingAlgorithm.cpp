#include <bits/stdc++.h>

int findMajorityElement(int arr[], int N){
   int res=0;

    int count=1;

    for(int i=1;i<N;i++){

      if(arr[res]==arr[i])	count++;
      else	count--;
      
      if(count==0){
          res=i;
          count=1;
      }

    }

      count=0;

    for(int i=0;i<N;i++)
        if(arr[res]==arr[i])
            count++; 

    if(count>N/2)
        return arr[res];

    else return -1;

}


// Finding Majority element in the Array of N numbers
