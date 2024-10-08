#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter the array size :\n");
    scanf("%d" , &n);
    printf("Enter the array elements :\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for(int i = 0; i < n; i++){
    	if(arr[i] > largest){
    		largest = arr[i];
		}
	}
    	printf("ELement largest : %d\n", largest);
    	
    int largest_2 = -1;
    for(int i = 0; i < n; i++){
    	if(arr[i] != largest && (largest_2 == -1 || largest_2 < arr[i])){
    		largest_2 = arr[i];
		}
	}
    printf("Second Largest Element : %d\n", largest_2);
    
    int total_sum = 0;
    total_sum  = largest + largest_2;
    printf("Sum of largest and second largest : %d\n", total_sum);
    
return 0;
}