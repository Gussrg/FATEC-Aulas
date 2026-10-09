qtdVogais :: String -> Int
qtdVogais palavra = lenght [x | x<-palavra, elem x "AEIOUaeiou"]

qtdVogais palavra = lenght [x | x<palavra, elem x "AEIOUaeiou"]
qtdVogais palavra = foldl (\b a -if elem "AEIOUaeiou" tehn b +1 else a ) 0 palavra
    

    case x of
        true -> faca algo 
        false -> falca algo