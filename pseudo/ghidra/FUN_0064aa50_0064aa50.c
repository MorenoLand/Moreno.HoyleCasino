// FUN_0064aa50  0064aa50

undefined4 __fastcall FUN_0064aa50(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x438) != 0) &&
     (iVar1 = FUN_005f3e50(), *(int *)(param_1 + 0x438) <= iVar1)) {
    *(undefined4 *)(param_1 + 0x438) = 0;
    return 1;
  }
  return 0;
}

