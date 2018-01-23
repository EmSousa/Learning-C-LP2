//****************************Menu Inicial**************************************
program codigoprogm;

uses
  UnitStock;

var
  op:integer;


procedure apresentacao;
begin
     writeln ('***********************************************');
     writeln ('*                                             *');
     writeln ('*    Benvindo a loja de Alexandre e Emilio    *');
     writeln ('*                                             *');
     writeln ('***********************************************');
end;
//Saida do programa
procedure xau();
begin
     writeln ();
     writeln ('***********************************************');
     writeln ('*                                             *');
     writeln ('*  Ate uma proxima                            *');
     writeln ('*             Cumprimentos Alexandre e Emilio *');
     writeln ('*                                             *');
     writeln ('***********************************************');
     write   ('*****Carregue novamente no enter para sair*****');
     readln;
end;
//Menu 3 para direcionar à área de vendas.
procedure MenuVendas ();
var
  op:integer;
  sum:real;
begin
    writeln('teste');
     while op <> 2 do begin
      writeln ('1 - Comecar nova fatura');
      writeln ('2 - Voltar atras');
      writeln ();
      write ('Escolha a opcao: ');
      readln (op);
      case op of
           1 : begin
            //Começar fatura em que pede os produtos e a quantidade e se já não precisa de mais nada, depois calcular valor total e pedir o pagamento do cliente para depois dizer qual o troco e como este deve ser dado.
           end;
      end;
     end;
end;
//Menu 2 para direcionar à gestão de produtos ou apresentar a lista de produtos
procedure MenuGestao();
Begin

     LerFicheiro('AdminProds.dat');

     writeln('Lista com ', count, ' produtos.');
     writeln();

     while (true) do begin
           writeln();
           writeln('1. Introduzir novo produto');
           writeln('2. Lista de Produtos');
           writeln('3. Guardar Alteracoes');
           writeln('4. Apagar todos');
           writeln('5. Sair');
           writeln();
           write('Insira a opcao: ');
           readln(opcao);
           writeln;
           case (opcao) of
              1: IntroduzirProduto();
              2: MostrarDados();
              3: GravarFicheiro('AdminProds.dat');
              4: count:=0;
	      5: Break;
           end;
     end;
     GravarFicheiro('AdminProds.dat');
     //ReadLn;
End;
//Menu 1 para direcionar à área de gestão ou área de vendas
procedure menu1 ();
var
  op:integer;
begin
    while true do begin
     writeln ('1 - Area de Gestao');
     writeln ('2 - Area de Vendas');
     writeln ('3 - Sair');
     writeln ();
     write ('Escolha a opcao: ');
     readln (op);
     case op of
          1 : begin
           writeln ();
           writeln (' Menu area de gestao');
           MenuGestao();
           writeln ();

           end;

          2 : begin
           writeln ();
           writeln (' Menu area de vendas');
           MenuVendas ();
           writeln ();

          end;

          3 : break
          end;

     end;
end;

//Apresentação inicial
begin
  apresentacao();
  menu1();
  xau();
End.
