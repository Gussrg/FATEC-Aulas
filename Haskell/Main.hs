
-- funções

somarUm :: Int -> Int
somarUm x = x + 1

saudacao :: String -> String
saudacao nome = "Seja bem vindo, " ++ nome

ehAdolescente :: Int -> Bool
ehAdolescente idade = idade >= 12 && idade <= 17

somarTres :: Int -> Int -> Int -> Int
somarTres a b c = a + b + c


-- Tipos de dados Algebricos

-- Data constructor -> Values Constructores
data Binario = Zero | Um | Erro deriving Show
     -- 2      =   1   +  1

{-
Algebra dos Tipos
Null = 0
()   = 1
Tipo soma
Tipo produto
-}
--Funcao injetora 

intParaBinario :: Binario -> Int
intParaBinario Zero = 0
intParaBinario Um   = 1

binarioParaInt :: Int -> Binario
binarioParaInt 0 = Zero
binarioParaInt 1 = Um
binarioParaInt x = Um


-- Tipos de dados algebricos com campos. (campos de um construtor)
{- 
data Arma = Arma String Int deriving Show

getTipo :: Arma -> String
getTipo (Arma tipo qtd) = tipo

setQtd :: Int -> Arma -> Arma
setQtd municao (Arma tipo municaoOld) = Arma tipo municao
-}  

{-
public Arma{
     private String tipo;
     private Integer qtd;

     public Arma(String tipo, Integer idade){
          this.tipo = tipo;
          this.idade = idade;
     } 
}
public static void main(String ... args){
     Arma a = new Arma("Revolver",6);
     Arma a2 = new Arma(a.getTipo(),10);

     a.setQtd(10);
     a.setQtd(20)

}
-}

-- Record Syntax

--data Arma = Arma {tipo::String, quantidade::Int}  deriving Show

data Fabricante = Taurus | Glock | Imbel deriving Show

data Arma = Revolver {f :: Fabricante, quantidade::Int} 
          | Pistola { f :: Fabricante , quantidade::Int} deriving Show
              

armas = [Revolver Taurus 33, Revolver Taurus 20, Pistola Glock 14 ]

somarQuantidade :: [Arma] -> Int
somarQuantidade armas = sum [quantidade arma | arma<-armas]

ehPistola :: Arma -> Bool
ehPistola (Pistola _ _ ) = True
ehPistola _ = False

filtrarPistolas :: [Arma] -> [Arma]
filtrarPistolas armas = [arma | arma<-armas, ehPistola arma]