// FUN_00571780  00571780

void __thiscall FUN_00571780(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x38) = param_3;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    FUN_00571800();
    if (*(char *)(param_1 + 4) != '\0') {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    FUN_005718a0();
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_00571990();
      FUN_00571d90();
    }
  }
  return;
}

