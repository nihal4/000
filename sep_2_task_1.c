#include <stdio.h>

int main(){
    int arr_size, prompt, in_index, in_value;
    //arr size
    printf("\nenter array size\n");
    scanf("%d", &arr_size);
    int arr[arr_size];
    for(int i = 0; i<arr_size; i++){
        printf("enter eliment %d:\t", i+1);
        scanf("%d", &arr[i]);
    }

    while(prompt!=0){
        printf("\n\n1.insert\n2.delet\n3.search\n4.change\n0.exit");
        printf("\nchose:\t");
        scanf("%d", &prompt);
         
        switch(prompt){
            case 1:
                //cheking index
                printf("\ninter index:\t");
                scanf("%d", &in_index);
                if((in_index-1)>=0 && (in_index-1) < arr_size){
                    //ask for new value
                    printf("\nenter value:\t");
                    scanf("%d", &in_value);
                    for(int i = arr_size; i>=(in_index-1); i--){
                        arr[i] = arr[i-1];
                    }
                    arr[(in_index-1)] = in_value;
                    arr_size++;

                    // printing new array

                    for(int i = 0; i< arr_size; i++){
                        printf("%d\t", arr[i]);
                    }
                }else{
                    printf("\ninvalid position\n");
                }
                break;
            
            case 2:
                //take index
                printf("\ninter index:\t");
                scanf("%d", &in_index);

                if((in_index-1)>=0 && (in_index-1) < arr_size){
                    for(int i = (in_index-1); i<arr_size; i++){
                        arr[i] = arr[i+1];
                    }
                    arr_size--;
                    
                    // printing new array

                    for(int i = 0; i< arr_size; i++){
                        printf("%d\t", arr[i]);
                    }
                }else{
                    printf("\ninvalid position\n");
                }
                break;

            case 3:
                //take index
                printf("\ninter value:\t");
                scanf("%d", &in_value);
                int exits_in_array = 0;
                for(int i =0; i<arr_size; i++){
                    if(in_value == arr[i]){
                        //printf("\n%d is in index %d\n", in_value, i);
                        exits_in_array = 1;
                    }
                }
                if(exits_in_array){
                    printf("\n%d exist in array", in_value);
                }else{
                    printf("\n%d dosen't exist in array", in_value);
                }
                break;
            case 4:
                printf("\ninter index:\t");
                scanf("%d", &in_index);
                if((in_index-1)>=0 && (in_index-1) < arr_size){
                    //ask for new value
                    printf("\nenter value:\t");
                    scanf("%d", &in_value);
                    arr[in_index-1]= in_value;


                    for(int i = 0; i< arr_size; i++){
                        printf("%d\t", arr[i]);
                    }
                }else{
                    printf("\ninvalid position\n");
                }
                break;
            case 0:
                printf("\nexiting...\n");
                break; 
            default:
            printf("you have chose invalid option\n");
            break;
        }
    }

}