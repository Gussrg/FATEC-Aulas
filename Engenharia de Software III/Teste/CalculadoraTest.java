import static org.junit.jupiter.api.Assertions.*;

class CalculadoraTest {

    Calculadora calc = new Calculadora();

    @org.junit.jupiter.api.Test
    void soma() {
        double X = calc.soma(2,3);

        assertEquals(5,X);

    }

    @org.junit.jupiter.api.Test
    void diferenca() {

        double X = calc.diferenca(5,3);

        assertEquals(2,X);
    }

    @org.junit.jupiter.api.Test
    void divisao() {
        double X = calc.divisao(6,3);

        assertEquals(2,X);
    }

    @org.junit.jupiter.api.Test
    void produto() {
        double X = calc.produto(2,3);

        assertEquals(6,X);
    }
}