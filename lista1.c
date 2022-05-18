#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*exercicio 1
int main(){

    int num = 0;
    scanf("%d", &num);
    printf("Voce digitou %d", num);

    return 0;
}
*/
/*exercicio 2
int main(){

    float num = 0;
    scanf("%f", &num);
    printf("Voce digitou %f", num);

    return 0;
}
*/
/*exercicio 3
int main(){

    int n1, n2, n3 = 0;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    printf("O valor da soma eh %d", n1 + n2 + n3);

    return 0;

}
*/
/*exercicio 4
int main(){

    float n, resultado = 0;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    resultado = (n * n);
    printf("O quadrado desse numero eh %f", resultado);

    return 0;

}
*/
/*exercicio 5
int main(){

    float n, resultado = 0;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    resultado = n / 5;
    printf("O quadrado desse numero eh %f", resultado);

    return 0;

}
*/
/*exercicio 6
int main(){

    float C, F = 0;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C*(9.0/5.0)+32.0;
    printf("A temperatura em Fahrenheit eh %f", F);

    return 0;
}
*/
/*exercicio 7
int main(){

    float C, F = 0;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &F);

    C = 5.0*(F- 32.0)/9.0;
    printf("A temperatura em Celsius eh %f", C);

    return 0;
}
*/
/*exercicio 8
int main(){

    float K, C = 0;

    printf("Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &K);

    C = K-273.15;
    printf("A temperatura em Celsius eh %f", C);

    return 0;

}
*/
/*exercicio 9
int main(){

    float K, C = 0;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;
    printf("A temperatura em Kelvin eh %f", K);

    return 0;

}
*/
/*exercicio 10
int main(){

    float K, M = 0;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &K);

    M = K/3.6;
    printf("Essa velocidade em m/s eh %f", M);

    return 0;

}
*/
/*exercicio 11
int main(){

    float K, M = 0;

    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &M);

    K = M*3.6;
    printf("Essa velocidade em k/h eh %f", K);

    return 0;

}
*/

/*exercicio 12
int main(){

    float K, M = 0;

    printf("Digite uma distancia em milhas: ");
    scanf("%f", &M);

    K = 1.61*M;
    printf("Essa distancia em quilometros eh %f", K);

    return 0;

}
*/

/*exercicio 13
int main(){

    float K, M = 0;

    printf("Digite uma distancia em quilometros: ");
    scanf("%f", &K);

    M = K/1.61;
    printf("Essa distancia em milhas eh %f", M);

    return 0;

}
*/

/*exercicio 14
int main(){

    float G, R, pi = 3.141592;

    printf("Digite um angulo em graus: ");
    scanf("%f", &G);

    R = G*pi/180;
    printf("Esse angulo em radianos eh %f", R);

    return 0;

}
*/

/*exercicio 15
int main(){

    float G, R, pi = 3.141592;

    printf("Digite um angulo em radianos: ");
    scanf("%f", &R);

    G = R*180/pi;
    printf("Esse angulo em graus eh %f", G);

    return 0;

}
*/

/*exercicio 16
int main(){

    float C, P;

    printf("Digite um valor de comprimento em polegadas: ");
    scanf("%f", &P);

    C = P*2.54;
    printf("Esse valor em centimetros eh %f", C);

    return 0;

}
*/

/*exercicio 17
int main(){

    float C, P;

    printf("Digite um valor de comprimento em centimetros: ");
    scanf("%f", &C);

    P = C/2.54;
    printf("Esse valor em polegadas eh %f", P);

    return 0;

}
*/

/*exercicio 18
int main(){

    float M, L;

    printf("Digite um valor de volume em metros cubicos: ");
    scanf("%f", &M);

    L = 1000*M;
    printf("Esse valor em litros eh %f", L);

    return 0;

}
*/

/*exercicio 19
int main(){

    float M, L;

    printf("Digite um valor de volume em litros: ");
    scanf("%f", &L);

    M = L /1000;
    printf("Esse valor em metros cubicos eh %f", M);

    return 0;

}
*/

