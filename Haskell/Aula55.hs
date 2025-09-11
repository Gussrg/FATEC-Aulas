module Aula5 where

data Arvore a = Nil | Folha a | Ramo a (Arvore a) (Arvore a)
    deriving Show 

infixo :: Arvore a -> [a]
infixo Nil = []
infixo (Folha x) = [x]
infixo (Ramo raiz esq dir) = infixo esq ++ [raiz] ++ infixo dir

-- Bolsa eh um tipo parametrico (variavel a), ha um valor
-- (Bolsa) e dois campos de tipo a
data Bolsa a = Bolsa a a deriving Show 

data Mochila a b = Mochila a b Int deriving Show 
-- Nao podemos substituir a variavel a
-- na funcao show :: Show a => a -> String
-- pois, nao ha deriving Show em EstadoCivil
data EstadoCivil = Solteiro | Casado | Viuvo | Separado  

instance Show EstadoCivil where 
    show Solteiro = "Muito bom!!!"
    show Casado = "Bom as vezes"
    show Viuvo = "Triste"
    show Separado = "Triste as vezes"

-- A funcao predicado :: Predicado a => a -> Bool
-- ela eh restrita. Queremos um comportamento diferente
-- para cada tipo a (Sobrecarga). 
class Predicado a where 
    predicado :: a -> Bool

instance Predicado Int where 
    predicado = even 

instance Predicado Char where 
    predicado ' ' = False 
    predicado _ = True

instance Predicado Bool where 
    predicado = id

-- Theorems for free
mapa :: (a -> b) -> [a] -> [b]
mapa f [] = []
mapa f (a:as) = f a : mapa f as 

foo :: a -> a 
foo x = x 

fat :: Int -> Int 
fat n = foldl (*) 1 [2 .. n]