void matrix_multiply( int **A , int **B , int **C, int p , int q, int r)
{

	for (int i = 0; i < p; ++i)
	{
		for (int k = 0; k < r; ++k)
		{
			for (int j= 0; j < q; ++j)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	return ;

}