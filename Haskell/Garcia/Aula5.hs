module Aula5 where

-- Funcao de alta ordem: E uma funcao que recebe ou retorna outras funcoes

--Polimorfismo parametrico: É quando a função (tipo) terá variáveis de tipo. 
--A função terá comportamento independente do valor de variáveis
--map :: forall a b. (a->b)->[a]->[b]
--filter:: forall a. (a->bool)->[a]->[a]

--Polimorfismo AD-HOC(restrição): Função ou tipo polimórfico que possui um typeclass com restrição

--Typeclass: Provê "interface" para ser usado na resolução de ambiguidade pelo polimorfismo AD-HOC
--EX: Show, Enum, Read, Ord, Eq, Num

data Bolsa a = Bolsa a a

data EstadoCIvil = Solteiro | Casado  | Viuvo | Separado

instance SHow EstadoCivil where

    show Solteiro = "Muito Bom!!"
    show Casado = "Mais ou menos"
    show Viuvo = ""
    show Separado = ""