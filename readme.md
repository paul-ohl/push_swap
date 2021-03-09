# push\_swap project

You've got to sort that stack.

[Subject](./utils/en.subject.pdf)


## Steps followed to complete the project

### The sorting algorithm:

#### 1) Check that the stack is valid
	- Does not contain duplicates
	- Contains only integers

*Examples:*
0 4 29 3 2 4 6  => duplicates
0 4 29 3 two 6  => contains other things than integers
0 4 29 3 2 6 9  => valid

#### 2) Assign each number its ordered position in the stack

for 0 4 29 3 2 6 9

| index | number |
|-------|--------|
| 0 | 0 |
| 1 | 2 |
| 2 | 3 |
| 3 | 4 |
| 4 | 6 |
| 5 | 9 |
| 6 | 29 |

stack becomes 0 3 6 2 1 4 5

#### 3) take the smallest numbers and put them in the temp stack,
leave the highest half in the main stack

![sorting visu](./utils/imgs/sorting_visu_1.png)

#### 4) Bring back the smallest half to the *bottom* of the main stack, in the
correct order

![sorting visu](./utils/imgs/sorting_visu_2.png)

#### 5) Repeat operations 3 & 4 until the biggest number is pushed to the bottom of
the main stack

**Special rule:** At *any* point in the loop, if the smallest unsorted number is
at the top of any of the two stacks, or at the bottom of the tmp stack, it
should be push to the bottom of the main stack.
