import java.io.File;
import java.io.FileNotFoundException;

import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.Hashtable;
import java.util.Map;

/**
 * Compute the keyword frequency of JSON models.
 */
public class Main {

  /** Folder containing JSON files. */
  private static final String PATH = "../models";
  /** Map a keyword to its number of occurrences. */
  private static Map<String, Integer> occurrences = new Hashtable<String, Integer>();

  public static void main (String[] args) throws Exception{
    File models = new File(PATH);
    for (File f : models.listFiles())
      parseFile(f);

    displayResults();
  }

  /**
   * Count the keyword of the given file and add the stats to the global
   * {@link occurrences}.
   *
   * @param name file model in JSON format
   */
  private static void parseFile(File name) {
    try {
      Scanner s = new Scanner(name);
      Pattern p = Pattern.compile("\"\\w+\"");

      while (s.hasNextLine()) {
	Matcher m = p.matcher(s.nextLine());
	if (m.find()) {
	  String key = m.group(0);
	  if (occurrences.containsKey(key)) {
	    occurrences.put(key, occurrences.get(key) + 1);
	  } else {
	    occurrences.put(key, 1);
	  }
	}
      }
    } catch (FileNotFoundException e) {
      System.err.println("No file found " + e.getMessage());
    }
  }

  /**
   * Compute the frequencies of the occurrences and display it
   *
   * @see occurrences
   */
  private static void displayResults() {
    int totalOccurences = 0;
    for (String o : occurrences.keySet())
      totalOccurences += occurrences.get(o);

    String freq;
    for (String o : occurrences.keySet()) {
      freq = ("" + ((double)occurrences.get(o)/totalOccurences)*100).substring(0, 4);
      System.out.println(occurrences.get(o) + "\t" + freq + "%  " + o);
    }
  }
}
