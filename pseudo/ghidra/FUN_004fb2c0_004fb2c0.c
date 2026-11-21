// FUN_004fb2c0  004fb2c0

void __thiscall FUN_004fb2c0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  iVar2 = FUN_005dcb00(param_2);
  iVar2 = *(int *)(iVar2 + 8);
  if ((param_3 == 0) || (*(int *)(param_3 + 8) == -1)) {
    FUN_0064da20(param_2,param_3);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x140))(param_2,param_3,0);
    if (cVar1 == '\0') {
      FUN_0064da20(param_2,param_3);
    }
    else if (param_3 == 0) {
      FUN_0064da20(param_2,0);
    }
    else {
      FUN_0064da20(param_2,param_3);
      if (iVar2 != *(int *)(param_3 + 8)) {
        iVar2 = *(int *)(param_3 + 8);
        for (local_14 = 0; iVar3 = FUN_0047f950(), local_14 < iVar3; local_14 = local_14 + 1) {
          iVar3 = FUN_0047e390(local_14);
          iVar3 = FUN_005dcb00(*(undefined4 *)(iVar3 + 4));
          if (*(int *)(iVar3 + 8) == iVar2) {
            FUN_004c6550();
            return;
          }
        }
      }
    }
  }
  return;
}

