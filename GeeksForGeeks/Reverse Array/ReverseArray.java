import java.io.*;
public class ReverseArray{
    public static void reverseArray(int arr[],int start,int end){
        int temp;
        //Stopping Condition for function
        if(start >= end){
            return;
        }
        //Reverse Logic
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //Recursive Call Of Function Reverse
        reverseArray(arr,start+1,end-1);
    }
    public static void print(int arr[],int size){
        int i;
        for(i = 0; i<size;i++){
            System.out.println("array 's "+i+"'s Element - "+arr[i]);
        }
    }
    public static void main(String[] args){
        int array[] = {1,2,3,4,5,6};
        print(array,6);
        System.out.println("===================");
        reverseArray(array,0,5);
        print(array,6);
    }
}