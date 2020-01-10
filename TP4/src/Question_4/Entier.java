package Question_4;

import java.util.Scanner;

public class Entier {

	private static int f = 1;
	private short x;
	private int y;
	private int n;
	private long z;
	static int reste;
	static boolean flag = true;
	static int nbr = 17;
	
	
	
	
public static void main (String[] args)
{
	System.out.println("------------La SOMME----------------");
	int a,b,c;
		Scanner sc = new Scanner(System.in);
	System.out.println("Veuillez saisir un nombre :");
	a = sc.nextInt();
	System.out.println("Veuillez saisir un autre nombre : ");
	b = sc.nextInt();
	int sum = a+b;
	System.out.println("Le rsultat est :"+sum);
	
	System.out.println("--------------FACTORIEL------------------");
	System.out.println("Veuillez taper un nombre :");
	c = sc.nextInt();
	
	if(c<0)
	{
		System.out.println("Veuillez entrer un nombre positif");
	}else
	{
		
		if(c>=2)
		{
			for(int i = c;i>=2;i--)
			{
				f = f * i;
			}
		}
	}
	
	System.out.println("Le resultat de "+c+"!"+" est :"+f);
	
	System.out.println("------------------NOMBRE PREMIER--------------");
	
	System.out.println("Veuillez taper un nombre :");
	nbr = sc.nextInt();
	 for(int i=2; i <= nbr/2; i++)
	  {
	     
	     reste = nbr%i;
	            
	     
	     if(reste == 0)
	     {
	        flag = false;
	        break;
	     }
	  }
	  
	  if(flag)
	     System.out.println(nbr + " est un nombre premier");
	  else
	     System.out.println(nbr + " n'est pas un nombre premier");
	  }
}




