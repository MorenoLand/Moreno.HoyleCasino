// FUN_0041af80  0041af80

undefined1 FUN_0041af80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004197d0(param_1,param_2);
  iVar2 = FUN_004198d0(param_1,param_2);
  if ((iVar1 != iVar2) && (iVar1 = FUN_004197d0(param_1,param_2), iVar1 < 0x16)) {
    return 0;
  }
  return 1;
}

