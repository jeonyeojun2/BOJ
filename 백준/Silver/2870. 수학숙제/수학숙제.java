  import java.io.*;
  import java.util.*;

  public class Main {

    public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

      int T = Integer.parseInt(br.readLine().trim());
      List<String> nums = new ArrayList<>();

      for (int i = 0; i < T; i++) {
        String line = br.readLine();
        line = line.replaceAll("[^0-9]", " ");
        String[] parts = line.split("\\s+");
        for (String p : parts) {
          if (p.length() == 0) continue;

          String t = p.replaceFirst("^0+", "");
          if (t.length() == 0) t = "0";
          nums.add(t);
        }
      }

      Collections.sort(
          nums,
          new Comparator<String>() {
            @Override
            public int compare(String a, String b) {
              if (a.length() != b.length()) return Integer.compare(a.length(), b.length());
              return a.compareTo(b);
            }
          });

      StringBuilder sb = new StringBuilder();

      for (String s : nums) {
        sb.append(s).append('\n');
      }

      System.out.print(sb.toString());
    }
  }
