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
          
            List<Integer> arra  = new ArrayList<>(n);
            List<Integer> arrb  = new ArrayList<>(n);

            for (int i = 0; i < n; i++) {
                int inp = io.nextInt();
                arra.add(inp);
            }
         
            for (int i = 0; i < n; i++) {
                int inp = io.nextInt();
                arrb.add(inp);
            }

            int l1 = 0, r1 = n - 1;  
            int l2 = 0, r2 = n - 1;

            while (true) {
                int left1 = arra.get(l1);
                int right1 = arra.get(r1);     
                int left2 = arra.get(l2);
                int right2 = arrb.get(r2);
                
                if (left1 != left2 && left1 != right2) {
                    arra.set(l1, 0);
                    arrb.set(l2, 0);
                    l1++;
                    l2++;
                } else if (right1 != left2 && right1 != right2) {
                    arra.set(r1, 0);
                    arrb.set(l2, 0);
                    r1--;
                    l2++;
                } else {
                    arra.set(l1, 0);
                    l1++;
                    if (left1 == left2) {
                        arrb.set(l2, 0);
                        l2++;
                    } else if (left1 == right2) {
                        arrb.set(r2, 0);
                        r2--;
                    }
                }

                if ((r1 - l1 + 1) <= 2 || (r2 - l2 + 1) <= 2) {
                    break;
                }
            }

            Collections.sort(arra);  
            Collections.sort(arrb);

            if (arra.get(0) != arrb.get(0) || arra.get(1) != arrb.get(1)) {
                io.println("Alice");
            } else {
                io.println("Bob");  
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
