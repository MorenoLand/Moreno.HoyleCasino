// FUN_00600900  00600900

undefined4 __fastcall FUN_00600900(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (iVar1 = FUN_005f3e50(), *(int *)(param_1 + 0x28) <= iVar1)
     ) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 1;
  }
  return 0;
}

