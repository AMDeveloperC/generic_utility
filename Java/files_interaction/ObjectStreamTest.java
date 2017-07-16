import java.io.ObjectOutputStream;
import java.io.ObjectInputStream;
import java.io.FileOutputStream;
import java.io.FileInputStream;

/* Example: how to write and read object from a file */
public class ObjectStreamTest {
	public static void main(String[] argv) throws Exception {
		Dvd d = new Dvd();
		d.setTitolo("Titolo");

		// write an object
		ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("nome.obj"));
		out.writeObject(d);

		// now read the written object
		FileInputStream fileInput = new FileInputStream("nome.obj");
		ObjectInputStream in = new ObjectInputStream(fileInput);
		Dvd r = (Dvd) in.readObject();
		in.close();
		System.out.println(r.getTitolo());
	}
}
