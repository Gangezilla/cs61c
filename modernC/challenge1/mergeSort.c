/*
  So the gist of merge sort is that you take a list of unsorted elements and break it down into several sub-lists.
  Each sub-list will eventaully consist of a single element that you can then merge together into a sorted list.
  - Divide the unsorted list into N sublists, each containing 1 element.
  - Take adjacent pairs of two singleton lists and merge them to form a list of 2 elements. N will now convert into N/2 lists of size 2
  - Repeat until you've got a single sorted list
*/

double * main() {
  double unsortedNumbers[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
}
