import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main
{
  public static void main (String[]args)
  {
	Scanner in = new Scanner (System.in);
	  ArrayList < Integer > arr = new ArrayList <> ();

	for (int i = 0; i < 9; i++)
	  {
		arr.add (in.nextInt ());
	  }

	Collections.sort (arr);
	int sum = 0;
	for (int i = 0; i < 9; i++)
	  sum += arr.get (i);

	for (int i = 0; i < 8; i++)
	  {
		for (int j = i + 1; j < 9; j++)
		  {

			if (sum - arr.get (i) - arr.get (j) == 100)
			  {
				for (int k = 0; k < 9; k++)
				  {
					if (k != i && k != j)
					  {
						System.out.println (arr.get (k));
					  }
				  }
				  return;
			  }
		  }
	  }
  }
}
