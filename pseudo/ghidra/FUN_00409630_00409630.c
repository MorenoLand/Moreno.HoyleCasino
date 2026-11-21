// FUN_00409630  00409630

void __fastcall FUN_00409630(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = FUN_00408790();
  if (cVar1 != '\0') {
    local_10 = -1;
    uVar2 = FUN_004087f0();
    cVar1 = FUN_004096c0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00409760();
      if (cVar1 != '\0') {
        local_10 = 8;
      }
    }
    else {
      local_10 = 9;
    }
    if (local_10 != -1) {
      *(int *)(param_1 + 0x10e0) = local_10;
      *(undefined4 *)(param_1 + 0x10e4) = uVar2;
    }
  }
  return;
}

