-- recursao

-- condicao de base
-- passo recursivo
{-
f0 f1 f2
0  1   1
-}
-- Ta = ta-1 + t

--fib 4 

fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib 2 = 1
fib x = fib(x-1) + fib(x-2)
-- possivel exercícios de prova. Faça o raciocínio equacional da funcao fib 5

fat :: Int -> Int
fat 0 = 1
fat 1 = 1
fat x = x * fat(x-1)

{-
fat 4

fat :: Int -> Int
fat 0 = 1
fat 1 = 1
fat x = x * fat(x-1)



-}

--[] ++ ['d'] ++ ['c'] ++ ['b'] ++ ['a']

-- Lambdas 

-- high order functions/ funcoes de alta ordem


mapa :: (a -> a) -> [a] -> [a]
mapa funcao xs = [funcao x | x<-xs]

-- Guards
{- 
verificarIdade :: Int -> String
verificarIdade idade
    | ehCrianca     = "Eh Crianca"
    | ehAdolescente <= 17 = "eh Adolescente"
    | otherwise = "Adulto"
        where
            ehCrianca = idade <= 11
            ehAdolescente = idade <= 17
-}
-- Tipos de parâmetros/ Polimorfismo paramétrico

data Pessoa = Pessoa{nome::String}

data Caixa a b = UmaCaixa a | DuasCaixas a b deriving Show

-- tipos de dados recursivos

data List a = a :>: List a | Nulo deriving Show

lista = 10 :>: (20 :>: (30 :>: Nulo ))

inserirE :: a -> List a -> List a
inserirE vN Nulo = (vN :>: Nulo)
inserirE vN (valor:>:restoL) = valor :>: inserirE vN restoL


-- type class 



{- 
class Num a where
    (+) :: a -> a -> a
    (-) :: a -> a -> a
    ...

class Fractional a where
    (/) :: a -> a -> a

public interface Fraction{
    public abstract Float Div(A a, A b);
}
-}

data Politicos = Lula | Bolsonaro | Taxad | BolsoLula 

instance Num Politicos where
    Lula + Bolsonaro = BolsoLula

instance Show Politicos where
    show Lula      = "Sumiu minha carteira"
    show Bolsonaro = "Facada na barriga"
    show Taxad     = "Você foi taxado" 
    show BolsoLula = "Casal perfeito"



data Soma a = Soma{getSoma :: a}  deriving (Show,Eq)

instance (Num a) => Semigroup (Soma a) where
    (Soma x) <> (Soma y) = Soma (x + y)

instance (Num a) => Monoid (Soma a) where
    mempty = Soma 0

{- 
class Semigroup a where
    (<>) :: a -> a -> a 
-}

