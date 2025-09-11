module Aula4 where

--data [Int] = [] | Int : [Int]
--data [char] = [] : [char]

--Tipo recursivo
--Quantos valores ha no tipo Lista:
--Dois! Quais? Nil e Elem
--O Nil tem 0 campo
--O Elem tem 2 campos, Int e o proprio Lista
data Lista = Nil | Elem Int Lista
    deriving Show

comprimento :: Lista -> Int
comprimento Nil = 0 -- Caso base da recursão
--x :: Int, resto :: Lista
comprimento (Elem x resto) = 1 + comprimento resto

-- String = [Char]
-- data [Char] = []  | Char : [Char]

--Guards: Sao condicoes booleanas e imitam o if
tiraVogal :: String -> String
tiraVogal [] = [] --Caso base
tiraVogal (letra : resto)
    | elem letra "AEIOUaeiou" = tiraVogal resto
    | otherwise = letra : tiraVogal resto

tiraPar :: [Int] -> [Int]
tiraPar [] = []
tiraPar (x : xs)
    | even x  = tiraPar xs
    | otherwise = x : tiraPar xs

contaPar :: [Int] -> Int
contaPar [] = 0
contaPar (x : xs)
    | even x = 1 + contaPar xs
    | otherwise = contaPar xs

tiraCinco :: [String] -> [String]
tiraCinco [] = []
tiraCinco (xs : xss)
    | lenght xs > 5 = tiraCinco xss
    | otherwise = xs : tiraCinco xss
    
triplo :: Double -> Double
triplo x = 3*x