/*exercicio 20
int main(){

    float K, L;

    printf("Digite um valor de massa em quilogramas: ");
    scanf("%f", &K);

    L = K/0.45;
    printf("Esse valor em libras eh %f", L);

    return 0;

}
*/

/*exercicio 21
int main(){

    float K, L;

    printf("Digite um valor de massa em libras : ");
    scanf("%f", &L);

    K = L*0.45;
    printf("Esse valor em quilograma eh %f", K);

    return 0;

}
*/

/*exercicio 22
int main(){

    float M, J;

    printf("Digite um valor de comprimento em jardas: ");
    scanf("%f", &J);

    M = 0.91*J;
    printf("Esse valor em metros eh %f", M);

    return 0;

}
*/

/*exercicio 23
int main(){

    float M, J;

    printf("Digite um valor de comprimento em metros: ");
    scanf("%f", &M);

    J = M/0.91;
    printf("Esse valor em jardas eh %f", J);

    return 0;

}
*/

/*exercicio 24
int main(){

    float M, A;

    printf("Digite um valor de area em metros quadrados m2: ");
    scanf("%f", &M);

    A = M*0.000247;
    printf("Esse valor em acres eh %f", A);

    return 0;

}
*/

/*exercicio 25
int main(){

    float M, A;

    printf("Digite um valor de area em acres: ");
    scanf("%f", &A);

    M = A*4048.58;
    printf("Esse valor em metros quadrados m2 eh %f", M);

    return 0;

}
*/

/*exercicio 26
int main(){

    float M, H;

    printf("Digite um valor de area em metros quadrados m2: ");
    scanf("%f", &M);

    H = M*0.0001;
    printf("Esse valor em hectares eh %f", H);

    return 0;

}
*/

/*exercicio 27
int main(){

    float M, H;

    printf("Digite um valor de area em hectares: ");
    scanf("%f", &H);

    M = H*10000;
    printf("Esse valor em metros quadrados m2 eh %f", M);

    return 0;

}
*/

/*exercicio 28
int main(){

    float n1, n2, n3, s;

    printf("Digite um primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite um segundo valor: ");
    scanf("%f", &n2);
    printf("Digite um terceiro valor: ");
    scanf("%f", &n3);

    s = (n1*n1) + (n2*n2) + (n3*n3);
    printf("A soma dos quadrados dos tres valores lidos eh %f", s);

    return 0;

}
*/

/*exercicio 29
int main(){

    float n1, n2, n3, n4, m;

    printf("Digite uma primeira nota: ");
    scanf("%f", &n1);
    printf("Digite uma segunda nota: ");
    scanf("%f", &n2);
    printf("Digite uma terceira nota: ");
    scanf("%f", &n3);
    printf("Digite uma quarta nota: ");
    scanf("%f", &n4);

    m = (n1+n2+n3+n4)/4;
    printf("A media aritmetica eh %f", m);

    return 0;

}
*/

/*exercicio 30
int main(){

    float r, c, d;

    printf("Digite um valor em real: ");
    scanf("%f", &r);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &c);

    d = r/c;
    printf("O valor em dolar eh %f", d);

    return 0;

}
*/

/*exercicio 31
int main(){

    int n, a , s;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    a = n - 1;
    s = n + 1;
    printf("O numero antecessor e sucessor a esse eh %d e %d", a, s);

    return 0;

}
*/

/*exercicio 32
int main(){

    int n, s;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    s = (((n*3) + 1) + ((n*2) - 1));
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh %d", s);

    return 0;

}
*/

/*exercicio 33
int main(){

    float l, a;

    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%f", &l);

    a = l*l;
    printf("A area do quadrado eh %f", a);

    return 0;

}
*/

/*exercicio 34
int main(){

    float raio, pi = 3.141592, a;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raio);

    a = pi*(raio*raio);
    printf("A area do circulo eh %f", a);

    return 0;

}
*/

