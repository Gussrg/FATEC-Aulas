import Control.Monad

data Talvez a = Apenas a | Nada deriving Show


divS :: (Eq a, Fractional a) => a -> a -> Talvez a
divS x 0 = Nada
divS x y = Apenas (x / y)

{-
1 / 1    = 1
1 / 0.1  = 10
1 / .01  = 100
1 / .001 = 1000
class Functor f where
    fmap :: Functor f => (a -> b) -> f a -> fb
-}
instance Functor Talvez where
    fmap funcao (Apenas x) = Apenas (funcao x)
    fmap _        _        = Nada
{- 

class Applicative f where
    pure a =  f a
    (<*>) :: Applicative f => (a -> b) -> f a -> f b
-}

instance Applicative Talvez where
    pure a = Apenas a 
    (<*>) (Apenas func) (Apenas x) = Apenas (func x)
    (<*>)       _             _        = Nada



{-
<html>
    <head>
    </head>
<body>
    <form>
        nome:
            <input type="text" name="nome">
            <input type="submit" value="enviar>
    </form>
</body>
</html>
-}



main :: IO ()
main = 
    putStrLn "Digite seu nome: " >>= \ x ->
    getLine >>= \ z ->
    putStrLn $ "Seja bem vind:: " ++ z

-- Import Control.Monad

main' :: IO ()
main' = do
    putStrLn "Digite seu nome: "
    z <- getLine 
    putStrLn $ "Seja bem vind:: " ++ z


main'' :: IO ()
main'' = do
    putStrLn "Digite o 1 valor: "
    a <- readLn 
    putStrLn "Digite o 2 valor:  "
    b <- readLn 
    putStrLn $ "A soma dos dois valores:" ++ show (a + b)



main''' :: IO ()
main''' = do
    qtd <- readLn
    linhas <- replicateM qtd getLine
    let colunas = fmap words linhas
    let valores = fmap (\ l -> fmap (\ c -> (read c :: Int) ) l ) colunas 
        soma    = sum $ fmap (\ x -> sum x) valores
    putStrLn $ show linhas
    putStrLn $ show colunas
    putStrLn $ show valores
    putStrLn $ show soma