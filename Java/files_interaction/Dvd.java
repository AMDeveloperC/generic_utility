import java.io.Serializable;

public class Dvd implements Serializable {
	public Dvd() {}

	public String getTitolo() { return titolo; }
	public void setTitolo(String titolo) { this.titolo = titolo; }

	private String titolo;
}
