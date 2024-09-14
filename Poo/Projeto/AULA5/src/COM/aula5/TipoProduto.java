package COM.aula5;

public enum TipoProduto {
    
    TECNOLOGIA(101),
    ESCRITORIO(102),
    ALIMENTO(103);

    private int codigo;

    private TipoProduto(int codigo){
        this.codigo = codigo;
    }

    public int getCodigo(){
        return codigo;
    }





}
