module Aula2 where

dobro :: Int -> Int
dobro x = 2*x

tabuada :: Int -> [Int]
tabuada k = [k*x | x <- [0 .. 10]]

divisores :: Int -> [Int]
divisores k = [x | x <- [1 .. k], mod k x == 0]

ehPrimo :: Int -> Bool 
ehPrimo k = length (divisores k) == 2

-- Parametros: 2
somar :: Int -> Int -> Int 
somar x y = x+y 

-- Parametros: 1
somar' :: (Int, Int) -> Int 
somar' xs = fst xs + snd xs

