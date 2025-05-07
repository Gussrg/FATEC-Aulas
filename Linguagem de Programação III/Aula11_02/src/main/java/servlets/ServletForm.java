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
@WebServlet("/ServletForm")
public class ServletForm extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ServletForm() {
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
			out.println("<h2>Projeto Calculadora - Form</h2>");
			
			out.println("<form action='ServletCalculadora' method='get'>");
			out.println("Valor 1: <input type='number' name='txtValor1' step='.1' required><br>");
			out.println("Valor 2: <input type='number' name='txtValor2' step='.1' required><br><br>");
			out.println("<input type='submit' name='btnCalcular' value='+'>");
			out.println("<input type='submit' name='btnCalcular' value='-'>");
			out.println("<input type='submit' name='btnCalcular' value='x'>");
			out.println("<input type='submit' name='btnCalcular' value='/'>");
			out.println("</form>");
			
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
