#include<stdio.h>
int main(){
	printf("MENU\n1.In gia tri cac phan tu cua mang\n2.Su dung Insertion Sort sap xep mang giam dan va in ra\n3.Su dung Selection Sort sap xep mang tang dan va in ra\n4.Su dung Bubble Sort sap xep mang giam dan va in ra\n5.Thoat\n");
    int arr[5]={3,5,8,4,6};
    int size=sizeof(arr)/sizeof(int);
    int n;
    while(1){
    	printf("Moi nhap lua chon ");
    scanf("%d",&n);
    switch(n){
    	case 1: for(int i=0;i<size;i++){
    		printf("%d ",arr[i]);
			}
			printf("\n");
			break;
		
		case 2: for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
        printf("Mang sau khi sap xep: ");
        for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    break;
        case 3:
    for (int i = 0; i < size - 1; i++) {
         int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
	}
	printf("\n");
	break;
	    case 4: 
	    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
			}
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
		break;
		case 5: printf("Thoat");
		return 0;
		default: printf("Du lieu khong hop le!!!\n");
			
		
		
	
	}
	}
		return 0;
 }
			
			
			
		
		
    	
    	
    	
    	
    	
    	
    	
    	
	

	

