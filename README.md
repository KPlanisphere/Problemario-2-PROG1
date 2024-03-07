# Estructuras de Decisión
## Problemario 1 - Programacion 1

1.	Calcule el mayor de cuatro números enteros introducidos por el teclado 

4.	Escriba un programa en C que solicite al usuario una fecha (dd:mm:aaaa) y compruebe si es 
	correcta. Para que una fecha sea correcta es necesario:
	
	-	El año debe ser mayor que cero. 
	-	El mes debe estar entre 1 y 12 
	-	Dependiendo del mes que sea, el día debe estar dentro de los limites válidos. Los
		meses que tienen 31 días son 1,3,5,7,8,10 y 12. Los meses de 30 dúas son 4,6,9 y11 
	-	El segundo mes tiene 28 días si el año no es bisiesto; en caso contrario, tendrá 29 días. 

5.	Escriba un programa que determine la cantidad total a pagar por una llamada telefónica de 
	n minutos, teniendo en cuenta lo siguiente: 
	
	-	Las llamadas de 3 minutos o menos tienen un coste de 10 pesos. 
	-	Cada minuto adicional a partir de los 3 primeros cuesta 5 pesos.
	
6.	Escriba un programa que simule una calculadora simple. Lea dos enteros y un carácter. Si 
	el carácter es un + o 1, se imprime la suma; si el carácter es un – o 2, se imprime la resta; si 
	el carácter es un * o 3, se imprime el producto; si el carácter es un / o 4, se imprime el 
	cociente y si es un % o 5, se imprime el residuo. 
	-	Utilice la sentencia Switch 

8.	Escriba un programa que calcule la nómina semanal (salario neto) de un trabajador de una 
	empresa cuyo trabajo se paga por horas. Introduzca por teclado el numero de horas y el 
	precio de la hora. El calculo se realiza del siguiente modo: <br>
		-	Las primeras 35 horas se pagan a la tarifa normal <br> 
		-	Las horas extras se pagan un 50% más que las normales. <br> 
		-	Los impuestos a deducir a los trabajadores varían en función de su sueldo mensual. <br> 
			i-		Si el sueldo es menor de 600 pesos, libre de impuestos <br>
			ii-		Si el sueldo esta entre 600 pesos y 1000 pesos, los impuestos son el 20% <br> 
			iii-	Si el sueldo es mayor de 1000 pesos, el 30% <br>

9.	En una empresa cada empleado debe teclear un código identificador de 3 cifras en la 
	entrada. Escriba un programa que muestre por pantalla la categoría del empleado teniendo 
	en cuenta que: <br>
		-	Si el código es divisible por 2, por 3 y por 5, la categoría del empleado es “Director General”. <br>
		-	Si el código es divisible por 3 y por 5 pero no por 2, la categoría del empleado es “Directivo”. <br>
		-	Si el código es divisible por 2, pero no por 3 ni por 5, la categoría del empleado es “Staff”. <br>
		-	Si el código no es divisible por 2, ni por 3 ni por 5, la categoría del empleado es “Seguridad”.<br>
