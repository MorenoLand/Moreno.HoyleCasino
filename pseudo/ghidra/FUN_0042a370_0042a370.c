// FUN_0042a370  0042a370

undefined4 __thiscall FUN_0042a370(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    if ((*(int *)(*(int *)(param_1 + 0x14) + 0xae4) != 0) &&
       ((iVar2 = FUN_005eafc0(), iVar2 != 0 && (cVar1 = FUN_005f54a0(), cVar1 != '\0')))) {
      return 1;
    }
    if (((*(int *)(*(int *)(param_1 + 0x18) + 0xae4) != 0) && (iVar2 = FUN_005eafc0(), iVar2 != 0))
       && (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
      return 1;
    }
  }
  if ((param_2 == 2) || (param_2 == 3)) {
    if ((*(int *)(*(int *)(param_1 + 0x1c) + 0xae4) != 0) &&
       ((iVar2 = FUN_005eafc0(), iVar2 != 0 && (cVar1 = FUN_005f54a0(), cVar1 != '\0')))) {
      return 1;
    }
    if (((*(int *)(*(int *)(param_1 + 0x20) + 0xae4) != 0) && (iVar2 = FUN_005eafc0(), iVar2 != 0))
       && (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

