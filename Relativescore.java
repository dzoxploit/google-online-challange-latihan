import java.io.*;
import java.util.*;
public class Relativescore {
    
    public int minSwap(int[] nums1, int[] nums2) {
        int prev_swap = 0;
        int prev_noswap = 0;
        int swap = 1;
        int noswap = 0;
        
        for (int i = 1; i < nums1.length; i++) {
            
            prev_swap = swap;
            prev_noswap = noswap;
            swap = -1;
            noswap = -1;
            if (nums1[i - 1] < nums1[i] && nums2[i - 1] < nums2[i]) {
                if (prev_noswap >= 0)
                    noswap = prev_noswap;
                if (prev_swap >= 0)
                    swap = prev_swap + 1;
            }
            if (nums2[i - 1] < nums1[i] && nums1[i - 1] < nums2[i]) {
                if (prev_swap >= 0)
                    noswap = noswap < 0 ? prev_swap : Math.min(noswap, prev_swap);
                if (prev_noswap >= 0)
                    swap = swap < 0 ? prev_noswap + 1 : Math.min(swap, prev_noswap + 1);
            }
        }
        
        if (swap < 0 && noswap < 0)
            return -1;
        if (swap < 0)
            return noswap;
        if (noswap < 0)
            return swap;
        return Math.min(swap, noswap);
        
    }
}