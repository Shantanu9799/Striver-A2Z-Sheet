class Solution {
    static int dataTypeSize(String str) {
        // code here
        if(str.equals("Character")) {
            return 1;
        } else if(str.equals("Double") || str.equals("Long")) {
            return 8; 
        }
        return 4;
    }
}