/*exercicio 35
int main(){

    float h, a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    h = sqrt( (a*a) + (b*b) );
    printf("A area do circulo eh %f", h);

    return 0;

}
*/

/*exercicio 36
int main(){

    float v, r, h, pi = 3.141592;

    printf("Digite o valor da altura de um cilindro circular: ");
    scanf("%f", &h);
    printf("Digite o valor do raio de um cilindro circular: ");
    scanf("%f", &r);

    v = pi * r * r * h;
    printf("O volume do cilindro eh %f", v);

    return 0;

}
*/

/*exercicio 37
int main(){

    float p, v;

    printf("Digite o valor de um produto: ");
    scanf("%f", &p);

    v = p*0.88;
    printf("O valor final com desconto eh %f", v);

    return 0;

}
*/

/*exercicio 38
int main(){

    float s, f;

    printf("Digite o valor do salario de um funcionario: ");
    scanf("%f", &s);

    f = s*1.25;
    printf("O valor final eh %.2f", f);

    return 0;

}
*/

/*exercicio 39
int main(){

    float q, n1, n2, n3;

    q = 780000;
    n1 = q * 0.46;
    n2 = q * 0.32;
    n3 = q - (n1 + n2);
    printf("O valor que cada um ira ganhar dos 780000 eh %.2f %.2f %.2f", n1, n2, n3);

    return 0;

}
*/

/*exercicio 40
int main(){

    float d, v = 30, f;

    printf("Solicite o numero de dias trabalhados pelo encanador: ");
    scanf("%f", &d);

    f = d * v * 0.92;

    printf("O valor final que devera ser pago eh %.2f", f);

    return 0;

}
*/

/*exercicio 41
int main(){

    float h, v, g;

    printf("Solicite o numero de horas trabalhadas trabalhadas no mes: ");
    scanf("%f", &h);
    printf("Digite o valor das horas trabalhadas em reais: ");
    scanf("%f", &v);

    g = h * v * 1.10;

    printf("O valor final que devera ser pago eh %.2f", g);

    return 0;

}
*/

/*exercicio 42
int main(){

    float sb, gratificacao=1.05, imposto=0.93, sr;

    printf("Digite o valor do salario base do funcionario: ");
    scanf("%f", &sb);

    sr = sb + (sb * gratificacao) - (sb * imposto) ;

    printf("O salario a receber eh %.2f", sr);

    return 0;

}
*/

/*exercicio 43
int main(){

    float valort, valord, comav, compa;

    printf("Digite o valor total: ");
    scanf("%f", &valort);

    valord = valort * 0.9;
    printf("O valor total com 10 por cento de desconto: %.2f \n", valord);

    printf("O valor de cada parcela em 3x sem juros: %.2f \n", valort/3);

    comav = valord * 0.05;
    printf("A comissao do vendedor, no caso da venda ser a vista: %.2f \n", comav);

    compa = valort * 0.05;
    printf("A comissao do vendedor, no caso da venda ser parcelada: %.2f \n", compa);

    return 0;

}
*/

/*exercicio 44
int main(){

    float h, deg, qua;

    printf("Digite a altura do degrau de uma escada: ");
    scanf("%f", &deg);

    printf("Digite a altura que o usuario deseja alcançar subindo a escada: ");
    scanf("%f", &h);

    qua = h / deg;
    printf("A quantidade de degraus que o usuario deverá subir: %f", qua);
    return 0;

}
*/

/*exercicio 45
int main(void) {
    char letra;
    printf("Digite uma letra em maiusculo: ");
    scanf("%c", &letra);

    letra = tolower (letra);

    printf("Essa letra em minusculo: %c " , letra);

    return 0;
}
*/

