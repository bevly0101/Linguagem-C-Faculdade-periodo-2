TANQUE
    printf("\n\n========MEDIDAS DO TANQUE===========\n\n");
    printf("ALTURA DO TANQUE: "); scanf("%f", &m_altura);
    printf("LARGURA DO TANQUE: "); scanf("%f", &m_largura);
    printf("PROFUDIDADE DO TANQUE: "); scanf("%f", &m_prof);

    // calculo do volume
    vol_tanque = m_altura * m_largura * m_prof;

    //calculo dos tanque com combustivel
    total_gaso = v_gaso * vol_tanque;
    total_alcool = v_alcool * vol_tanque;

    //calculo 80% gasolina e 20% alcool
    tudo_misturadinho = (total_gaso*0.80) + (total_alcool*0.20);


    //saida
    printf("\n\n===========VALOR TOTAL DA GASOLINA=============");
    printf("\nVALOR DA GASOLINA : R$%.2f p/Litro \nVALOR DO ALCOOL: R$ %.2f p/Litro\n", v_gaso, v_alcool);
    printf("\n---------------------------------\n\n");
    printf("O SEU TANQUE TEM %.2f METROS CUBICOS\n\n",vol_tanque);
    printf("TANQUE COM GASOLINA = R$%.2f \nTANQUE COM ALCOOL = R$%.2f",total_gaso, total_alcool);
    printf("\n\n80%% de gasolina e 20%% de alcool fica R$%.2f", tudo_misturadinho);



    return 0;
}
