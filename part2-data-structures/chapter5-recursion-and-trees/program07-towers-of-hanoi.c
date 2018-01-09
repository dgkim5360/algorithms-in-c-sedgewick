/* Program 5.7: Solution to the towers of Hanoi
 * We shift the tower of disks to the right by (recusively) shifting all but
 * the bottom disk to the left, then shifting the bottom disk to the right,
 * then (recursively) shifting the tower back onto the bottom disk.
 */
void hanoi(int N, int d) {
  if (N == 0)
    return;
  hanoi(N-1, -d);
  shift(N, d);
  hanoi(N-1, -d);
}
