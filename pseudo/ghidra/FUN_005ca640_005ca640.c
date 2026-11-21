// FUN_005ca640  005ca640

void __thiscall FUN_005ca640(int param_1,int param_2)

{
  undefined4 local_8;
  
  if ((param_2 != 1) ||
     ((double)*(int *)(param_1 + 0x30) != *(double *)(*(int *)(param_1 + 0x10) + 0x1e0))) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      FUN_005cad50(param_2);
    }
    FUN_005ca570();
    if (*(char *)(param_1 + 0x28) != '\0') {
      FUN_005ca7b0();
    }
  }
  return;
}

