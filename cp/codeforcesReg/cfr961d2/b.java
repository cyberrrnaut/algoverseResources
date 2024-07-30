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
            // Read an integer
            int n = io.nextInt();
            
            // Read a string
            String str = io.next();
            
            // Read a character
            char ch = io.next().charAt(0);
            
            // Read a list of integers
            int listSize = io.nextInt();
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < listSize; i++) {
                list.add(io.nextInt());
            }
            
            // Output all inputs
            io.println("Integer: " + n);
            io.println("String: " + str);
            io.println("Character: " + ch);
            io.println("List: " + list);
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
