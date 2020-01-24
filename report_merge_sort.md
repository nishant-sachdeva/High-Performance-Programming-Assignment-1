Completely naive merge sort : Reverse input

1 . Different Runnings : 
Took 0.275009 seconds to execute 
Took 0.306700 seconds to execute 
Took 0.296584 seconds to execute 
Took 0.286399 seconds to execute 
Took 0.316305 seconds to execute 
Took 0.289038 seconds to execute 
Took 0.289831 seconds to execute 
Took 0.287117 seconds to execute 
Took 0.287345 seconds to execute 



Merge Sort with Insertion sort for input below a certain number :

1. Didn't make too much of a difference as it was not the bottleneck parameter.


Merge Sort with Iterative Character instead of Recursive calls :

1. Code became considerably faster as the function calls were reduced and a lot of cycles were saved

Merge Sort with Iterative Character instead of Recursive calls coupled with insertion sort for smaller portions :

1. Code speed up keep rising as merge sort is slower than insertion sort for smaller inputs

==>> Important fact : The speed up seems to be even more when we use powers of 2 for the size of the tiles for insertion sort

NEXT STEP HERE : Bit hacks were applied and some for loops were converted to while loops to successfully speed up the code even further

NEXT : Data prefetching instructions were used to prefetch and retain the data in the highest possible cache levels : This led to a further speed up of the code time because cache misses were reduced to an absolute minimum


PS : Note that the shown time take by the code varies with the fact as to whether the PC is plugged in or not. This change is attributed to the fact that there are different power modes for a processor and there are (privileged) ways of making it work at different performance levels so as to optimise the life of the pc wrt the power available.

Final Code times : 

Took 0.068721 seconds to execute 
Took 0.072496 seconds to execute 
Took 0.071928 seconds to execute 
Took 0.071439 seconds to execute 
Took 0.073092 seconds to execute 
Took 0.072970 seconds to execute 


So we see that the final times have vastly improved using the upper optimisations



ANOTHER POSSIBLE : 

Vectorisation was a possible optimisation. : Here , we use SIMD (single instruction , multiple data ) instructions to parallely process various calculations to make a much more improved version of the code. Unfortunately , that hasn't been done in this code as of yet.