package com.sim3;

public class Intervalo {
    private double inf, sup;

public Intervalo(double inf, double sup) {
    this.inf = inf;
    this.sup = sup;
}

public double getInf() {
    return inf;
}

public double getSup() {
    return sup;
}

public boolean pertence(int x){
    return x >= inf && x <= sup;
}

}