import java.io.*;
import java.util.*;

public class Maxbitwiseor
{
    private static int OR(int[] arr)
    {
        int mOR = 0;
        for (int i = 0; i < arr.length; ++i)
        {
            mOR |= arr[i];
        }
        return mOR;
    }
    
    private static int maxSubset(int[] arr, int i, int curOr, int curSize, int maxOr){
        if (i == arr.length){
            
            if(curOr == maxOr){
                return curSize;
            }
            else{
                return arr.length;
            }
        }
        //mencoba elemen sekarang di subset
        int take = maxSubset(arr, i + 1, curOr | arr[i], curSize + 1, maxOr);
        
        //skip the current element 
        int notTake = maxSubset(arr, i+1, curOr, curSize, maxOr);
        
        // Return minimum of take and notTake
        return Math.min(take, notTake);
    }
    
     // Driver Code
      public static void main(String[] args)
      {
        int[] data = {5, 1, 3, 4, 2};
         
        int maxOr = OR(data);
         
        // Function Call
        int maxSubsetSize = maxSubset(data, 0, 0, 0, maxOr);
        System.out.println(maxSubsetSize);
      }
}