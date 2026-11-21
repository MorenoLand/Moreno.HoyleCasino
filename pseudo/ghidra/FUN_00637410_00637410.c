// FUN_00637410  00637410

void __fastcall FUN_00637410(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = -1;
  if ((DAT_0162ee80 == (int *)0x0) || (cVar1 = (**(code **)(*DAT_0162ee80 + 0xac))(), cVar1 == '\0')
     ) {
    cVar1 = FUN_00637670();
    if (cVar1 != '\0') {
      iVar2 = FUN_005f3bf0();
      if (iVar2 == 0x3ea) {
        local_8 = (**(code **)(*DAT_0162ee84 + 0x188))();
      }
      iVar2 = FUN_005f3bf0();
      iVar3 = (**(code **)(*DAT_0162ee84 + 600))();
      if ((iVar2 == iVar3) && (cVar1 = FUN_00636760(), cVar1 == '\0')) {
        local_8 = (**(code **)(*DAT_0162ee84 + 0x18c))();
      }
      cVar1 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
      if (cVar1 != '\0') {
        local_8 = (**(code **)(*param_1 + 0x388))();
      }
    }
    if (((local_8 == -1) || (cVar1 = FUN_005f4720(local_8), cVar1 == '\0')) &&
       ((**(code **)(*param_1 + 0x88))(), local_8 != -1)) {
      FUN_005f4620(local_8,0x3f800000);
    }
  }
  return;
}

