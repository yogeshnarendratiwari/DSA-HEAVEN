// Why strings are immutable in Java?

// In object-oriented programming, the immutable string or objects that cannot be modified once it is created. But we can only change the reference to the object. We restrict to change the object itself. The String is immutable in Java
// because of the security, synchronization and concurrency, caching, and class loading. The reason of making string final is to destroy the immutability and to not allow others to extend it.

// The String objects are cached in the String pool, and it makes the String immutable
// . The cached String literals are accessed by multiple clients. So, there is always a risk, where action performs by one client affects all other clients. For example, if one client performs an action and changes the string value from Pressure to PRESSURE, all remaining clients will also read that value. For the performance reason, caching of String objects was important, so to remove that risk, we have to make the String Immutable.

// Why String is Immutable or Final in Java
// These are some more reasons of making String immutable:

// The String pool cannot be possible if String is not immutable in Java. A lot of heap space is saved by JRE
// . The same string variable can be referred to by more than one string variable in the pool. String interning can also not be possible if the String would not be immutable.
// If we don't make the String immutable, it will pose a serious security threat to the application. For example, database usernames, passwords are passed as strings to receive database connections. The socket programming
// host and port descriptions are also passed as strings. The String is immutable, so its value cannot be changed. If the String doesn't remain immutable, any hacker can cause a security issue in the application by changing the reference value.
// The String is safe for multithreading because of its immutableness. Different threads can access a single "String instance". It removes the synchronization for thread safety because we make strings thread-safe implicitly.
// Immutability gives the security of loading the correct class by Classloader. For example, suppose we have an instance where we try to load java.sql.Connection class but the changes in the referenced value to the myhacked.Connection class does unwanted things to our database.


public class Q8 {
    public static void main(String [] args){
        String name = "Yogesh";
        String surname = " Tiwari";
        System.out.println(name);
        name.concat(surname); // can't be concat because string is immutable
        System.out.println(name);
        name = name.concat(surname); // stores in name variable
        System.out.println(name);
    }
}