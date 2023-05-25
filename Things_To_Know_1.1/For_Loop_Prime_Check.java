class Geeks {
    static void isPrime(int n) {
        boolean flag = true;
        if(n==0 || n==1){
            flag = false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            // Your code here
            if(n%i == 0){
                flag = false;
                break;
            }
        }

        System.out.println(flag == false ? "No":"Yes");
    }
}
