// FUN_00643930  00643930

void __thiscall FUN_00643930(int param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  char local_750;
  char local_74c;
  int local_744;
  undefined2 local_740;
  int local_73c;
  char local_735;
  undefined1 auStack_734 [1536];
  int local_134;
  char local_12d;
  char local_12c [256];
  uint local_2c;
  int local_28;
  int local_24;
  int aiStack_20 [6];
  int local_8;
  
  local_2c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_24 = *(int *)(param_1 + 0x80c) + -1;
  if (6 < param_2) {
    FUN_005e9f20("nHands <= 6","..\\casinoShell\\card.cpp",0x416);
  }
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    sprintf(local_12c,"%sHand%d",param_4,local_8);
    (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))
              (local_12c,&PTR_006b27f8,auStack_734 + local_8 * 0xff,0xff);
    aiStack_20[local_8] = 0;
  }
  if (param_5 == '\0') {
    for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
      for (local_73c = 0; local_73c < param_3; local_73c = local_73c + 1) {
        FUN_00641620(auStack_734 + local_28 * 0xff,aiStack_20[local_28],&local_134,&local_744);
        if (((local_134 == 0) || (local_744 == 0)) && (local_134 != 0xf)) {
          local_750 = '\0';
        }
        else {
          local_750 = '\x01';
        }
        local_735 = local_750;
        if (local_750 != '\0') {
          uVar1 = FUN_00641230(local_134,local_744);
          local_740 = (undefined2)uVar1;
          FUN_00643880(uVar1,local_24);
        }
        aiStack_20[local_28] = aiStack_20[local_28] + 1;
        local_24 = local_24 + -1;
      }
    }
  }
  else {
    for (local_73c = 0; local_73c < param_3; local_73c = local_73c + 1) {
      for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
        FUN_00641620(auStack_734 + local_28 * 0xff,aiStack_20[local_28],&local_134,&local_744);
        if (((local_134 == 0) || (local_744 == 0)) && (local_134 != 0xf)) {
          local_74c = '\0';
        }
        else {
          local_74c = '\x01';
        }
        local_735 = local_74c;
        if (local_74c != '\0') {
          uVar1 = FUN_00641230(local_134,local_744);
          local_740 = (undefined2)uVar1;
          local_12d = FUN_00643880(uVar1,local_24);
          if (local_12d == '\0') {
            if (local_134 == 0xe) {
              local_134 = 1;
            }
            else if (local_134 == 1) {
              local_134 = 0xe;
            }
            local_740 = FUN_00641230(local_134,local_744);
            local_12d = FUN_00643880(CONCAT22(extraout_var,local_740),local_24);
          }
          if (local_12d == '\0') {
            FUN_005e9f20("success","..\\casinoShell\\card.cpp",0x441);
          }
        }
        aiStack_20[local_28] = aiStack_20[local_28] + 1;
        local_24 = local_24 + -1;
      }
    }
  }
  __security_check_cookie(local_2c ^ (uint)&stack0xfffffffc);
  return;
}

