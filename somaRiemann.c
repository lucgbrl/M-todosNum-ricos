double somaRiemann (double a, double b, int n) //Esta função foi declarada como double por haver necessidade de recuperar a soma com precisão dupla
{
	double delta = (b-a), x=n;
	double soma = 0; //Soma de Riemann será armazenada nesta variável, é importante inicializá-la como zero pois evitamos o erro de indexação ou ponteiro selvagem
	
	int i;
	for(i = 0; i< n; i++) //O laço se repetirá para o mesmo número de subintervalos
	{ 
		soma += f(x) * delta; // esta variável será uma acumuladora, adicionando o valor da área de cada retângulo a cada iteração
		x = x + delta;
	}
	return soma; //retorna a área aproximada

}// fim da função 
