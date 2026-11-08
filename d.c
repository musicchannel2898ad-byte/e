
git --version
sudo apt update
sudo apt install git -y





git clone https://github.com/PothuSriharsha/e
cd els
cat o.c



# Program 1: XOR each character with 0


#include <stdio.h>

int main()
{
    char *s = "Hello world";
    int i;

    for(i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i] ^ 0);
    }

    return 0;
}


2.Experiment 2: AND, OR and XOR with 127

#include <stdio.h>

int main()
{
    char *s = "Hello world";
    int i;

    printf("AND: ");
    for(i = 0; s[i] != '\0'; i++)
        printf("%c", s[i] & 127);

    printf("\nOR: ");
    for(i = 0; s[i] != '\0'; i++)
        printf("%c", s[i] | 127);

    printf("\nXOR: ");
    for(i = 0; s[i] != '\0'; i++)
        printf("%c", s[i] ^ 127);

    return 0;
}





Experiment 3: Caesar, Substitution and Hill Cipher in Java


a...
```java
class Main {
    public static void main(String[] args) {
        String s = "ABC";
        String enc = "";
        String dec = "";

        for (int i = 0; i < s.length(); i++)
            enc += (char)((s.charAt(i) - 'A' + 3) % 26 + 'A');

        for (int i = 0; i < enc.length(); i++)
            dec += (char)((enc.charAt(i) - 'A' - 3 + 26) % 26 + 'A');

        System.out.println("Encrypted: " + enc);
        System.out.println("Decrypted: " + dec);
    }
}
```



b....
```java
class Main {
    public static void main(String[] args) {
        String a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String b = "DEFGHIJKLMNOPQRSTUVWXYZABC";
        String s = "ABC";
        String enc = "";
        String dec = "";

        for (int i = 0; i < s.length(); i++)
            enc += b.charAt(a.indexOf(s.charAt(i)));

        for (int i = 0; i < enc.length(); i++)
            dec += a.charAt(b.indexOf(enc.charAt(i)));

        System.out.println("Encrypted: " + enc);
        System.out.println("Decrypted: " + dec);
    }
}
```


c...
```java
class Main {
    public static void main(String[] args) {
        String s = "HI";
        String enc = "";
        String dec = "";

        int a = s.charAt(0) - 'A';
        int b = s.charAt(1) - 'A';

        enc += (char)((3 * a + 3 * b) % 26 + 'A');
        enc += (char)((2 * a + 5 * b) % 26 + 'A');

        int x = enc.charAt(0) - 'A';
        int y = enc.charAt(1) - 'A';

        dec += (char)((15 * x + 17 * y) % 26 + 'A');
        dec += (char)((20 * x + 9 * y) % 26 + 'A');

        System.out.println("Encrypted: " + enc);
        System.out.println("Decrypted: " + dec);
    }
}
```








4 to 8 .....
```java
import java.util.Scanner;
import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;

class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter text: ");
        String s = sc.nextLine();

        KeyGenerator kg = KeyGenerator.getInstance("Blowfish");
        SecretKey key = kg.generateKey();

        Cipher c = Cipher.getInstance("Blowfish");

        c.init(Cipher.ENCRYPT_MODE, key);
        byte[] enc = c.doFinal(s.getBytes());
        System.out.println("Encrypted successfully");

        c.init(Cipher.DECRYPT_MODE, key);
        byte[] dec = c.doFinal(enc);
        System.out.println("Decrypted: " + new String(dec));

        sc.close();
    }
}




9...
<html>
<body>
<h3>Diffie-Hellman Key Exchange</h3>

<label style="display:inline-block; width:160px;">Prime Number:</label>
<input id="p" value="23"><br><br>

<label style="display:inline-block; width:160px;">Generator:</label>
<input id="g" value="5"><br><br>

<label style="display:inline-block; width:160px;">Alice Private Key:</label>
<input id="a" value="6"><br><br>

<label style="display:inline-block; width:160px;">Bob Private Key:</label>
<input id="b" value="15"><br><br>

<button onclick="calculate()">Generate Key</button>
<p id="result"></p>

<script>
function calculate() {
    let p = Number(document.getElementById("p").value);
    let g = Number(document.getElementById("g").value);
    let a = Number(document.getElementById("a").value);
    let b = Number(document.getElementById("b").value);

    let A = (g ** a) % p;
    let B = (g ** b) % p;

    let key1 = (B ** a) % p;
    let key2 = (A ** b) % p;

    document.getElementById("result").innerHTML =
        "Alice's Key: " + key1 +
        "<br>Bob's Key: " + key2;
}
</script>
</body>
</html>










10,11...


import java.util.Scanner;
import java.security.MessageDigest;

class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter text: ");
        String s = sc.nextLine();

        MessageDigest md = MessageDigest.getInstance("SHA-1");
        byte[] b = md.digest(s.getBytes());

        for (byte x : b)
            System.out.printf("%02x", x);

        sc.close();
    }
}


