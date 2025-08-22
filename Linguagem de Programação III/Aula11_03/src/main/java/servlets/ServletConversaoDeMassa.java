package servlets;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import business.Massa;

/**
 * Servlet implementation class ServletConversaoDeMassa
 */
@WebServlet("/ServletConversaoDeMassa")
public class ServletConversaoDeMassa extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ServletConversaoDeMassa() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		if (request.getParameter("txtMassa") != null) {
			float massaOriginal = Float.parseFloat(request.getParameter("txtMassa"));
			
			float massaConvertida = 0;
			
			// verifica qual a conversão desejada
			if (request.getParameter("btnConverter").equalsIgnoreCase("kg para libra")) {
				massaConvertida = new Massa().converterQuiloParaLibra(massaOriginal);
			}
			else {
				massaConvertida = new Massa().converterLibraParaQuilo(massaOriginal);				
			}
			
			// configura atributo para ser enviado no request
			request.setAttribute("massaConvertida", massaConvertida);
			// configura dispatcher com o "path" do recurso 
			// que irá continuar o tratamento da requisição
			RequestDispatcher rd = request.getRequestDispatcher("ServletResultado");
			// encaminha para o "path" configurado acima
			rd.forward(request, response);
			
		}
		
		/// TODO Receber o valor a partir do "txtMassa" e,
		/// usando o valor do "btnConverter" para saber qual 
		/// conversão foi solicitada, executar o método
		/// correspondente em um objeto do tipo "Massa". Em 
		/// seguida, enviar o resultado do cálculo para
		/// o ServletResultado, que deverá apresentar a conversão. 
		/// Para fazer esse envio, será necessário utilizar
		/// a interface RequestDispatcher comentada em aula, além de
		/// criar um atributo ("setAttribute") no objeto "request"
		/// Nota: nada deverá ser exibido no "ServletConversaoDeMassa"
	
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
