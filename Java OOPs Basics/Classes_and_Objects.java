class Person{
    String name;
    int age;
}

public class Main {
    public static void main(String args[]) {
        
        Person p1 = new Person();
        p1.age = 24;
        p1.name = "Baapi";

        Person p2 = new Person();
        p2.age = 18;
        p2.name = "Soumyadeep";

        System.out.println(p1.age +" "+ p1.name);
        System.out.println(p2.age +" "+ p2.name);

    }
}

/*

24 Baapi
18 Soumyadeep

*/