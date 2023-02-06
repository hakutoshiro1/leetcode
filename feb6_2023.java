/**
 * 6feb2023
 */
public class feb6_2023 {
    class Solution {
    public int[] shuffle(int[] nums, int n) {
        
        int[] ans=new int[2*n];
        int j=n,k=0;
        for (int i = 0; i < 2*n; i++) {
            if((i&1)==0)
            {
                ans[i]=nums[k];
                k++;
            }
            else
            {
                ans[i]=nums[j];
                j++;
            }
        }
        return ans;
    }
}
    
}
