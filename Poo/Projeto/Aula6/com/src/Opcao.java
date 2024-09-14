package Aula6.com.src;

public enum Opcao {
    ADD, SUB, MUL, DIV, EXIT;

    //Não precisa de break quando com return;
    public statit Opcao converter(int op){
        switch(op){
            case 1:
                return ADD;
            case 2:
                 return SUB;
            case 3:
                return MUL;
            case 4:
                return DIV;
            default:
                return EXIT;
        }
    }

}
