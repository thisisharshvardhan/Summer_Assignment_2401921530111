import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class: Comfortable seating and AC available.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment: Reserved for women passengers.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment: Open for all passengers.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment: Goods and luggage only.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] arr = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < 10; i++) {
            int x = rand.nextInt(4) + 1;

            switch (x) {
                case 1:
                    arr[i] = new FirstClass();
                    break;
                case 2:
                    arr[i] = new Ladies();
                    break;
                case 3:
                    arr[i] = new General();
                    break;
                case 4:
                    arr[i] = new Luggage();
                    break;
            }
        }

        for (int i = 0; i < 10; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + arr[i].notice());
        }
    }
}