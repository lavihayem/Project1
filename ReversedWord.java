import java.util.*;

class ReversedWord<T> implements Iterable<T>
{
	private static StringBuilder reversed;
	private final List<T> original;
 
    	public ReversedWord(List<T> original) {
        	this.original = original;
    	}
 
    	public Iterator<T> iterator() {
        	final ListIterator<T> i = original.listIterator(original.size());
 
        	return new Iterator<T>() {
         public boolean hasNext() { return i.hasPrevious(); }
         public T next() { return i.previous(); }
         public void remove() { i.remove(); }
        };
    }
 
    	public static <T> ReversedWord<T> reversed(List<T> original) {
        	return new ReversedWord<T>(original);
    }
 
	public static void main (String[] args) throws java.lang.Exception
	{
		if(args.length == 0)
			args = new String[]{"This","is","a","test"};
		reversed = new StringBuilder();
		for (String i : ReversedWord.reversed(Arrays.asList(args)))
		{
			System.out.println("appending: " + i);
			reversed.append(i);
			if (reversed.length()!=0)
				reversed.append(" ");
		}
 
		System.out.println(reversed.toString());
	}
}