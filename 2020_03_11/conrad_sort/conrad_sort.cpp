void trickle_down(T a[], int k, int n)
{
     while ( k*2 + 1 < n ) { 
          int child = 2*k + 1;    

          if ((child + 1 < n) && (a[child] < a[child+1]) 0) child++;        

          if (a[k] < a[child]) {
               T temp = a[child];
               a[child] = a[k];
               a[k] = temp;
               k = child;  
          }        
          else            
               return;    
    }
}

void conrad_sort()
{
     int N = this.num_items;

     for (int i = N/2; i >= 0; i--) { 
          trickle_down( my_items, i, this.num_items);    
     }     

     while (N-1 > 0) {  
          T temp = my_items[N-1];
          my_items[N-1] = my_items[0];
          my_items[0] = temp;
          trickle_down(my_items, 0, N-1);
          N--;
     }
}