// FUN_00676a50  00676a50

void __fastcall FUN_00676a50(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00637670();
  (**(code **)(*DAT_0162ee84 + 0x3c8))(param_1,3,*(undefined4 *)(param_1 + 0x1c0));
  FUN_0063b0a0();
  if (DAT_016306b0 == 0) {
    iVar2 = FUN_0063aac0();
    if (cVar1 != *(char *)(iVar2 + 0x25d)) {
      iVar2 = FUN_0063aac0();
      if (*(char *)(iVar2 + 0x25d) == '\0') {
        (**(code **)(*DAT_0162ee84 + 0x88))();
      }
      else {
        (**(code **)(*DAT_0162ee84 + 900))();
      }
    }
  }
  FUN_0064f740();
  return;
}

