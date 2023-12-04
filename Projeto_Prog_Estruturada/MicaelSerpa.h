//Potência Média dos equipamentos:
//Geladeira Duplex 250W
//Ar Condicionado 7.500 BTU - 1000W
//TV - 200W

void registroDispositivos(char dispositivos[100][100], int num_Strings);

void configs(void);

float registro(void);

float calculo_consumo_diario(float potencia, float tempo);

float calculo_consumo_mensal(float consumo_diario);

float calculo_custo_mensal(float consumo_mensal);

void registroEnergia(float * potencia, float * horas, char strings[100][100], int tam);
