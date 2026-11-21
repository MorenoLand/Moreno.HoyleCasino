// FUN_0051f6e0  0051f6e0

void __fastcall FUN_0051f6e0(int param_1)

{
  int *piVar1;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_005fb2b0(0xd);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x94 + local_8 * 4) + 0x70))();
  }
  piVar1 = (int *)FUN_005fb2b0(0xe);
  (**(code **)(*piVar1 + 0x70))();
  piVar1 = (int *)FUN_005fb2b0(0xf);
  (**(code **)(*piVar1 + 0x70))();
  return;
}

