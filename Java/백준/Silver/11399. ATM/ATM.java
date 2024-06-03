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
		    
		Arrays.sort(time);//정렬
		int sum = 0;
		int allSum = 0;
		
		for(int i = 0; i < n; i++)
		{//걸리는 시간을 합한다
		//각각의 사람이 걸리는 시간과
		//총 걸리는 시간을 더한다
		    sum += time[i];
            allSum += sum;
		}
		
		System.out.println(allSum);
	}
}