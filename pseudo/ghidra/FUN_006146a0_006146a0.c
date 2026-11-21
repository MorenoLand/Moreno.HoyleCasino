// FUN_006146a0  006146a0

uint __thiscall FUN_006146a0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint local_8;
  
  if (param_2 == 0) {
    FUN_005e9f20("limit","..\\scilib\\platform\\random.cpp",0x40);
    uVar1 = 0;
  }
  else {
    for (local_8 = 1; local_8 < param_2; local_8 = local_8 << 1 | 1) {
    }
    do {
      uVar1 = FUN_00614710(param_1);
      uVar1 = uVar1 & local_8;
    } while (param_2 <= uVar1);
  }
  return uVar1;
}

