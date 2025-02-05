How to use: Simply compile and run the application, when executing the application make sure to put 1. For example: 
./main 1
the main method will run the merge sort from array size 10 all the way to 10^9.
if using centaurus, simply do sbatch my_script.sh, and the script file has all of the centaurus parameters necessary to run the merge sort.

Times:
Array size: 10
Time taken:0
Array size: 100
Time taken:0
Array size: 1000
Time taken:0
Array size: 10000
Time taken:0
Array size: 100000
Time taken:0
Array size: 1000000
Time taken:0
Array size: 10000000
Time taken:6
Array size: 100000000
Time taken:68
Array size: 1000000000
Time taken:714

These times make sense, because merge sort splits the arrays into a bunch of sub arrays, and sorts the sub arrays, and will take exponentially longer as the array size increases.
For the plot I just entered the times and sizes into a spreadsheet and made the plots there. 


