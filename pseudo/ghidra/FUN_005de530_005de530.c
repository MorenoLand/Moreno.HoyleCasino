// FUN_005de530  005de530

undefined4 FUN_005de530(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_005da830();
  if (cVar1 != '\0') {
    iVar2 = FUN_005d5a50();
    iVar3 = FUN_005da880();
    if (iVar2 < iVar3) {
      return 1;
    }
    uVar4 = FUN_00636950(param_1);
    return uVar4;
  }
  if (DAT_007947e4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_007947e4 + 0x2e8))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == 1) {
      return 1;
    }
  }
  uVar4 = FUN_00636950(param_1);
  return uVar4;
}

