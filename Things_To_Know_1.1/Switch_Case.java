class Solution{
    static double switchCase(int choice, List<Double> arr){
        // code here
        double area = 0;
        switch(choice){
            case 1 : 
                double R = arr.get(0);
                area= Math.PI*R*R;
            break;
            case 2:
                double L = arr.get(0);
                double B = arr.get(1);
                area= L*B;
            break;
        }
        return area;
    }
}
