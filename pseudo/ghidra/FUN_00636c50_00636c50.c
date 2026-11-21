// FUN_00636c50  00636c50

undefined4 FUN_00636c50(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_c;
  
  iVar2 = FUN_00636610();
  iVar3 = FUN_00636690();
  if (iVar2 != iVar3) {
    for (local_c = 0; local_c < 1000; local_c = local_c + 1) {
      uVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      uVar4 = FUN_0062fbf0(uVar4);
      cVar1 = FUN_00638ff0(uVar4);
      if (cVar1 != '\0') {
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}