/*exercicio 46
int main() {
   int n, n1, n2, n3;
   printf("Digite um numero inteiro de 3 digitos positivos: ");
   scanf("%d", &n);
   if (n > 10) {
     n1 = n%10;
	   n = n/10;
	   n2 = n%10;
	   n = n/10;
	   n3=n%10;
	   n=n/10;
   }
   printf("O numero com os digitos invertidos eh %d%d%d\n", n1, n2, n3);
   return 0;
}
*/

/*exercicio 47
int main(){
    int n1, n2, n3, n4;

    printf("Digite o numero: ");
    scanf("%1d%1d%1d%1d%*c", &n1, &n2, &n3, &n4);

    printf("%d\n%d\n%d\n%d\n", n1, n2, n3, n4);

    return 0;

}
*/

/*exercicio 48
int main() {
   int h, m, s;

   printf("Digite os segundos: ");
   scanf("%d" , &s);

   h = s / 3600;
   m = (s -(h*3600))/60;
   s = s - (h*3600)-(m*60);

   printf("%d: %d: %d: ", h, m, s);

   return 0;
}
*/

/*exercicio 49
int main() {
   int h= 15, m =30, s=10;

   printf("A hora inicial eh: %d:%d:%d", h, m, s);

   int duracao = 10800;

   printf("\nA hora de duracao da experiencia em segundos eh: %d", duracao);

   int horas, minutos, segundos;

   horas = duracao / 3600;
   minutos = (duracao-(horas*3600))/60;
   segundos = duracao - (horas*3600)-(minutos*60);

   int hf, mf, sf;

   hf= h + horas;
   mf= m + minutos;
   sf= s + segundos;

   printf("\nA experiencia terminara as: %d:%d:%d", hf, mf, sf );

   return 0;
}
*/

/*exercicio 50
int main() {
    int i, aa, an;

    printf("Digite sua idade: ");
    scanf("%d", &i);

    printf("Insira em que ano estamos: ");
    scanf("%d", &aa);

    an = aa - i;

    printf("Voce nasceu em: %d", an);

    return 0;
}
*/

/*exercicio 51
int main() {
    float x = 0, y = 0, R = 0;

    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);

    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);

    R=sqrt(pow(x,2)+pow(y,2));

    printf("A distancia e: %f \n", R);

    fflush(stdin);
    getchar();
    return 0;
}
*/

/*exercicio 52
int main() {

    float amg1, amg2, amg3, vlrarrecadado;

    printf("Valor aposta amigo 1: ");
    scanf("%f", &amg1);

    printf("Valor aposta amigo 2: ");
    scanf("%f", &amg2);

    printf("Valor aposta amigo 3: ");
    scanf("%f", &amg3);

    vlrarrecadado = amg1 + amg2 + amg3;

    printf("Valor arrecadado para aposta: %.2f" , vlrarrecadado);

    float premio = 980.000;

    printf("O valor do premio eh: %.3f" , premio);
    float pct1, pct2, pct3;

    pct1 = (amg1 * 100)/vlrarrecadado;
    pct2 = (amg2 * 100)/vlrarrecadado;
    pct3 = (amg3 * 100)/vlrarrecadado;
    printf("Amigo 1 apostou: %.2f porcento do total arrecadado.", pct1);
    printf("Amigo 2 apostou: %.2f porcento do total arrecadado.", pct2);
    printf("Amigo 3 apostou: %.2f porcento do total arrecadado.", pct3);
    printf("Amigo 1 recebera: R$%.2f.", premio * pct1/100);
    printf("Amigo 2 recebera: R$%.2f.", premio * pct2/100);
    printf("Amigo 3 recebera: R$%.2f.", premio * pct3/100);
    return 0;
}
*/
/*exercicio 53
int main() {
    float largura, comprimento, preco, total;

    printf("Qual a largura do terreno: ");
    scanf("%f", &largura);

    printf("Qual o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Qual o preco do terreno: ");
    scanf("%f", &preco);

    total = (comprimento * largura * preco);
    printf("Voce gastara para cercar o terreno: R$%.2f", total);

    return 0;
}
*/
