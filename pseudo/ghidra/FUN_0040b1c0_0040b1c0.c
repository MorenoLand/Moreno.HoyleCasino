// FUN_0040b1c0  0040b1c0

uint __thiscall FUN_0040b1c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005dcb00(param_2,param_1);
  if ((((*(int *)(iVar1 + 8) != 0x16) &&
       (iVar1 = FUN_005dcb00(param_2,param_1), *(int *)(iVar1 + 8) != 0x13)) &&
      (iVar1 = FUN_005dcb00(param_2,param_1), *(int *)(iVar1 + 8) != 0x1c)) &&
     (uVar2 = FUN_005dcb00(param_2,param_1), *(int *)(uVar2 + 8) != 0x1a)) {
    return uVar2 & 0xffffff00;
  }
  iVar1 = FUN_0062fbf0(6);
  return (uint)(iVar1 == 0);
}

