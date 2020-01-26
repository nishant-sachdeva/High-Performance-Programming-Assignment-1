int main()
{
	Matrix a,b;

	for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < 20; ++j)
        {
            if(j % 2 == 0){
                a.matrix[i][j] = 2;
                b.matrix[i][j] = 2;
            }

            else{
                a.matrix[i][j] = 1;
                b.matrix[i][j] = 1;
            }
        }
    }

	Matrix *res = matrix_multiply(&a,&b,20,20,20);

	for(int i =  0;i < 1;i++){
		printf("%d\n",res->matrix[i][0]);
	}
	return 0;
}