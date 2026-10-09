data Cor = Vermelho | Azul | Verde deriving Show	

data Construcao = Casa{cor::Cor, preco::Double, metragem::Float} 
		| Apartamento {cor::Cor, preco::Double, metragem::Float} deriving Show

listaConstrucoes :: [Construcao]
listaConstrucoes = 
  [ Casa {cor = Vermelho, preco = 350000.0, metragem = 120.5}
  , Apartamento {cor = Azul, preco = 420000.0, metragem = 75.0}
  , Casa {cor = Vermelho, preco = 600000.0, metragem = 250.0}
  , Apartamento {cor = Vermelho, preco = 280000.0, metragem = 55.2}
  , Casa {cor = Azul, preco = 450000.0, metragem = 150.0}
  , Apartamento {cor = Verde, preco = 850000.0, metragem = 110.8}
  ]


ehVermelha :: Construcao -> Bool
ehVermelha (Casa Vermelho _ _ ) = True
ehVermelha _ = False

casasVermelhas :: [Construcao] -> [Construcao]
casasVermelhas imóveis = [x | x<-imóveis, ehVermelha x]


precoTotal :: [Construcao] -> Double
precoTotal imoveis = sum $ map preco $ casasVermelhas imoveis