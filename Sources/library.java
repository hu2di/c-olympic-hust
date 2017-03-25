import java.util.Scanner;

public class library {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int count =0;
		int[] list = new int[a];
		for( int i =0; i<a ; i++){
			list[i] =  scanner.nextInt();
		}
		for(int i = 0 ; i<(a-1);i++){
			for(int j = i+1; j<a;j++){
				if(list[i]>list[j]){
					int tmp = list[i];
					list[i]= list[j];
					list[j] = tmp;
					count ++;
				}
			}
		}
		System.out.print(count);
	}

}
