# BigDataXHw
`SourceCode` - This directory contains all the code to generate data and the scripts to sort in python, c, and bash

`Pics/` - This direcotry contains the bar graphs created from graph.py

`Report.pdf` - This file contains my answers to all the questions described in the instructions pdf

## Running files (All in source code direcotry):

**note all files being ran and compiled must be in the same direcotry ie. same level in the heiarchy**

`generate-data.sh` - this file will generate user desired amount of data in the form of two coloumns. Random integer and random 95 character
string. It requres two arguements: output_file_name.txt and number of records. If the file does not exist, the script will create one, if it does
the records created will append the existing file. The output records will be in the generated output file.

Example Run: 

```
./generate-data.sh output.txt 3
```

Example OutPut:

`cat output.txt`

```
15619 jVS0kq7ElpnVGGgdIznR5wu5tO8zqSOs
8747 vpdAWtDtxM26koVEEfi2NtgH5rAbMCY1
17077 2ie3Mh7zLHiCyPGt99CDnPIgbGanLlm6
```

`sort-data.sh` - this file will sort the data in bash. The file takes one arguement which is just the name of the file contains the records created
from `generate-data.sh`. Along with the output is the time taken to sort the data.

Example Run:

```
./sort-data.sh output.txt
```

Example OutPut:

```
real	0m0.002s
user	0m0.000s
sys	0m0.001s
8747 vpdAWtDtxM26koVEEfi2NtgH5rAbMCY1
15619 jVS0kq7ElpnVGGgdIznR5wu5tO8zqSOs
17077 2ie3Mh7zLHiCyPGt99CDnPIgbGanLlm6
```
`sort.py` - this file will sort the data outputed from generate-data.sh using python. It will output the sorted output along with the time taken to complete the sorting. When running
use must make sure the correct file name is used. This can be seen on line 5. 

Example Run:

```
python3 sort.py
```

Example Output:

```
Sort in python took 4.76837158203125e-07 seconds
[8747, 15619, 17077]
```

`sort.c` - this file will sort the data outputed from generate-data.sh using C. It will output the sorted output along with the time taken to complete the sorting. When running
use must make sure the correct file name is used. This can be seen on line 12. Also, the user must mannually change two lines to equal the amount of records being processed. On
line 16, the arguemnet to set the size of the arr array must equal the number of records in file to be sorted. On line 34 the upper bound of the 4 loop must equal the same number used
for the change on line 12.

Example run:

```
gcc sort.c

./a.out // a.out is the default executable created after compiling a C file unless a name is specified
```

Example Output:

```
8747
15619
17077
Sort in C took 0.000002 seconds to execute 
```

`graph.py` - this file graphs the output from sorting 1000, 100000, 10000000 records. The timings are graphed. These values must all be mannually inputed into the file.
In this file I create three Bar graphs in order to depict the sorts for the three times. Since there was a significant magnitude between the number
of records and times, I decided to create a bar graph for each individual record test. So, the python script generates three bar graphs. To view the next graph, a user must
close the tab of the bar graph that is displayed (I use plt.show which generates a window of the graph created). 

Example Run:

```
python graph.py
```

Example Output:

```
All three graphs can be seen in the Pics direcotry.
```
