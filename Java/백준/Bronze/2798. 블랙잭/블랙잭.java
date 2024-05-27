import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main
{
  public static void main (String[]args)
  {
	Scanner in = new Scanner (System.in);

	int n = in.nextInt ();
	int m = in.nextInt ();
	  ArrayList < Integer > arr = new ArrayList <> ();

	for (int i = 0; i < n; i++)
	  {
		arr.add (in.nextInt ());
	  }

	Collections.sort (arr);
	int max = 0;

	for (int i = 0; i < n - 2; i++)
	  {
		for (int j = i + 1; j < n - 1; j++)
		  {
			for (int k = j + 1; k < n; k++)
			  {
				int sum = arr.get (i) + arr.get (j) + arr.get (k);
				if (sum <= m && sum > max)
				  {
					max = sum;
				  }
			  }
		  }
	  }

	System.out.print (max);
  }
}
