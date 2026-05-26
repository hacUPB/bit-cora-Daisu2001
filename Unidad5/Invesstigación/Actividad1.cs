using System;using System.Collections.Generic;
public abstract class Figura{    
		private string nombre;
    public string Nombre {        
		    get { return nombre;}
		    protected set { nombre = value; }    
		    }
    public Figura(string nombre)    {        
		    this.Nombre = nombre;    
		    }
    public abstract void Dibujar();
    }
public class Circulo : Figura{    
		public double Radio { get; private set; }
    public Circulo(double radio) : base("Círculo")    {        
		    this.Radio = radio;    
		    }
    public override void Dibujar()    {        
		    Console.WriteLine($"Dibujando un {Nombre} de radio {Radio}.");    
		    }
		}
public class Rectangulo : Figura{    
		public double Base { get; private set; }    
		public double Altura { get; private set; }
    public Rectangulo(double b, double h) : base("Rectángulo")    {        
		    this.Base = b;        
		    this.Altura = h;    
		    }
    public override void Dibujar()    {        
		    Console.WriteLine($"Dibujando un {Nombre} de {Base}x{Altura}.");    
		    }
		}
public class Programa{    
		public static void Main()    {        
				List<Figura> misFiguras = new List<Figura>();
        misFiguras.Add(new Circulo(5.0));        
        misFiguras.Add(new Rectangulo(4.0, 6.0));        
        misFiguras.Add(new Circulo(10.0));
        foreach (Figura fig in misFiguras) {            
		        fig.Dibujar();        
		        }    
		    }
		}