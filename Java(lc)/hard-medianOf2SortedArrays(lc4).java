import java.util.Arrays;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;
        double[] f = new double[n+m];
        int k=0;
        for(int i=0;i<n;i++)
        {
            f[k] = nums1[i];
            k++;
        }
        for(int i=0;i<m;i++)
        {
            f[k] = nums2[i];
            k++;
        }
        Arrays.sort(f,0,n+m);
        double sum=0;
        if((n+m)%2==0)
        {
            sum = (f[(n+m)/2]+f[((n+m)/2)-1])/2;
        }
        else
        {
            sum = (f[(n+m)/2]);
        }
        return sum;
    }
}