import java.util.Scanner;
import java.util.Arrays;

public class Main
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		//걸리는 시간을 배열에 저장한다
		//배열을 오름차순으로 정렬한다
		//각 인덱스까지의 합을 반복해서 sum에 더한다
		int n = in.nextInt();
		
		int[] time = new int[n];
		
		for(int i = 0; i < n; i++)
		    time[i] = in.nextInt();
		    
		Arrays.sort(time);
		int sum = 0;
		
		for(int i = 0; i < n; i++)
		{
		    for(int j = 0; j <= i; j++)
		        sum += time[j];
		}
		
		System.out.println(sum);
	}
}