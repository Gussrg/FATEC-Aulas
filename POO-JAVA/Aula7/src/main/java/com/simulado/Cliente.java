
package com.simulado;

import java.util.ArrayList;
import java.util.HashMap;

public class Cliente {

    private String nome;
    //txns = Transactions
    private ArrayList<Moeda> txns;

    public Cliente(String nome){
        this.nome = nome;
        txns = new ArrayList<>();
    }

    public void registrar(Moeda moeda){
        if(moeda.getValor() > 0)
            txns.add(moeda);
    }

    public void listarBTCSOL(){
        for(Moeda m : txns){
            if(Denom.isSOLBTC(m.getDenominacao()))
                m.mostrar();
        }
    }

    public HashMap<Denom,Double> calcularTotais(){
        HashMap<Denom,Double> auxTotal;
        auxTotal = new HashMap<>();
        auxTotal.put(Denom.ADA,0.0); 
        auxTotal.put(Denom.ETH,0.0); 
        auxTotal.put(Denom.SUI,0.0); 
        for(Moeda m : txns){
            if(Denom.isADA(m.getDenominacao())){
                double atual = auxTotal.get(Denom.ADA);
                auxTotal.put(Denom.ADA, atual + m.getValor());
            }
            if(Denom.isETH(m.getDenominacao())){
                double atual = auxTotal.get(Denom.ETH);
                auxTotal.put(Denom.ETH, atual + m.getValor());
            }
            if(Denom.isSUI(m.getDenominacao())){
                double atual = auxTotal.get(Denom.SUI);
                auxTotal.put(Denom.SUI, atual + m.getValor());
            }
        }
        return auxTotal;
    }

    public void mostrarTudo(){
        for(Moeda m : txns)
            m.mostrar();
    }

    public double calcular(){
        double total = 0;
        for(Moeda m : txns)
            total += m.getValor();

        return total;
    }

}
