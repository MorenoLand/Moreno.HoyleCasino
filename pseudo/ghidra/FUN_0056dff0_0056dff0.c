// FUN_0056dff0  0056dff0

/* WARNING: Removing unreachable block (ram,0x0056e018) */
/* WARNING: Removing unreachable block (ram,0x0056e01c) */
/* WARNING: Removing unreachable block (ram,0x0056e033) */

void __thiscall FUN_0056dff0(int param_1,int param_2)

{
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) - param_2;
  if (((*(int *)(param_1 + 0xa0) == 0) && (*(int *)(param_1 + 0xa4) == 0)) &&
     (FUN_0056e340(), *(char *)(param_1 + 0x99) == '\0')) {
    FUN_0056f870();
    FUN_0056e3e0();
  }
  FUN_005709b0(*(undefined4 *)(param_1 + 0xa0));
  return;
}

