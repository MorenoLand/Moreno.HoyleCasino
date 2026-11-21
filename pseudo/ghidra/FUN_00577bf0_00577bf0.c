// FUN_00577bf0  00577bf0

void __fastcall FUN_00577bf0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((char)param_1[6] != '\0') {
    uVar1 = FUN_00577c60();
    uVar2 = FUN_005eb610();
    if ((uVar2 & 0xff) != uVar1) {
      if (((int)uVar1 < 0x100) && (0 < (int)uVar1)) {
        FUN_005eb5d0(uVar1 & 0xff);
      }
      else {
        (**(code **)(*param_1 + 0x14))();
      }
    }
  }
  return;
}

