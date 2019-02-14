class Box {
	int width;
	int height;
	int length;
}

class testjava  {
	public static void main(String args[]) {
		Box b1 = new Box();
		Box b2 = new Box();
		b1.height =1; b1.length =2; b1.width =3;
		b2 = b1;
		System.out.println(b2.height);
	}
}