package servlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class MeuPrimeiroServlet
 */
@WebServlet("/MeuPrimeiroServlet")
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
		// response.getWriter().append("Served at: ").append(request.getContextPath());
		
		response.setContentType("text/html; charset=UTF-8");
		
		try(PrintWriter out = response.getWriter()){
			out.println("<!DOCTYPE HTML>");
			out.println("<html>");
			out.println("<head><title>Servlet Form</title></head>");
			out.println("<body>");
			out.println("<h2>Servlet Form</h2>");
			
			out.println("<form>");
			out.println("Nome: <input type='text' name='txtNome' required><br>");
			out.println("e-mail: <input type='email' name='txtEmail' required><br><br>");
			out.println("<input type='submit' value='Enviar dados'>");
			out.println("</form><br>");
			
			// valida se houve submit dos valores
			if (request.getParameter("txtNome") != null) {
				// recupera valores enviados pelo usuário
				String nome = request.getParameter("txtNome");
				String email = request.getParameter("txtEmail");
				
				// exibe valores
				out.println(String.format(
						"<h3>Seja bem-vindo(a), %s. Seu login é %s</h3>",
							nome, email));
			}

			out.println("</body>");
			out.println("</html>");
		}
				
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
