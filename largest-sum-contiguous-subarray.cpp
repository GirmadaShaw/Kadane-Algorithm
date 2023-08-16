/*
Given an array arr[] of size N.
The task is to find the sum of the contiguous subarray within a arr[] with the largest sum. 
Input:  {-2, -3, 4, -1, -2, 1, 5, -3}
Output:  7
*/
#include <iostream>

int main()
{
    //int arr[] =  {-2, -3, 4, -1, -2, 1, 5, -3} ;
    int arr[]  = {4 , -2, 6 , -10, 8 , 1 } ;
    int size = sizeof(arr)/sizeof(int) ;


    int max_sum = 0 , sum_till_now = 0 ;

    for( int i=0 ; i<size ; i++ )
    {
        sum_till_now += arr[i] ;
        if( sum_till_now < 0 )
        {
            sum_till_now = 0 ; 
            continue ;
        }
        else
            if (sum_till_now > max_sum )
                max_sum = sum_till_now ;

    }

    std::cout << "Maximum sum is: " << max_sum ; 

}

