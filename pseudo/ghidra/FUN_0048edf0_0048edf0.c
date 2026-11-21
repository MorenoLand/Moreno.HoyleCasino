// FUN_0048edf0  0048edf0

void __thiscall FUN_0048edf0(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_40;
  char local_3f;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  char local_39;
  short local_38;
  byte local_31;
  short local_30;
  byte local_29;
  undefined4 local_28;
  short local_24;
  short local_20;
  short local_1c [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0603;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(short *)(param_1 + 4) != 0) &&
     ((*(short *)(param_1 + 4) < 3 || (5 < *(short *)(param_1 + 4))))) {
    FUN_005e9f20("(shSize==0) || ((shSize>=3) && (shSize<=5))","..\\Casino\\PokerHand.cpp",0xb1c,
                 DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    local_1c[local_24] = 0;
  }
  for (local_20 = 0; local_20 < *(short *)(param_1 + 4); local_20 = local_20 + 1) {
    uVar3 = DAT_0079076c;
    FUN_00464400(&local_3a);
    cVar1 = FUN_004640b0(uVar3);
    if (cVar1 == '\0') {
      uVar3 = DAT_00790754;
      FUN_00464400(&local_3b);
      cVar1 = FUN_004640b0(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_00790764;
        FUN_00464400(&local_3c);
        cVar1 = FUN_004640b0(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00790770;
          FUN_00464400(&local_3d);
          cVar1 = FUN_004640b0(uVar3);
          if (cVar1 != '\0') {
            local_1c[3] = local_1c[3] + 1;
          }
        }
        else {
          local_1c[2] = local_1c[2] + 1;
        }
      }
      else {
        local_1c[1] = local_1c[1] + 1;
      }
    }
    else {
      local_1c[0] = local_1c[0] + 1;
    }
  }
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    if (2 < local_1c[local_24]) {
      local_28 = 0;
      if (local_24 == 0) {
        local_28 = DAT_0079076c;
      }
      else if (local_24 == 1) {
        local_28 = DAT_00790754;
      }
      else if (local_24 == 2) {
        local_28 = DAT_00790764;
      }
      else if (local_24 == 3) {
        local_28 = DAT_00790770;
      }
      for (local_29 = *DAT_007913c8; *DAT_007913a4 <= local_29; local_29 = local_29 - 1) {
        local_38 = 0;
        local_30 = 0;
        for (local_31 = 0; local_31 < 5; local_31 = local_31 + 1) {
          local_3f = local_29 - local_31;
          uVar3 = local_28;
          uVar2 = FUN_004a1f30(&local_40);
          uVar3 = FUN_00464130(uVar2,uVar3);
          local_8 = 0;
          local_39 = FUN_00484ba0(uVar3);
          local_8 = 0xffffffff;
          FUN_00464210();
          if (param_2 == '\0') {
            if (local_39 == '\0') {
              local_30 = local_30 + 1;
            }
            else {
              if (2 < local_38) break;
              local_38 = local_38 + 1;
            }
          }
          else if (local_39 == '\0') {
            local_30 = local_30 + 1;
          }
          else {
            local_38 = local_38 + 1;
          }
        }
        if ((local_30 < 3) && (local_31 == 5)) goto LAB_0048f12e;
      }
    }
  }
LAB_0048f12e:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

