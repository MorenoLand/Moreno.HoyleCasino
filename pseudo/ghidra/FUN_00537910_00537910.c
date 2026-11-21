// FUN_00537910  00537910

bool __thiscall FUN_00537910(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*DAT_00793394 + 0x4c))();
  if (cVar1 == '\0') {
    iVar2 = FUN_00537690(param_3,param_4);
    return param_2 == iVar2;
  }
  if (param_4 == 1) {
    if (DAT_00793394[param_3 + 2] == 1) {
      iVar2 = FUN_00537880(param_3,1);
      iVar2 = (**(code **)(*DAT_00793394 + 0x6c))
                        ((int)*(char *)(param_1 + 0x15 + param_3 * 0x16 + iVar2));
      return iVar2 == param_2;
    }
    if (DAT_00793394[param_3 + 2] == -1) {
      iVar2 = FUN_00537880(param_3,3);
      iVar2 = (**(code **)(*DAT_00793394 + 0x6c))
                        ((int)*(char *)(param_1 + 0x15 + param_3 * 0x16 + iVar2));
      return iVar2 == param_2;
    }
  }
  uVar3 = FUN_00537690(param_3,param_4);
  iVar2 = (**(code **)(*DAT_00793394 + 0x6c))(uVar3);
  return param_2 == iVar2;
}

