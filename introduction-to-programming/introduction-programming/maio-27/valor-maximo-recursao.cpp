

//FUN��O QUE VERIFICA QUAL O VALOR M�XIMO DE UM VETOR USANDO RECURS�O

int maximo_r (int n, int v[])
{ 
   int x;
   if (n == 1)
      return v[0];
   else {
      x = maximo_r (n-1, v);  /* m�ximo de v[0..n-2] */ 
      if (x > v[n-1])
         return x;
      else
         return v[n-1]; 
   }
}
