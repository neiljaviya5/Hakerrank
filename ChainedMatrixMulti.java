import java.util.*;
class ChainedMatrixMulti
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the array size");
		int n = sc.nextInt();
		int p[] = new int[n];
		System.out.println("Enter array elements");
		for(int i = 0; i < n; i++)
		{
			p[i]=sc.nextInt();
		}
		System.out.println("Minimum number of multiplications is"+chainedMatrixMultiplication(p,n));
	}
	
	static int chainedMatrixMultiplication(int p[], int n)
	{
		int m[][] = new int[n][n];
		int q,j,k;
		for (int i = 1; i < n; i++)
		{
			m[i][i] = 0;
		}
		for (int l = 2; l < n; l++)
		{
			for (int i = 1; i < n - l + 1; i++)
			{
				j = i + l - 1;
				m[i][j] = Integer.MAX_VALUE;
				for (k = i; k <= j - 1; k++)
				{	
					q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
					if (q < m[i][j])
					{
						m[i][j] = q;
					}
				}
				System.out.println(m[i][j]);
			}
		}
		return m[1][n - 1];
	}
}