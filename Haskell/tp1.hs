maiorQue :: Int -> Int -> Bool
maiorQue x y = x > y

u :: Int
u = 7

dobroLista :: [Int] -> [Int]
dobroLista xs = [2*x | x<-xs]

ex21a :: [Int]
ex21a = [11 ^ x| x <- [0..6]]

ex21b :: [Int]
ex21b = [x | x <- [1..39], mod x 4 /= 0] 

ex21c :: [String]
ex21c = ["A" ++ [x] ++"BB" | x <- ['a'..'g']]

ex21d :: [Int]
ex21d = [x | x <- [1..41], mod x 3 == 2]

ex21e :: [Float]
ex21e = [1/2 ^ x | x <- [0..5]]

ex21f :: [Int]
ex21f = [1 + x * 9 | x <- [0..7]]

ex22 :: String -> Bool 
ex22 texto = mod (length texto) 2 == 0

ex23 :: [String] -> [String]
ex23 [_] = reverse [] 