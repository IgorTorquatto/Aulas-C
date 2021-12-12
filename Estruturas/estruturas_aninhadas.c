#include <stdio.h>

struct dma{
    int dia;
    int mes;
    int ano;
};

struct horas{
    int hora;
    int minuto;
    int segundo;
};

struct data_e_hora
{
    struct dma data;
    struct horas horario;
};

int main(){
    struct data_e_hora evento;
    evento.data.dia=5;
    evento.data.mes=6;
    evento.data.ano=2019;
    evento.horario.hora=13;
    evento.horario.minuto=50;
    evento.horario.segundo=13;

    printf("Dia : \n",evento.data.dia);
    printf("Mes : \n",evento.data.mes);
    printf("Hora : \n",evento.horario.hora);

    return 0;
}
