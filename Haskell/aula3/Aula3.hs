-- tipo de dia
--Cuidado com o read!!
data Dia = Domingo
        | Segunda
        | Terca
        | Quarta
        | Quinta
        | Sexta
        | Sabado
        deriving (Show, Eq, Ord, Enum, Read)

--Patter Matching: e uma forma de descontruir com o tipo de entrada e programar a funcao como se estivessemos em um switch
agenda :: Dia -> String
agenda Segunda = "Aula de IA"
agenda Quarta  = "Aula de Haskell"
agenda Quinta  = "Pre-sexta, bar"
agenda Sexta   = "Bar"
agenda Sabado  = "Bar e estudar Haskell"
agenda _       = "Ninguem liga" --default do switch do Java

agenda' :: Dia  -> String
agenda' x =
    case x of
        Segunda -> "Aula de IA"
        Quarta  -> "Aula de haskel"
        Quinta  -> "Pre-sexta, bar"
        Sexta   -> "Bar"
        Sabado  -> "Aparentemente bar"
        _       -> "Ninguem liga"

numDia :: Int -> Maybe Dia
numDia 0 = Just Domingo
numDia 1 = Just Segunda
numDia 2 = Just Terca
numDia 3 = Just Quarta
numDia 4 = Just Quinta
numDia 5 = Just Sexta
numDia 6 = Just Sabado
numDia _ = Nothing

--NumDia possui uma entrada inteira e sua saida 
--eh uma duvida, ou sai uma string de erro ou um dia valido

--Either Erro Acerto
numDia' :: Int -> Either String Dia
numDia' 0 = Right Domingo
numDia' 1 = Right Segunda
numDia' 2 = Right Terca
numDia' 3 = Right Quarta
numDia' 4 = Right Quinta
numDia' 5 = Right Sexta
numDia' 6 = Right Sabado
numDia' _ = Left "Dia invalido"

--O pattern matching descontruiu o Maybe Dia,
--revelando duas possibilidades: Just dia, onde dia eh uma
-- variavel do tipo Dia (Domingo .. Sabado) ou Nothing

mostrar :: Maybe Dia -> String
mostrar (Just dia) = "O dia eh:" ++ show dia
mostrar Nothing = "O usuario digitou algo errado"

data Correncia = BRL | USD | EUR deriving Show

--Tipo de dado algebrico do tipo registro
-- Record syntax: serve para representar dados, o nome
-- dos campos valor e correncia sao funcoes de projecao
data Moeda = Moeda {
    valor :: Double, 
    correncia :: Correncia
} deriving Show

--Nao usamos o pattern matchig no moeda, pois nao ha
-- acao neste caso. O pattern matching nao foi aberto.

conversaoReal :: Moeda -> Moeda
conversaoReal (Moeda valor USD) = Moeda (5.42 * valor) BRL
conversaoReal (Moeda valor EUR) = Moeda (6.31 * valor) BRL
conversaoReal moeda = moeda

-- nao ha mudancas no correncia
acrescimo :: Double -> Moeda
acrescimo 

salarioBase :: PessoaFatec -> Moeda
salarioBase (Func _) = Moeda 2800 BRL
salarioBase (Prof _ _) = Moeda 6000 BRL
salarioBase (Aluno _ _ _) = Moeda 280 BRL