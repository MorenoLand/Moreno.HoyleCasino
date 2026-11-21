// FUN_0066f610  0066f610

void __thiscall FUN_0066f610(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_ec [52];
  int local_b8;
  int *local_50;
  char local_4c [52];
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_50 = (int *)0x0;
  uVar2 = FUN_005f3bf0();
  local_50 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar2);
  FUN_005ecc60(0x127);
  FUN_005eccb0(0x11);
  uVar2 = (**(code **)(*local_50 + 0xe4))();
  uVar2 = (**(code **)(*local_50 + 0xe0))(uVar2);
  (**(code **)(*param_1 + 0x44))(uVar2);
  uVar4 = CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  uVar3 = 0xffffffff;
  uVar2 = (**(code **)(*local_50 + 0xe8))(0xffffffff,uVar4);
  FUN_005ecd00(uVar2,uVar3,uVar4);
  if ((param_1[0x8d] == -1) || (param_2 != '\0')) {
    cVar1 = FUN_00633ea0(local_ec,1);
    if (cVar1 == '\0') goto LAB_0066f7f8;
    strcpy((char *)(param_1 + 0x74),local_ec);
    param_1[0x8d] = local_b8;
  }
  FUN_005ef310(0x12);
  (**(code **)(*local_50 + 0xd8))(param_1[0x8d],local_18);
  sprintf(local_4c,"%s   %s",param_1 + 0x74,local_18);
  FUN_005ee710(local_4c);
  FUN_005f6270();
  if (param_1[0x8e] != 0) {
    uVar2 = (**(code **)(*local_50 + 0xec))();
    FUN_005eaf00(uVar2);
    (**(code **)(*(int *)param_1[0x8e] + 0x74))();
  }
LAB_0066f7f8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

