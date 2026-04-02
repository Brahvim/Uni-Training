import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;

public class Lc84Stack extends ArrayDeque<Integer> { // Easy wrapping! Dumb code #FTW!!!

	public Lc84Stack() {
		super.push(-1); // *Add this* **for ease of reporting** *in case* there's nothing larger!
	}

	public static void main(final String... p_args) {
		final Lc84Stack stk = new Lc84Stack();
		// stack.forEach(System.out::println); // Test!
		final Integer[] arr = new Integer[] { 16, 8, 0, 1, 3 };
		new ArrayList<>(Arrays.asList(arr)).forEach(stk::push);

		for (int i = stk.size() - 2; i > 0; i--) {

			while (stk.isEmpty() && arr[i] > stk.peek()) {

				stk.push(arr[i]);
				stk.pop();

				if (stk.isEmpty()) {

					arr[i] = -1;

				} else {

					arr[i] = stk.peek();

				}

			}

		}

		stk.forEach(System.out::println);
	}

}
