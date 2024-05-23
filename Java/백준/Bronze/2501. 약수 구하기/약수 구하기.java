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

	  int n = Integer.parseInt (st.nextToken ());
	  int k = Integer.parseInt (st.nextToken ());

	  for (int i = 1, count = 0; i <= n; i++)
		{
		  if (n % i == 0)
			{
			  count++;
			  if (count == k)
				{
				  System.out.println (i);
				  return;
				}
			}
		}

	  System.out.println ("0");

	}
	catch (IOException e)
	{
	  e.printStackTrace ();
	}
  }
}
