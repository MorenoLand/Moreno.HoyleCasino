// FUN_004fa370  004fa370

void __fastcall FUN_004fa370(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005d8020();
  if ((*(int *)(param_1 + 0xa4) == 0) || (*(char *)(*(int *)(param_1 + 0xa4) + 0xe8) == '\0')) {
    if (DAT_00791ebc != 0) {
      FUN_005d8a20(0,0xffffffff,0);
      DAT_00791ebc = 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4);
    iVar2 = FUN_0047e420();
    if (DAT_00791ebc != *(int *)(iVar1 + 4 + iVar2 * 4)) {
      iVar1 = *(int *)(param_1 + 0xa4);
      iVar2 = FUN_0047e420();
      DAT_00791ebc = *(int *)(iVar1 + 4 + iVar2 * 4);
      FUN_005d8a20(1,*(undefined4 *)(DAT_00791ebc + 4),0);
    }
  }
  return;
}

