#include<stdio.h>
#include<math.h>

float Mean(int n, float a[]){
    float sum = 0;
    for( int i=0;i<n;i++){
       sum+=a[i];
    }
    float m=sum/n;
    return m;
}

float Median(int n, float a[]){
    int m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(n%2!=0){
        m=a[(n+1)/2];
    }
    else{
        m=(a[n/2]+a[n/2+1])/2;
    } 
    return m;
}

float Mode(){
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1;  
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
}