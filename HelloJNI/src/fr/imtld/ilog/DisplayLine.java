package fr.imtld.ilog;

public class DisplayLine {
	
	private native void displayLine(int iLine, String name);
	
	public static int getNumber() {
		return 6;
	}
	static {
	    System.loadLibrary("HelloNative");
	}
	
	public static void main(String[] args) {
		DisplayLine hj = new DisplayLine();
		hj.displayLine(4, "HelloJNI" );
	}
}
