import java.util.Scanner;

public class abc {

	public static void main(String[] args) {

		new Proc().process();
	}

	

}
class Proc {

	public Proc() {

	}

	public void process() {

		Test test;
		Reader reader = new Reader();

		test = reader.readTest();

		Number a, b;
		a = new Number(test.a);
		b = new Number(test.b);

		System.out.println(a.add(b));
	}

}

class Number {

	public String value;

	public Number(String value) {
		super();
		this.value = value;
	}

	public Number add(Number number) {
		String b = number.value;
		String a = this.value;

		int delta = Math.abs(a.length() - b.length());

		int len = a.length() < b.length() ? a.length() : b.length();

		int tmp = 0;
		String result = "";

		for (int i = len - 1; i >= 0; i--) {
			int s = 0;

			if (len == a.length())
				s = Integer.parseInt(a.charAt(i) + "") + Integer.parseInt(b.charAt(i + delta) + "") + tmp;

			if (s > 9)
				tmp = 1;
			else
				tmp = 0;

			result = (s % 10) + result;
		}

		for (int i = delta - 1; i >= 0; i--)
			if (a.length() < b.length())
				result = b.charAt(i) + result;
			else
				result = a.charAt(i) + result;

		if (tmp == 1)
			result = "1" + result;

		return new Number(result);
	}

	public String toString() {
		return this.value;
	}

}

class Reader {

	public Test readTest() {
		Scanner scanner = new Scanner(System.in);

		String a = scanner.next();
		String b = scanner.next();
		scanner.close();
		return new Test(a, b);

	}

}

class Test {

	public String a;
	public String b;

	public Test(String a, String b) {
		super();
		this.a = a;
		this.b = b;
	}

}
