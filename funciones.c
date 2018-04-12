#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief recibe dos numeros y los suma.
 * \param a valor a ser sumado con b
 * \param b valor a ser sumado con a
 * \return suma de a+b
 *
 */
float suma(float a,float b)
{
    float total=0;
    total=a+b;
    return total;
}


/** \brief recibe dos numeros y los resta
 * \param a valor a ser restado por b
 * \param b valor que resta a la variable a
 * \return resta de a-b
 *
 */
float resta(float a,float b)
{
    float total;
    total=a-b;
    return total;
}


/** \brief recibe dos numeros y los multiplica.
 * \param a valor a ser multiplicado por b
 * \param b valor a ser multiplicado con a
 * \return producto de a*b
 *
 */
float multiplicacion(float a,float b)
{
    float total;
    total=a*b;
    return total;
}


/** \brief recibe dos numeros y los divide a/b.
 * \param a dividendo
 * \param b divisor
 * \return division de a/b
 *
 */
float division(float a,float b)
{
    float total;
    total=(a/b);
    return total;
}


/** \brief recibe un numero y nos da el factorial
 * \param a valor a factorizar. Ejemplo:(factorial de 3)= 3*2*1 =6
 * \return factorial de n
 *
 */
float factorial(float n)
{
float resp;
if(n==1)
return 1;
resp=n*factorial(n-1);
return
 (resp);
}





#endif // FUNCIONES_H_INCLUDED
