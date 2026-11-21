// FUN_0056ebc0  0056ebc0

void __fastcall FUN_0056ebc0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0xa4);
  FUN_0056e0a0(0);
  cVar2 = FUN_0056f160();
  if (cVar2 == '\0') {
    FUN_0056e480();
    FUN_0056e110(0);
  }
  else {
    iVar3 = FUN_0056f0d0();
    if (iVar3 < 8) {
      local_8 = *(int *)(&DAT_007488f0 + iVar3 * 4) * iVar1;
      FUN_0056e230();
      if ((*(char *)(param_1 + 0x99) != '\0') && (iVar3 != 1)) {
        FUN_0056f560(iVar3);
      }
    }
    FUN_0056e110(local_8);
    if ((iVar3 == 8) && (*(char *)(param_1 + 0x99) == '\0')) {
      FUN_0056f3e0();
    }
    if (iVar3 == 9) {
      FUN_0056f870();
    }
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    FUN_0056e340();
    if (*(char *)(param_1 + 0x99) == '\0') {
      FUN_0056f870();
      FUN_0056e3e0();
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x2c) + 400) != '\0') {
    *(undefined1 *)(param_1 + 0x99) = 0;
  }
  (**(code **)(**(int **)(DAT_0079344c + 4) + 4))(1);
  (**(code **)(**(int **)(DAT_0079344c + 4) + 0x1c))(0);
  return;
}

