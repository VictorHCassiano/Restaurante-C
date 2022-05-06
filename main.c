#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct donos
{
  int id;char nome[60];char email[60];char cpf[25];char endereco[60];long telefone;
};
struct funcionario 
{
  int id;long telefone;char nome[60];char email[60];char cpf[20];char endereco[60];
};
struct fornecedor
{
  int id;long telefone;char produtos[60];char nome[60];char endereco[60];char email[60];char cnpj[20];
};
struct cliente
{
  int id;long telefone;char nome[60];char email[60];char cpf[20];char endereco[60];
};
static char pAperitivo[1][100], pEntrada[1][100], pPrincipal[1][100], pSobremesa[1][100], pBebidas[1][100];
static double somaConta;static int ch;static struct cliente c;static char enter[50] ="Pressione ENTER para voltar ao menu principal.";static char linha[160]="===============================================================================================================================================================";
void Aperitivos()
{
  int ap;
  system("clear");
  printf("                     =============================\n");
  printf("                              Aperitivos\n");
  printf("                     =============================\n\n");
  printf("1. Pastelzinho de queijo de cabra-------------------------R$15,00\n  (Cubos de queijo de cabra temperado com ervas e mel envolto em massa folhada)\n\n2. Espetinhos de ameixa e presunto cru--------------------R$16,50\n  (Ameixas enroladas em tira de presunto cru no palito)\n\n3. Tapenade-----------------------------------------------R$17,40\n  (Pasta rústica feita com azeitonas)\n\n4. Canapés de tortilla francesa---------------------------R$13,60\n  (Massa de tortilla rechada com salame e uma mistura de queijo philadelphia, penino e vinagre)\n\n5. Canapés de mini croissant de salmão--------------------R$15,30\n(Croissant recheado com salmão e uma mistura de queijo philadelphia, penino e vinagre)\n\n6.Voltar ao Cardápio\n\n");
  printf("=============================================================================================\n");
  printf("\n\n                     Informe o número do seu pedido: ");
  scanf("%d",&ap);
    if(ap==1){somaConta=somaConta+15.00;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pAperitivo[0],"Pastelzinho de queijo de cabra-------------------------R$15,00");}
    if(ap==2){somaConta=somaConta+16.50;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pAperitivo[0],"Espetinhos de ameixa e presunto cru--------------------R$16,50");}
    if(ap==3){somaConta=somaConta+17.40;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pAperitivo[0],"Tapenade-----------------------------------------------R$17,40");}
    if(ap==4){somaConta=somaConta+13.60;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pAperitivo[0],"Canapés de tortilla francesa---------------------------R$13,60");}
    if(ap==5){somaConta=somaConta+15.30;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pAperitivo[0],"Canapés de mini croissant de salmão--------------------R$15,30");}
    if(ap == 6){printf("Saindo.....");}
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("\n\n                     Pressione ENTER para voltar ao cardápio.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void Entradas()
{
  int ent;
  system("clear");
  printf("                     =============================\n");
  printf("                                Entradas\n");
  printf("                     =============================\n\n");
  printf("1. Steake Tartare---------------------------------------R$34,00\n(Pedaços de carne crua temperada com azeite e mostarda)\n\n2. Escargot---------------------------------------------R$33,40\n(Caracol cozido servido na própria concha acompanhado de molho à base de manteiga e alho)\n\n3. Croissant--------------------------------------------R$22,50\n(Croissant acompanhado de manteiga e patê de atum)\n\n4. Soupe a l’oignon-------------------------------------R$30,70\n(Sopa de cebola gratinada, preparada com manteiga, caldo de carne, cebolas e queijo)\n\n5.Voltar ao Cardápio\n\n");
  printf("=============================================================================================\n");
  printf("\n\n                     Informe o número do seu pedido: ");
  scanf("%d",&ent);
  if(ent==1){somaConta=somaConta+34.00;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pEntrada[0],"Steake Tartare---------------------------------------R$34,00");}
  if(ent==2){somaConta=somaConta+33.40;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pEntrada[0],"Escargot---------------------------------------------R$33,40");}
  if(ent==3){somaConta=somaConta+22.50;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pEntrada[0],"Croissant--------------------------------------------R$22,50");}
  if(ent==4){somaConta=somaConta+30.70;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pEntrada[0],"Soupe a l’oignon-------------------------------------R$30,70");}
  if(ent==6){printf("Voltando.....");}
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("\n\n                     Pressione ENTER para voltar ao cardápio.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void Principais()
{ int prin;
  system("clear");
  printf("                     =============================\n");
  printf("                            Pratos Principais\n");
  printf("                     =============================\n\n");
  printf("1. Boeuf bourguignon----------------------------------------R$55,40\n(Picadinho de carne ao molho de vinho tinto.\n Servida com cenoura, cebola, bacon, alho-poró, salsão, tomilho, alecrim e cogumelo paris)\n\n2. Confit de pato-------------------------------------------R$57,30\n(Coxas e sobrecoxas de pato conservadas na própria gordura, servido com batatas sautées, saladas ou risoto)\n\n3. Ratatouille----------------------------------------------R$52,80\n(Beringela, tomate, abobrinha e pimentão cortados em finas fatias assadas)\n\n4. Cassoulet------------------------------------------------R$59,20\n(Cozido de feijão branco, carne de porco, legumes e verduras)\n\n5. Le pot-au-feu--------------------------------------------R$70,00\n(Pedaço de carne com longo cozimento, medula óssea de uma cauda de carne, legumes e especiarias de todos os tipos)\n\n6. La Bouillabaisse-----------------------------------------R$68,40\n(Sopa de peixe, croutons de alho e batatas)\n\n7. Le gratin dauphinois-------------------------------------R$71,00\n(Batatas cortadas em fatias, assadas com alho e creme ou leite)\n\n8. Le coq au vin--------------------------------------------R$75,00\n(Galo cozinhado com legumes e vinho tinto, acompanhado por batatas cozidas no vapor)\n\n9.Voltar ao Cardápio\n\n");
  printf("=============================================================================================\n");
  printf("\n\n                     Informe o número do seu pedido: ");
  scanf("%d",&prin);
  if(prin==1){somaConta=somaConta+55.40;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Boeuf bourguignon----------------------------------------R$55,40");}
  if(prin==2){somaConta=somaConta+57.30;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Confit de pato-------------------------------------------R$57,30");}
  if(prin==3){somaConta=somaConta+52.80;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Ratatouille----------------------------------------------R$52,80");}
  if(prin==4){somaConta=somaConta+59.20;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Cassoulet------------------------------------------------R$59,20");}
  if(prin==5){somaConta=somaConta+70.00;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Le pot-au-feu--------------------------------------------R$70,00");}
  if(prin==6){somaConta=somaConta+68.40;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"La Bouillabaisse-----------------------------------------R$68,40");}
  if(prin==7){somaConta=somaConta+71.00;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Le gratin dauphinois-------------------------------------R$71,00");}
  if(prin==8){somaConta=somaConta+75.00;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pPrincipal[0],"Le coq au vin--------------------------------------------R$75,00");}
  if(prin==9){printf("Voltando.....");}
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("\n\n                     Pressione ENTER para voltar ao cardápio.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void Sobremesas()
{ int sobre;
  system("clear");
  printf("                     =============================\n");
  printf("                               Sobremesas\n");
  printf("                     =============================\n\n");
  printf("1. Macarron --------------------------------------R$20,00\n(biscoito redondo e colorido (úmido por fora e macio por dentro) recheado com diversas misturas)\n\n2. Mil folhas-------------------------------------R$22,00\n(Massa folhada recheada com creme de baunilha. Servida coberta com uma calda de chocolate)\n\n3. Crème Brûlée-----------------------------------R$25,00\n(Feito com creme de leite, ovos, açúcar e baunilha. O creme é servido com uma crosta de açúcar caramelizado)\n\n4. Profiteroles-----------------------------------R$24,50\n(Massa açucarada — chamada de choux — e recheada de acordo com sorvetes e caldas de chocolate)\n\n5. Petit Gâteau-----------------------------------R$23,00\n(Bolo de chocolate mal passado com o interior macio e cremoso, acompanhado de uma bola de sorvete de baunílha)\n\n6.Voltar ao Cardápio\n\n");
  printf("=============================================================================================\n");
  printf("\n\n                     Informe o número do seu pedido: ");
  scanf("%d",&sobre);
  if(sobre==1){somaConta=somaConta+20;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pSobremesa[0],"Macarron --------------------------------------R$20,00");}
  if(sobre==2){somaConta=somaConta+22;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pSobremesa[0],"Mil folhas-------------------------------------R$22,00");}
  if(sobre==3){somaConta=somaConta+25;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pSobremesa[0],"Crème Brûlée-----------------------------------R$25,00");}
  if(sobre==4){somaConta=somaConta+24.5;printf("\n\n                   Pedido Registrado com sucesso!!");strcpy(pSobremesa[0],"Profiteroles-----------------------------------R$24,50");}
  if(sobre==5){somaConta=somaConta+23;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pSobremesa[0],"Petit Gâteau-----------------------------------R$23,00");}
  if(sobre==6){printf("Voltando.....");}
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("\n\n                     Pressione ENTER para voltar ao cardápio.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void Bebidas()
{ int beb;
  system("clear");
  printf("               =============================\n");
  printf("                         Bebidas\n");
  printf("               =============================\n\n");
  printf("1. Sauvignon Blanc--------------------------R$38,40\n2. Pinot Gris-------------------------------R$40,00\n3. Chardonnay-------------------------------R$38,40\n4. Pinot Noir-------------------------------R$40,00\n5. Merlot-----------------------------------R$34,40\n6. Malbec-----------------------------------R$38,40\n7. Água mineral VOSS------------------------R$10,00\n8. Coca-Cola--------------------------------R$6,50\n9. Suco (Consultar garçom)------------------R$7,50\n\n10.Voltar ao Cardápio\n\n");
  printf("======================================================================\n");
  printf("\n\n                    Informe o número do seu pedido: ");
  scanf("%d",&beb);
  if(beb==1){somaConta=somaConta+38.40;printf("\n\n                  Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Sauvignon Blanc--------------------------R$38,40");}
  if(beb==2){somaConta=somaConta+40;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Pinot Gris-------------------------------R$40,00");}
  if(beb==3){somaConta=somaConta+38.40;printf("\n\n                  Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Chardonnay-------------------------------R$38,40");}
  if(beb==4){somaConta=somaConta+40;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Pinot Noir-------------------------------R$40,00");}
  if(beb==5){somaConta=somaConta+34.4;printf("\n\n                   Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Merlot-----------------------------------R$34,40");}
  if(beb==6){somaConta=somaConta+38.4;printf("\n\n                   Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Malbec-----------------------------------R$38,40");}
  if(beb==7){somaConta=somaConta+10;printf("\n\n                     Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Água mineral VOSS------------------------R$10,00");}
  if(beb==8){somaConta=somaConta+6.5;printf("\n\n                    Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Coca-Cola--------------------------------R$6,50");}
  if(beb==9){somaConta=somaConta+7.5;printf("\n\n                    Pedido Registrado com sucesso!!");strcpy(pBebidas[0],"Suco (Consultar garçom)------------------R$7,50");}
  if(beb==10){printf("Voltando.....");}
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("\n\n                    Pressione ENTER para voltar ao cardápio.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void pix()
{
  system("clear");
  printf("                                        Chave PIX é: (81)955555555\n");
  printf("              ♢────────────────────────────────────────────────────────────────────────┒\n");
  printf("              Assim que o pagamento for confirmado seu pedido começará a ser preparado.\n");
  printf("                                  Obrigado por escolher o LE FESTIN®\n");
  printf("              ┖───────────────────────────────────────────────────────────────────────♢\n");
  printf("\n\n                                      Atendimento encerrado.");
  exit(0);  
}
void cartao()
{
    system("clear");
    printf("         ♢─────────────────────────────────────────────────────────────────────────────────┒\n");
    printf("\n           Informe o NOME do titular do cartão: ");
    char name[20];char temp;
    scanf("%c",&temp);
    scanf("%[^\n]",name);
    printf("\n           Informe o NÚMERO do seu cartão: (apenas os números): ");
    float cartao;
    scanf("%f",&cartao);
    printf("\n           Informe o Código de segurança (Código de 3 digitos localizado atrás do cartão): ");
    int seg;
    scanf("%d",&seg);
    printf("\n           ┖─────────────────────────────────────────────────────────────────────────────────♢\n\n\n");
    printf("                 Assim que o pagamento for confirmado seu pedido começará a ser preparado.\n");
    printf("                                      Obrigado por escolher o LE FESTIN®");
    printf("\n\n                                          Atendimento encerrado.");
    exit(0);
}
void pagamento()
{
  int pgm;
    do
    {
      system("clear");
      printf("              ♢──────────────────────────────┒\n");
      printf("               Escolha a Forma de Pagamento: \n");
      printf("              =================================\n");
      printf("                 1 - ❖ PIX\n");
      printf("                 2 - 💳 Cartão de Crédito\n");
      printf("                 3 - Cancelar Pagamento\n");
      printf("              ┖───────────────────────────────♢\n");
      scanf("%d",&pgm);
      switch (pgm)
      {
        case 1: pix();break;
        case 2: cartao();break;
        case 3: break;
        default: printf("Opção Invalida!!");break;    
      }
    }while (pgm != 3);
}
void contatos(void)
{
  system("clear");
  printf("                                 ☎ Contatos\n");
  printf("              ♢─────────────────────────────────────────────┒\n");
  printf("               ☎ Fone: +55(81)55555555 \n");
  printf("               ✆ WhatsApp: +55(81)99999999 \n");
  printf("               ✉ Email: emaildorestalrante@provedor.com.br\n");
  printf("              ┖─────────────────────────────────────────────♢\n");
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("               Pressione ENTER para voltar ao menu principal.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void quemSomos()
{ 
  system("clear");
  printf("                         Quem Somos \n");
  printf("              ♢───────────────────────────────────┒\n");
  printf("              『Nosso restaurante em estilo \n");
  printf("               francês, traz à tona o filme \n");
  printf("               Ratatouille. Com o ambiente \n"); 
  printf("               climatizado, lâmpadas de tons \n");
  printf("               quentes e músicas de fundo \n");
  printf("               bem calmas, tornam o clima \n");
  printf("               bem aconchegante e\n");
  printf("               romântico. Nosso cardápio\n");
  printf("               com opções de pratos \n");
  printf("               principais bem sofisticados, \n");
  printf("               sobremesas, uma belíssima \n");
  printf("               carta de vinhos e diversas \n");
  printf("               outras bebidas, não irá \n");
  printf("               decepcioná-lo. Além de uma \n");
  printf("               equipe de garçons bem \n");
  printf("               requintados, que vão lhe \n");
  printf("               oferecer uma maravilhosa \n");
  printf("               recepção e atendimento desde \n");
  printf("               sua entrada até a saída.』\n\n");
  printf("               ┖──────────────────────────────────♢\n");
  printf("    Le Festin®, desde 2021 oferecendo o melhor para nossos clientes.\n\n");
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("            Pressione ENTER para voltar ao menu principal.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
void Donos(){
struct donos donos [5];
donos[0].id=17;
strcpy(donos[0].nome,"Giselle Goulart Nespoli");          
strcpy(donos[0].email,"giselle.nespoli@gmail.com.br");
strcpy(donos[0].cpf,"274.468.782-07");
strcpy(donos[0].endereco,"Rua das graças,Recife-PE");
donos[0].telefone= 81975884519;
  
donos[1].id=20;
strcpy(donos[1].nome,"Beatriz Barbosa");          
strcpy(donos[1].email,"beatriz.barbosa@hotmail.com.br");
strcpy(donos[1].cpf,"868.322.270-51");
strcpy(donos[1].endereco,"Avenida João Ferreira Jardim,Bairro novo-PE");
donos[1].telefone = 81987388781;

donos[2].id=12;
strcpy(donos[2].nome,"Katyene Barsosa Braga");          
strcpy(donos[2].email,"katyenePE@gmail.com.br");
strcpy(donos[2].cpf,"433.035.800-06");
strcpy(donos[2].endereco,"Rua dos Comunicadores,Camaragibe-PE");
donos[2].telefone = 81974235799;

donos[3].id=16;
strcpy(donos[3].nome,"Pietro Bochimpani Vitorino");          
strcpy(donos[3].email,"pietro.vitorino@hotmail.com.br");
strcpy(donos[3].cpf,"953.213.254-64");
strcpy(donos[3].endereco,"Rua Odom Bezerra de Queiroz,Paulista-PE");
donos[3].telefone= 81994474023;

donos[4].id=15;
strcpy(donos[4].nome,"Aparecida Brum Candido");          
strcpy(donos[4].email,"aparecida.candido@gmail.com.br");
strcpy(donos[4].cpf,"429.132.774-97");
strcpy(donos[4].endereco,"Rua Realeza,Camarigibe-PE");
donos[4].telefone = 81981102237;
int ordenar_d;
struct donos d;
do{
system("clear");
printf("               ===========================================\n");
printf("                       1- Mostrar lista Donos\n");
printf("                          2- Ordenar lista\n");
printf("                               3- Sair\n");
printf("               ===========================================\n");
scanf("%d",&ordenar_d);
switch(ordenar_d)
{
            case 1 :  system("clear"); 
                      printf("\n%100s\n",linha);
                       for(int i =0; i<5; i++){
                      printf("%-4d| %-30s | %-35s | %-15s | %-13ld | %-35s\n",donos[i].id,donos[i].nome,donos[i].email,donos[i].cpf,donos[i].telefone,donos[i].endereco);}
                      printf("\n%100s\n",linha);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("%90s",enter);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 2 : system("clear"); 
              for(int i = 0; i<5; i++)
               {
                for(int x = i; x<5; x++){ 
                if(donos[i].id > donos[x].id){
                struct donos d = donos[i];
                donos[i] = donos[x];
                donos[x] = d;
                  }
                }
              }
            printf("\n     ==============================================\n");
            printf("                     LISTA ORDENADA\n");
            printf("                          ✅✅     ");
            printf("\n     ==============================================\n");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("     ");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 3 : break;
            default: printf("Opção Invalida!!");break; 
}
}while(ordenar_d!= 3);
}
void Cliente(){
struct cliente cliente [10];
cliente[0].id=541;
strcpy(cliente[0].nome,"Antonieta Albenaz Diniz");
strcpy(cliente[0].email,"antonieta.diniz@geradornv.com.br");
strcpy(cliente[0].cpf,"360.660.614-10");
strcpy(cliente[0].endereco,"Rua Itape,Recife-PE");
cliente[0].telefone = 81979217829;

cliente[1].id=889;
strcpy(cliente[1].nome,"Mateus Navega Campelo");
strcpy(cliente[1].email,"mateus.campelo@gmail.com.br");
strcpy(cliente[1].cpf,"131.542.964-09");
strcpy(cliente[1].endereco,"5ª Travessa das Mangueiras,Paulist-PE");
cliente[1].telefone= 81976006863;

cliente[2].id=695;
strcpy(cliente[2].nome,"Marcus Mello Goulart");
strcpy(cliente[2].email,"marcus.goulart@gmail.com.br");
strcpy(cliente[2].cpf,"351.635.074-19");
strcpy(cliente[2].endereco,"Rua Radialista Flauberto Elias,Garanhus-PE");
cliente[2].telefone=81980385844;

cliente[3].id=932;
strcpy(cliente[3].nome,"Adriano de Padua Valladares");
strcpy(cliente[3].email,"adriano.valladares@geradornv.com.br");
strcpy(cliente[3].cpf,"785.417.184-09");
strcpy(cliente[3].endereco,"6ª Travessa Tio Roberto,Paulista-PE");
cliente[3].telefone=81996828428;

cliente[4].id=758;
strcpy(cliente[4].nome,"Nilza Claudino Teodoro");
strcpy(cliente[4].email,"nilza.teodoro@hotmail.com.br");
strcpy(cliente[4].cpf,"220.761.244-97");
strcpy(cliente[4].endereco,"Rua Estevão Cruz,Vitoria de Santo Antão-PE");
cliente[4].telefone=81995651926;

cliente[5].id=536;
strcpy(cliente[5].nome, "Bernardo Annunziato Fontes");
strcpy(cliente[5].email,"bernardo.fontes@geradornv.com.br");
strcpy(cliente[5].cpf,"182.165.394-79");
strcpy(cliente[5].endereco,"Rua Alagoinha,Olinda-PE");
cliente[5].telefone=87968166122 ;

cliente[6].id=990;
strcpy(cliente[6].nome,"Noah Prucho Quintela");
strcpy(cliente[6].email,"noah.quintela@hotmail.com.br");
strcpy(cliente[6].cpf,"081.449.264-98");
strcpy(cliente[6].endereco,"Rua Projetada 08,Arcoverde-PE");
cliente[6].telefone=81972256884;

cliente[7].id=684;
strcpy(cliente[7].nome,"Dilma Pedroso Diniz");
strcpy(cliente[7].email,"dilma.diniz@gmail.com.br");
strcpy(cliente[7].cpf,"081.449.264-98");
strcpy(cliente[7].endereco,"Rua Projetada 08,Arcoverde-PE");
cliente[7].telefone=81972256884;

cliente[8].id=477;
strcpy(cliente[8].nome,"Arielle Baesso Marica");
strcpy(cliente[8].email,"arielle.marica@hotmail.com.br");
strcpy(cliente[8].cpf,"224.086.254-83");
strcpy(cliente[8].endereco,"1ª Travessa João Cordeiro da Silva Filho,Caruaru-PE");
cliente[8].telefone=87993116203;

cliente[9].id=366;
strcpy(cliente[9].nome,"Nelma Paes Arruda");
strcpy(cliente[9].email,"nelma.arruda@gmail.com.br");
strcpy(cliente[9].cpf,"433.266.564-32");
strcpy(cliente[9].endereco,"Área Rural, Arcoverde-PE ");
cliente[9].telefone=81984187723;
int ordenar_c;
struct cliente c;
do{
system("clear");
printf("               ===========================================\n");
printf("                      1- Mostrar lista clientes vip\n");
printf("                          2- Ordenar lista\n");
printf("                               3- Sair\n");
printf("               ===========================================\n");
scanf("%d",&ordenar_c);
switch(ordenar_c)
{
            case 1 :  system("clear"); 
                      printf("\n%100s\n",linha);
                       for(int i =0; i<10; i++){
printf("%-4d| %-35s | %-35s | %-15s | %-13ld | %-35s\n",cliente[i].id,cliente[i].nome,cliente[i].email,cliente[i].cpf,cliente[i].telefone,cliente[i].endereco);}
                      printf("\n%100s\n",linha);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("%90s",enter);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 2 : system("clear"); 
              for(int i = 0; i<10; i++)
               {
                for(int x = i; x<10; x++){ 
                if(cliente[i].id > cliente[x].id){
                struct cliente c = cliente[i];
                cliente[i] = cliente[x];
                cliente[x] = c;
                  }
                }
              }
            printf("\n     ==============================================\n");
            printf("                     LISTA ORDENADA\n");
            printf("                          ✅✅     ");
            printf("\n     ==============================================\n");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("     Pressione ENTER para voltar ao menu principal.");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 3 : break;
            default: printf("Opção Invalida!!");break; 
}
}while(ordenar_c!= 3);
}
void Funcionarios(){
struct funcionario funcionario [7];
funcionario[0].id=31;
funcionario[0].telefone=8137296758;
strcpy(funcionario[0].nome,"Edson Anjos Barreto");
strcpy(funcionario[0].cpf, "393.671.624-21");
strcpy(funcionario[0].endereco, "3ª Travessa Dom Helder Câmara,ibura-PE");
strcpy(funcionario[0].email,"edson.barreto@geradornv.com.br");

funcionario[1].id=45;
funcionario[1].telefone=8126862501;
strcpy(funcionario[1].nome,"Robson Grilo Vilar");
strcpy(funcionario[1].cpf, "322.431.344-70");
strcpy(funcionario[1].endereco, "Vila do Ipiranga,boa vista-PE");
strcpy(funcionario[1].email,"robson.vilar@geradornv.com.br");

funcionario[2].id=39;
funcionario[2].telefone=8137532711;
strcpy(funcionario[2].nome,"Irinea Neves Vasconcellos");
strcpy(funcionario[2].cpf, "718.765.224-02");
strcpy(funcionario[2].endereco, "Rua P,Camaragibe-PE");
strcpy(funcionario[2].email,"irinea.vasconcellos@geradornv.com.br");

funcionario[3].id=33;
funcionario[3].telefone=8126867735;
strcpy(funcionario[3].nome,"Silezia Ervano Ervano");
strcpy(funcionario[3].cpf, "433.336.264-46");
strcpy(funcionario[3].endereco, "Rua Tapiramuta,Jaboatão dos Guararapes-PE");
strcpy(funcionario[3].email,"silezia.ervano@geradornv.com.br");

funcionario[4].id=44;
funcionario[4].telefone=8123182761;
strcpy(funcionario[4].nome,"Lucas Milton");
strcpy(funcionario[4].cpf, "259.472.274-01");
strcpy(funcionario[4].endereco,"1ª Subida Córrego da Loira,Brejo da Guabiraba-PE");
strcpy(funcionario[4].email,"Lucas.milton@gmail.com.br");

funcionario[5].id=48;
funcionario[5].telefone=8122171776;
strcpy(funcionario[5].nome,"Mauro Vieira Sales");
strcpy(funcionario[5].cpf, "126.429.994-08");
strcpy(funcionario[5].endereco, "Rua Guilherme Salazar,Recife-PE");
strcpy(funcionario[5].email,"mauro.sales@gmail.com.br");

funcionario[6].id=37;
funcionario[6].telefone=8125187165;
strcpy(funcionario[6].nome,"Deivison Darmont Constantino");
strcpy(funcionario[6].cpf, "112.391.434-60");
strcpy(funcionario[6].endereco, "Rua Santa Helena,Brejo de Beberibe-PE");
strcpy(funcionario[6].email,"deivison.constantino@hotmail.com.br");
int ordenar_f;
struct funcionario f;
do{
system("clear");
printf("               ===========================================\n");
printf("                      1- Mostrar lista funcionarios\n");
printf("                          2- Ordenar lista\n");
printf("                               3- Sair\n");
printf("               ===========================================\n");
scanf("%d",&ordenar_f);
switch(ordenar_f)
{
            case 1 :  system("clear"); 
                      printf("\n%100s\n",linha);
                       for(int i =0; i<7; i++){
                      printf("%-4d| %-35s | %-40s | %-15s | %-13ld | %-35s\n",funcionario[i].id,funcionario[i].nome,funcionario[i].email,funcionario[i].cpf,funcionario[i].telefone,funcionario[i].endereco);}
                     printf("\n%100s\n",linha);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("%90s",enter);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 2 : system("clear"); 
              for(int i = 0; i<7; i++)
               {
                for(int x = i; x<7; x++){ 
                if(funcionario[i].id > funcionario[x].id){
                struct funcionario f = funcionario[i];
                funcionario[i] = funcionario[x];
                funcionario[x] = f;
                  }
                }
              }
            printf("\n     ==============================================\n");
            printf("                     LISTA ORDENADA\n");
            printf("                          ✅✅     ");
            printf("\n     ==============================================\n");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("     Pressione ENTER para voltar ao menu principal.");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 3 : break;
            default: printf("Opção Invalida!!");break; 
}
}while(ordenar_f!= 3);
}
void Fornecedores(){
struct fornecedor fornecedor [3];
fornecedor[0].id = 2566;
fornecedor[0].telefone=8126185239;
strcpy(fornecedor[0].nome,"Relva verde");
strcpy(fornecedor[0].produtos,"Frutas e verduras");
strcpy(fornecedor[0].endereco,"Rua Campo Azul,COHAB -PE");
strcpy(fornecedor[0].email,"relvaFrutas@gmail.com");
strcpy(fornecedor[0].cnpj,"76.654.458/0001-26");
  
fornecedor[1].id = 2122;
fornecedor[1].telefone = 8125594152;
strcpy(fornecedor[1].nome,"Bela Cerealista");
strcpy(fornecedor[1].produtos,"Cereais");
strcpy(fornecedor[1].endereco,"Rua João Quirino da Silva, Bela Vista -PE");
strcpy(fornecedor[1].email,"cereaisBela@hotmail.com");
strcpy(fornecedor[1].cnpj,"04.517.343/0001-89");
  
fornecedor[2].id = 2811;
fornecedor[2].telefone = 8739909906;
strcpy(fornecedor[2].nome,"Imigrantes Bebidas");
strcpy(fornecedor[2].produtos,"Bebidas");
strcpy(fornecedor[2].endereco,"Rua Eliseu Nunes da Silva, São Cristóvão -PE");
strcpy(fornecedor[2].email,"imbebidas@outlook.com");
strcpy(fornecedor[2].cnpj,"15.504.851/0001-49");

int ordenar_ff;
struct fornecedor ff;
do{
system("clear");
printf("               ===========================================\n");
printf("                      1- Mostrar lista fornecedores\n");
printf("                          2- Ordenar lista\n");
printf("                               3- Sair\n");
printf("               ===========================================\n");
scanf("%d",&ordenar_ff);
switch(ordenar_ff)
{
            case 1 :  system("clear"); 
                      printf("\n%100s\n",linha);
                       for(int i =0; i<3; i++){
                      printf("%-4d| %-20s | %-22s | %-25s | %-15s | %-13ld | %-35s \n"
                      ,fornecedor[i].id,fornecedor[i].nome,fornecedor[i].produtos,fornecedor[i].email,fornecedor[i].cnpj,fornecedor[i].telefone,fornecedor[i].endereco);}
                      printf("\n%100s\n",linha);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("%90s",enter);
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 2 : system("clear"); 
              for(int i = 0; i<3; i++)
               {
                for(int x = i; x<3; x++){ 
                if(fornecedor[i].id > fornecedor[x].id){
                struct fornecedor ff = fornecedor[i];
                fornecedor[i] = fornecedor[x];
                fornecedor[x] = ff;
                  }
                }
              }
            printf("\n     ==============================================\n");
            printf("                     LISTA ORDENADA\n");
            printf("                          ✅✅     ");
            printf("\n     ==============================================\n");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            printf("     Pressione ENTER para voltar ao menu principal.");
            while ( (ch = getchar()) != '\n' && ch != EOF);
            break;
            case 3 : break;
            default: printf("Opção Invalida!!");break; 
}
}while(ordenar_ff!= 3);
}
void creditos()
{
  system("clear");
  printf("                                         Créditos \n");
  printf("               ================================================================\n");
  printf("               『Cozinheiro Chef: Fernanda Camile da Silva Aguirre(24010285)』\n");
  printf("               『Sub chef: Rafael Da Costa Menezes (24010314)』\n");
  printf("               『Garçom: Mathews Figueiroa de Sant'Ana (24009931)』\n");
  printf("               ================================================================\n");
  while ( (ch = getchar()) != '\n' && ch != EOF);
  printf("                         Pressione ENTER para voltar ao menu principal.");
  while ( (ch = getchar()) != '\n' && ch != EOF)
    return;
}
int main(void)
{
  int choice;
    do{
    system("clear");
    printf("                ╔╗\n");
    printf("                ║║       ╔╗\n");
    printf("                ║║   ╔══╗║║\n");
    printf("                ║║ ╔╗║║═╣╚╝\n");
    printf("                ║╚═╝║║║═╣\n");
    printf("                ╚═══╝╚══╝\n");
    printf("                ╔═══╗╔═══╗╔═══╗╔════╗╔══╗╔═╗ ╔╗®\n");
    printf("                ║╔══╝║╔══╝║╔═╗║║╔╗╔╗║╚╣╠╝║║╚╗║║\n");
    printf("                ║╚══╗║╚══╗║╚══╗╚╝║║╚╝ ║║ ║╔╗╚╝║\n");
    printf("                ║╔══╝║╔══╝╚══╗║  ║║   ║║ ║║╚╗║║\n");
    printf("                ║║   ║╚══╗║╚═╝║  ║║  ╔╣╠╗║║ ║║║\n");
    printf("                ╚╝   ╚═══╝╚═══╝  ╚╝  ╚══╝╚╝ ╚═╝\n");
    printf("                             ★★★★☆      \n");
    printf("               ♢──────────────────┒\n");
    printf("               1 ⟶  Cardápio. \n");
    printf("               2 ⟶  Contatos. ☎\n");
    printf("               3 ⟶  Quem somos.\n");
    printf("               4 ⟶  Créditos.\n");
    printf("               5 ⟶  Lista Clientes Vip.\n");
    printf("               6 ⟶  Lista Donos.\n");
    printf("               7 ⟶  Lista Fornecedores.\n");
    printf("               8 ⟶  Lista Funcionarios.\n");
    printf("               9 ⟶  Exit.\n");
    printf("               ┖──────────────────♢\n");
    printf("               Selecione a opção desejada: ");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
      if (choice == 1){
      int opcaoCardapio;
      do
        { 
          system("clear");
          printf("               =============================\n");
          printf("                         Cardápio\n");printf("                 Valor do Carrinho: %.2f\n",somaConta);
          printf("               =============================\n");
          printf("                1 - Aperitivos\n                2 - Entradas\n                3 - Pratos Principais\n                4 - Sobremesas\n                5 - Bebidas\n                6 - Finalizar Pedido.\n                7 - Limpar Carrinho\n                8 - Voltar ao menu principal\n");
          printf("               =============================\n");
          scanf("%d", &opcaoCardapio);
          switch(opcaoCardapio)
          {
          case 1: Aperitivos(); break;
          case 2: Entradas(); break;
          case 3: Principais(); break;
          case 4: Sobremesas(); break;
          case 5: Bebidas(); break;
          case 6: system("clear");
                  char somaZero, ente;
                  printf("                ╔╗\n");
                  printf("                ║║       ╔╗\n");
                  printf("                ║║   ╔══╗║║\n");
                  printf("                ║║ ╔╗║║═╣╚╝\n");
                  printf("                ║╚═╝║║║═╣\n");
                  printf("                ╚═══╝╚══╝\n");
                  printf("                ╔═══╗╔═══╗╔═══╗╔════╗╔══╗╔═╗ ╔╗®\n");
                  printf("                ║╔══╝║╔══╝║╔═╗║║╔╗╔╗║╚╣╠╝║║╚╗║║\n");
                  printf("                ║╚══╗║╚══╗║╚══╗╚╝║║╚╝ ║║ ║╔╗╚╝║\n");
                  printf("                ║╔══╝║╔══╝╚══╗║  ║║   ║║ ║║╚╗║║\n");
                  printf("                ║║   ║╚══╗║╚═╝║  ║║  ╔╣╠╗║║ ║║║\n");
                  printf("                ╚╝   ╚═══╝╚═══╝  ╚╝  ╚══╝╚╝ ╚═╝\n");
                  printf("                             ★★★★☆      \n");
                  printf("               ==================================\n");
                  printf("                      Detalhamento do Pedido\n");
                  printf("               ==================================\n\n");
                  printf("Aperitivo: %s\n", pAperitivo[0]);
                  printf("Entrada: %s\n", pEntrada[0]);
                  printf("Prato Principal: %s\n", pPrincipal[0]);
                  printf("Sobremesa: %s\n", pSobremesa[0]);
                  printf("Bebida: %s\n\n", pBebidas[0]);
                  printf("                     Valor Total do Pedido: %.2f", somaConta);
                  printf("\n                     Deseja realizar o pagamento?\n");
                  printf("                             1 - SIM\n");
                  printf("                             2 - NÃO\n");
                  if(somaConta==0){break;}
                  int Fpg;
                  scanf("%d",&Fpg);
                  if(Fpg == 1){pagamento();}
                  
                  else{while ( (ch = getchar()) != '\n' && ch != EOF);
                  printf("                    Pressione ENTER para voltar ao cardápio.");
                  while ( (ch = getchar()) != '\n' && ch != EOF)
                    break;}
          case 7: somaConta = 0;
          case 8: break;
          default: system("clear"); printf("Escolha uma opção do menu.");
          while ( (ch = getchar()) != '\n' && ch != EOF);
          printf("            Pressione ENTER para voltar ao menu.");
          while ( (ch = getchar()) != '\n' && ch != EOF);
          }
      }while (opcaoCardapio!= 8);break;
    }
      case 2: contatos();break;
      case 3: quemSomos();break;
      case 4: creditos();break;
      case 5: Cliente();break;
      case 6: Donos();break;
      case 7: Fornecedores();break;
      case 8: Funcionarios();break; 
      case 9: printf("Saindo.....");exit(0);break;
      default: printf("Invalid choice!\n");break;
}
}while (choice != 9);
}