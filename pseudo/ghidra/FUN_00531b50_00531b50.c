// FUN_00531b50  00531b50

void __thiscall FUN_00531b50(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    *(undefined4 *)(param_1 + 0x1a4) = param_3;
    uVar1 = FUN_00630f40("SID_SLOTMACHINES_WINNER");
    FUN_00531c90(uVar1);
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  else if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    *(undefined4 *)(param_1 + 0x1a4) = param_3;
    uVar1 = FUN_00630f40("SID_SLOTMACHINES_ATTENTION");
    FUN_00531c90(uVar1);
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  else if (param_2 == 2) {
    FUN_00531e00();
    sprintf(local_18,"%s",param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    *(undefined4 *)(param_1 + 0x1a4) = param_3;
    FUN_00531c90(local_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

