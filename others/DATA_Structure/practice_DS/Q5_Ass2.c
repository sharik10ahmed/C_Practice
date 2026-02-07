#include<stdio.h>

int main(){
    int i, n, target, index;
    
    printf("Enter no. of elements-> ");
    scanf("%d", &n);
    
    // IMPORTANT: Declare array size as n + 1 to hold the new element
    int arr[n + 1]; 
    
    printf("%d elements: \n", n);
    for(i = 0; i < n; i++){
        printf("Enter elements %d-> ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to insert-> ");
    scanf("%d", &target);

    // You can now insert up to index 'n' (at the very end)
    printf("Enter a desired index value from 0 to %d -> ", n);
    scanf("%d", &index);

    // --- LOGIC BORROWED FROM INSERTION SORT ---
    // Start from the last element (n-1) and shift elements to the right
    // until we reach the target index.
    for(i = n - 1; i >= index; i--){
        arr[i + 1] = arr[i]; // This is the "shifting" line
    }
    
    // Once space is made, insert the target
    arr[index] = target;
    
    // Increase n because we added an element
    n++; 
    // ------------------------------------------

    printf("\nUpdated Array:\n");
    for(i = 0; i < n; i++){
        printf("Value at index %d = %d\n", i, arr[i]);
    }
    
    return 0;
}