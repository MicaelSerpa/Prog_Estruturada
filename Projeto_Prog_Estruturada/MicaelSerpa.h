
//Cálculo baseado no vídeo do canal Matemática Básica com Prof. Alberto
//https://www.youtube.com/watch?v=Nn719mXvtTk

//Potência Média dos equipamentos:
//Geladeira Duplex 250W
//Ar Condicionado 7.500 BTU - 1000W
//TV - 200W

void askStrUser(char dispositivos[5][100], int num_Strings);
void configs(void);

float registro(void);

float calculo_consumo_diario(float potencia, float tempo);

float calculo_consumo_mensal(float consumo_diario);

float calculo_custo_mensal(float consumo_mensal);

void initVetores(float * potencia, float * horas, char strings[5][100], int tam);
