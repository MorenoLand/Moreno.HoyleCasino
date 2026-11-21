// FUN_005f87d0  005f87d0

void __fastcall FUN_005f87d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_005e9f20("false","..\\scilib\\sciplane.cpp",0x15f);
  }
  else {
    cVar1 = FUN_005f88f0();
    if (cVar1 == '\0') {
      FUN_005f8720();
      cVar1 = FUN_005f8910();
      if ((cVar1 != '\0') && (iVar2 = FUN_005f41f0(), iVar2 == param_1)) {
        FUN_005f41c0(0);
      }
      cVar1 = FUN_005f8970();
      if ((cVar1 != '\0') && (cVar1 = FUN_005f8910(), cVar1 != '\0')) {
        iVar2 = FUN_005f3fe0();
        if (iVar2 == param_1) {
          FUN_005f3f90(*(undefined4 *)(param_1 + 0x170));
        }
        else {
          (**(code **)(*DAT_015e55e8 + 0x78))(param_1,*(undefined4 *)(param_1 + 0x170));
        }
        *(undefined4 *)(param_1 + 0x170) = 0;
      }
      *(undefined1 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
      *(undefined4 *)(param_1 + 300) = 0xffffffff;
      FUN_005f9a80();
    }
  }
  return;
}

