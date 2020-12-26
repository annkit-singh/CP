import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.BigInteger;
import java.nio.charset.StandardCharsets;

class GFG {

    public static void main(String[] args) {
        UltraFast uf = new UltraFast();
        int t=uf.nextInt();
        while(t--!=0){
            int n=uf.nextInt();
            int ar[]=uf.readintarray(n);
           int low=0;int mid=0;
           int high=n-1;
          while(mid<=high){
                if(ar[mid]==0){
                    int temp=ar[mid];
                    ar[mid]=ar[low];
                    ar[low]=temp;
                    low++;
                    mid++;
                }
                else if(ar[mid]==1){
                    mid++;
                }
                else {
                    int temp=ar[mid];
                    ar[mid]=ar[high];
                    ar[high]=temp;
                    high--;   
                         }
                    }

                  for(int a:ar){
                      System.out.print(a+" ");
                  }
                  System.out.println();
            
        }

        
    }

    static class UltraFast

    {
        BufferedReader br;
        StringTokenizer st;

        public UltraFast() {
            BufferedInputStream bis = new BufferedInputStream(System.in);
            br = new BufferedReader(new InputStreamReader(bis, StandardCharsets.UTF_8));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }

        int[] readintarray(int n) {
            int res[] = new int[n];
            for (int i = 0; i < n; i++)
                res[i] = nextInt();
            return res;
        }

        Integer[] readIntegerArray(int n) {
            Integer res[] = new Integer[n];
            for (int i = 0; i < n; i++)
                res[i] = nextInt();
            return res;
        }

        long[] readlongarray(int n) {
            long res[] = new long[n];
            for (int i = 0; i < n; i++)
                res[i] = nextLong();
            return res;
        }

        Long[] readLongArray(int n) {
            Long res[] = new Long[n];
            for (int i = 0; i < n; i++)
                res[i] = nextLong();
            return res;
        }
    }

}