class Person{
    String name;
    int age;

    void wank(){
        System.out.println(name + " is wanking.");
    }
    void eat(){
        System.out.println(name + " is eating.");
    }
    void walk(int steps){
        System.out.println(name+ " walked "+steps+" steps");
    }
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

        p1.eat();
        p2.wank();
        p1.walk(55);

    }
}

/*

24 Baapi
18 Soumyadeep
Baapi is eating.
Soumyadeep is wanking.
Baapi walked 55 steps

*/