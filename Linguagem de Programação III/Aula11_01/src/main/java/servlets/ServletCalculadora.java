package servlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import business.Adicao;
import business.Divisao;
import business.ICalculo;
import business.Multiplicacao;
import business.Subtracao;

/**
 * Servlet implementation class ServletCalculadora
 */
@WebServlet("/ServletCalculadora")
public class ServletCalculadora extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ServletCalculadora() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html; charset=UTF-8");
		
		try(PrintWriter out = response.getWriter()){
			out.println("<!DOCTYPE HTML>");
			out.println("<html>");
			out.println("<head><title>Servlet Calculadora</title></head>");
			out.println("<body>");
			out.println("<h2>Servlet Calculadora</h2>");
			
			out.println("<form action='' method='get'>");
			out.println("Valor 1: <input type='number' name='txtValor1' step='.1' required><br>");
			out.println("Valor 2: <input type='number' name='txtValor2' step='.1' required><br><br>");
			out.println("<input type='submit' name='btnCalcular' value='+'>");
			out.println("<input type='submit' name='btnCalcular' value='-'>");
			out.println("<input type='submit' name='btnCalcular' value='x'>");
			out.println("<input type='submit' name='btnCalcular' value='/'>");
			out.println("</form>");
			
			// valida se não é a primeira execução (na qual os parâmetros ainda são nulos)
			if (request.getParameter("txtValor1") != null) {
				// recupera valores informados no form
				float valor1 = Float.parseFloat(request.getParameter("txtValor1"));
				float valor2 = Float.parseFloat(request.getParameter("txtValor2"));
				
				float resultado = 0;
				// recebe a operação
				String operacao = request.getParameter("btnCalcular");
				// de acordo com a operação selecionada, executa o cálculo (via objeto anônimo)
				switch (operacao) {
					case "+": resultado = new Adicao().calcular(valor1, valor2); break;
					case "-": resultado = new Subtracao().calcular(valor1, valor2); break;
					case "x": resultado = new Multiplicacao().calcular(valor1, valor2); break;
					case "/": resultado = new Divisao().calcular(valor1, valor2); break;
				}
				
				// exibe valores na tela
				out.println(String.format("<br><br>Resultado: %.2f", resultado));
			}
			
			out.println("</body></html>");
		}	
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
