

data Tree a = Branch a (Tree a) (Tree a) | Leaf a | Nulo deriving Show

inserirElementos :: (Eq a,Ord a ) => a -> Tree a -> Tree a
inserirElemento