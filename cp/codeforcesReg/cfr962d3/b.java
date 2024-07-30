import java.io.*;
import java.util.*;

public class b {
    // Typedefs
    static final long MOD = 1_000_000_007;
    static final int INF = Integer.MAX_VALUE;
    static final long LINF = Long.MAX_VALUE;
    
    // Fast I/O
    static class FastIO {
        BufferedReader br;
        StringTokenizer st;
        PrintWriter out;
        
        public FastIO() {
            br = new BufferedReader(new InputStreamReader(System.in));
            out = new PrintWriter(System.out);
        }
        
        String next() {
            while (st == null || !st.hasMoreTokens()) {
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
        
        void print(Object o) {
            out.print(o);
        }
        
        void println(Object o) {
            out.println(o);
        }
        
        void close() {
            out.close();
        }
    }
    
    // Utility methods
    static <T> void debug(T x) {
        System.err.println(x);
    }
    
    static class Solution {
        void cyb3rnaut(FastIO io) {
            int n = io.nextInt();
            int k = io.nextInt();

            // Initialize matrix 'mat' as 2D arrays
            int[][] mat = new int[n][n];
            int numBlocks = (n + k - 1) / k; // Calculate the number of blocks in each dimension
            int[][] ans = new int[numBlocks][numBlocks];

            // Read input into the matrix
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    mat[i][j] = io.nextInt();
                }
            }

            // Compute the result matrix
            for (int i = 0; i < n; i += k) {
                for (int j = 0; j < n; j += k) {
                    int blockRow = i / k;
                    int blockCol = j / k;
                    ans[blockRow][blockCol] = mat[i][j];
                }
            }

            // Output the result matrix
            for (int[] row : ans) {
                for (int value : row) {
                    io.print(value + " ");
                }
                io.println(""); // Print an empty line
            }
        }
    }
    
    public static void solve(FastIO io) {
        Solution s = new Solution();
        int t = io.nextInt();
        while (t-- > 0) {
            s.cyb3rnaut(io);
        }
    }
    
    public static void main(String[] args) {
        FastIO io = new FastIO();
        solve(io);
        io.close();
    }
}
