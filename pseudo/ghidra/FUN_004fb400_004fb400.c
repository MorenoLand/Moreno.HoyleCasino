// FUN_004fb400  004fb400

void __thiscall FUN_004fb400(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_8;
  
  FUN_00636e70(param_1);
  FUN_004fb580();
  if (param_3 != -1) {
    for (local_8 = 0; iVar1 = FUN_0047f950(), local_8 < iVar1; local_8 = local_8 + 1) {
      iVar1 = FUN_0047e390(local_8);
      iVar1 = FUN_005dcb00(*(undefined4 *)(iVar1 + 4));
      if (*(int *)(iVar1 + 8) == param_3) {
        FUN_004c6550();
        return;
      }
    }
  }
  return;
}

