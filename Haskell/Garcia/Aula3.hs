module Aula3 where

-- O tipo Dia eh de enumeracao, assim como uma enum em Java

-- Cuidado com o read!!!
data Dia = Domingo  
         | Segunda 
         | Terca 
         | Quarta
         | Quinta 
         | Sexta 
         | Sabado
         deriving (Show, Eq, Ord, Enum, Read) 

-- Pattern Matching: Eh uma forma de desconstruir com o tipo
-- de entrada e programar a funcao como se estivessemos em um switch
agenda :: Dia -> String 
agenda Segunda = "Aula de IA"
agenda Quarta  = "Aula de Haskellao do povo"
agenda Quinta  = "Pre-sexta, bar"
agenda Sexta   = "Bar"
agenda Sabado  = "Bar e estudar Haskell" 
agenda _       = "Ninguem liga" -- default do switch do java

agenda' :: Dia -> String 
agenda' x =
    case x of 
        Segunda -> "Aula de IA"
        Quarta -> "Aula de Haskellao do povo"
        Quinta -> "Pre-sexta, bar"
        Sexta ->  "Bar"
        Sabado -> "Aparentemente bar"
        _      -> "Ninguem liga"

-- numDia eh uma "funcao PARCIAL", existem entradas nao tratadas
-- Uma funcao total trata TODAS as entradas
numDia :: Int -> Maybe Dia 
numDia 0 = Just Domingo 
numDia 1 = Just Segunda 
numDia 2 = Just Terca 
numDia 3 = Just Quarta 
numDia 4 = Just Quinta 
numDia 5 = Just Sexta 
numDia 6 = Just Sabado 
numDia _ = Nothing

-- NumDia possui uma entrda inteira e sua saida
-- eh uma duvida, ou sai uma string de erro ou um dia
-- valido

-- Either Erro Acerto
numDia' :: Int -> Either String Dia 
numDia' 0 = Right Domingo 
numDia' 1 = Right Segunda 
numDia' 2 = Right Terca 
numDia' 3 = Right Quarta 
numDia' 4 = Right Quinta 
numDia' 5 = Right Sexta 
numDia' 6 = Right Sabado 
numDia' _ = Left "Dia invalido"

-- O pattern matching descontruiu o tipo Maybe Dia,
-- revelando duas possibilidades: Just dia, onde dia eh uma
-- variavel do tipo Dia (Domingo .. Sabado) ou o Nothing.
mostrar :: Maybe Dia -> String 
mostrar (Just dia) = "O dia eh: " ++ show dia
mostrar Nothing = "O usuario digitou algo errado"

{-
wdiojdwiodwj
dwihdwijidw[
idwhjidwjidw
idwjiwdjidw]
-}

data Correncia = BRL | USD | EUR deriving Show 

-- Tipo de dado algebrico do tipo registro
-- Record syntax: serve para representar dados, o nome
-- dos campos valor e correncia sao funcoes de projecao (vulgo getters)
data Moeda = Moeda {
    valor :: Double,
    correncia :: Correncia
} deriving Show

-- Nao usamos o pattern matching no moeda, pois nao ha
-- acao neste caso. O pattern matching n foi aberto.
conversaoReal :: Moeda -> Moeda 
conversaoReal (Moeda valor USD) = Moeda (5.42 * valor) BRL
conversaoReal (Moeda valor EUR) = Moeda (6.31 * valor) BRL
conversaoReal moeda = moeda

-- Noa ha mudancas no correncia
acrescimo :: Double -> Moeda -> Moeda 
acrescimo x (Moeda valor correncia) = Moeda (valor+x) correncia

-- Tipo de dado algebrico no geral 
data PessoaFatec = Prof String String 
                 | Aluno String String Int 
                 | Func String deriving Show 

salarioBase :: PessoaFatec -> Moeda 
salarioBase (Func _) = Moeda 2800 BRL
salarioBase (Prof _ _) = Moeda 6000 BRL 
salarioBase (Aluno _ _ _) = Moeda 280 BRL 
