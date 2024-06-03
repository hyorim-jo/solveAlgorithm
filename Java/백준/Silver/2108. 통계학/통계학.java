import java.util.Scanner;
import java.util.Arrays;

public class Main
{
  public static void main (String[]args)
  {
	Scanner in = new Scanner (System.in);

	int n = in.nextInt ();

	int[] num = new int[n];
	int[] freq = new int[n];

	for (int i = 0; i < n; i++)
	    num[i] = in.nextInt ();

	Arrays.sort (num);
	
	int center = num[n / 2];
	int range = num[n-1] - num[0];
	
	//최빈값
	int mod = num[0];
	int count = 0;
	double sum = 0;

	for (int i = 0; i < n; i++)
	  {
		if (num[i] == mod)
		  freq[count]++;
		else
		  {
			count += freq[count];
			mod = num[i];
			freq[count]++;
		  }
		sum += num[i];
	  }

	int max = 0;
	mod = num[0];
    boolean uniqueMode = true;
	
	for (int i = 0; i < n; i++)
	  {
		if (max < freq[i])
		{
		    max = freq[i];
		    mod = num[i];
            uniqueMode = true;
		}
		else if (max == freq[i] && uniqueMode)
		{
		    mod = num[i];
		    uniqueMode = false;
		}
	  }
	//최빈값
	
	double avg = sum / n;
    avg = Math.round(avg);
	
	System.out.println((int)avg);
	System.out.println(center);
	System.out.println(mod);
	System.out.println(range);
  }
}