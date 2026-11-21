// FUN_00544f00  00544f00

void __fastcall FUN_00544f00(int param_1)

{
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x70))();
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    if (*(char *)(param_1 + local_8 + 0xc0) == '\0') {
      FUN_005448f0(local_8);
    }
    else {
      FUN_00544860(local_8);
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(char *)(param_1 + local_8 + 0xc9) == '\0') {
      FUN_00544b30(local_8);
    }
    else {
      FUN_00544ac0(local_8);
    }
  }
  return;
}

