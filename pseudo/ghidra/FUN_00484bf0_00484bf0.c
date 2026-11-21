// FUN_00484bf0  00484bf0

void __fastcall FUN_00484bf0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  short local_1c;
  short local_18;
  short local_14 [4];
  uint local_c;
  short local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    local_14[local_18] = 0;
  }
  for (local_8 = 0; local_8 < *(short *)(param_1 + 4); local_8 = local_8 + 1) {
    uVar2 = DAT_0079076c;
    FUN_00464400(&local_1d);
    cVar1 = FUN_004640b0(uVar2);
    if (cVar1 == '\0') {
      uVar2 = DAT_00790754;
      FUN_00464400(&local_1e);
      cVar1 = FUN_004640b0(uVar2);
      if (cVar1 == '\0') {
        uVar2 = DAT_00790764;
        FUN_00464400(&local_1f);
        cVar1 = FUN_004640b0(uVar2);
        if (cVar1 == '\0') {
          uVar2 = DAT_00790770;
          FUN_00464400(&local_20);
          cVar1 = FUN_004640b0(uVar2);
          if (cVar1 != '\0') {
            local_14[3] = local_14[3] + 1;
          }
        }
        else {
          local_14[2] = local_14[2] + 1;
        }
      }
      else {
        local_14[1] = local_14[1] + 1;
      }
    }
    else {
      local_14[0] = local_14[0] + 1;
    }
  }
  local_1c = 0;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (local_1c < local_14[local_18]) {
      local_1c = local_14[local_18];
    }
  }
  if ((*(short *)(param_1 + 4) != 0) && (local_1c < 1)) {
    FUN_005e9f20("(shSize == 0) || (shReturn > 0)","..\\Casino\\PokerHand.cpp",0xde);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

