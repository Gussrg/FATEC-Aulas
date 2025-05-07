package servlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class ServletForm
 */
@WebServlet("/form")
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
			out.println("<head><title>Servlet Massa</title></head>");
			out.println("<body>");
			out.println("<h2>Projeto Conversor - Form</h2>");
			
			out.println("<form action='ServletConversaoDeMassa' method='get'>");
			out.println("Massa original: <input type='number' name='txtMassa' step='.1' required><br><br>");
			out.println("<input type='submit' name='btnConverter' value='kg para libra'>");
			out.println("<input type='submit' name='btnConverter' value='libra para kg'>");
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
