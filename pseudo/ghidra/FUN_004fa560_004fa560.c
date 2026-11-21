// FUN_004fa560  004fa560

undefined4 __fastcall FUN_004fa560(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
    iVar2 = FUN_0047e420();
    uVar3 = FUN_005dcb00(*(undefined4 *)(*(int *)(iVar1 + 4 + iVar2 * 4) + 4));
  }
  return uVar3;
}

