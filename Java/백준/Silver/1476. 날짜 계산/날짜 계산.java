import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main
{
  public static void main (String[]args)
  {
	BufferedReader bf =
	  new BufferedReader (new InputStreamReader (System.in));
	  try
	{
	  StringTokenizer st = new StringTokenizer (bf.readLine ());

	  int e = Integer.parseInt (st.nextToken ());
	  int s = Integer.parseInt (st.nextToken ());
	  int m = Integer.parseInt (st.nextToken ());
	  int[] arr = { 1, 1, 1 };

	  for (int i = 1;; i++)
		{
		  if (arr[0] == e && arr[1] == s && arr[2] == m)
			{
			  System.out.print (i);
			  break;
			}

		  if (++arr[0] == 16)
			arr[0] = 1;
		  if (++arr[1] == 29)
			arr[1] = 1;
		  if (++arr[2] == 20)
			arr[2] = 1;
		}
	}
	catch (IOException e)
	{
	  e.printStackTrace ();
	}
  }
}
