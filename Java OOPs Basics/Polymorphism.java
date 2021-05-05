class Person{
    int age;
    String name;

    void talk(){
        System.out.println(name+ "is talking");
    }
    void talk(int words){
        System.out.println(name+" said "+words+" words");
    }
    void talk(boolean shout){
        if(shout){
        System.out.println(name+" shouted !!!");
        }
        else{
            System.out.println(name+" didn't shout...");
        }
    }
}

public class Main {
    public static void main(String args[]) {
        
        Person p1 = new Person();
        p1.name = "Soham";
        p1.talk();
        p1.talk(true);
        p1.talk(70);
        p1.talk(false);

        //polymorphism, identifies the function according to the type or number of parameters
    }
}

/*

Sohamis talking
Soham shouted !!!
Soham said 70 words
Soham didn't shout...

*/