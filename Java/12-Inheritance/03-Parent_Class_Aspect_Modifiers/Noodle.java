public class Noodle {

  private double lengthInCentimeters;
  private double widthInCentimeters;
  private String shape;
  protected String ingredients; //accessible to child class
  private String texture = "brittle";

  Noodle(double lenInCent, double wthInCent, String shp, String ingr) {

    this.lengthInCentimeters = lenInCent;
    this.widthInCentimeters = wthInCent;
    this.shape = shp;
    this.ingredients = ingr;

  }

  final public boolean isTasty() { //cannot be changed by child class

    return true;

  }

  public static void main(String[] args) {

    Ramen yasaiRamen = new Ramen();
    //System.out.println(yasaiRamen.ingredients);
    System.out.println(yasaiRamen.isTasty());

  }

}
