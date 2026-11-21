// FUN_005206d0  005206d0

undefined4 FUN_005206d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00520540(param_1);
  iVar2 = FUN_005206b0(param_1);
  return *(undefined4 *)(iVar1 + 0x28 + iVar2 * 4);
}

