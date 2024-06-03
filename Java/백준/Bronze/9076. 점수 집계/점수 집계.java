import java.util.Scanner;
import java.util.Arrays;

public class Main
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		//정렬 후 1번 인덱스와 3번 인덱스 원소의 차가
		//4이상이면 KIN 출력
		//아니면 총점 출력
		
		int t = in.nextInt();
		int[] score = new int[5];
		
		for(int n = 0; n < t; n++)
		{
		    for(int i = 0; i<5;i++)
		        score[i] = in.nextInt();
		        
		    Arrays.sort(score);  
		    
		    if(score[3] - score[1] >= 4)
		        System.out.println("KIN");
		    else
		    {
		        int sum = 0;
		        for(int i = 1; i<4;i++)
		            sum += score[i];
		            
		        System.out.println(sum);
		    }
		}
	}
}
