// FUN_00537690  00537690

int __thiscall FUN_00537690(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 0:
    iVar1 = FUN_00537880(param_2,1);
    return (int)*(char *)(param_1 + 0x15 + param_2 * 0x16 + iVar1);
  case 1:
    iVar1 = FUN_00537880(param_2,2);
    return (int)*(char *)(param_1 + 0x15 + param_2 * 0x16 + iVar1);
  case 2:
    iVar1 = FUN_00537880(param_2,3);
    return (int)*(char *)(param_1 + 0x15 + param_2 * 0x16 + iVar1);
  case 3:
    if (param_2 == 0) {
      iVar1 = FUN_00537880(0,1);
      return (int)*(char *)(param_1 + 0x15 + iVar1);
    }
    if (param_2 == 1) {
      iVar1 = FUN_00537880(1,2);
      return (int)*(char *)(param_1 + iVar1 + 0x2b);
    }
    if (param_2 == 2) {
      iVar1 = FUN_00537880(2,3);
      return (int)*(char *)(param_1 + iVar1 + 0x41);
    }
    break;
  case 4:
    if (param_2 == 0) {
      iVar1 = FUN_00537880(0,3);
      return (int)*(char *)(param_1 + 0x15 + iVar1);
    }
    if (param_2 == 1) {
      iVar1 = FUN_00537880(1,2);
      return (int)*(char *)(param_1 + iVar1 + 0x2b);
    }
    if (param_2 == 2) {
      iVar1 = FUN_00537880(2,1);
      return (int)*(char *)(param_1 + iVar1 + 0x41);
    }
  }
  FUN_005e9f20("false","..\\Casino\\slotmachinestate.cpp",0x3cc);
  return -1;
}

