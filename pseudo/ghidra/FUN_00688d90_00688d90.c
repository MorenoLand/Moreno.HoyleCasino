// FUN_00688d90  00688d90

undefined1 __fastcall FUN_00688d90(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x208) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x208) + 4))(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

