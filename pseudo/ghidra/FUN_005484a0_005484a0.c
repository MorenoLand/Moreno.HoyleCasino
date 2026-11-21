// FUN_005484a0  005484a0

void FUN_005484a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_var;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40 = FUN_0063aae0(0x10);
  local_58 = FUN_0064c8a0(0,0,extraout_var);
  local_50 = local_58;
  local_60 = FUN_0064c8a0(0,0);
  local_48 = local_60;
  FUN_005e0690(param_1,param_2);
  iVar1 = FUN_005f3bf0();
  if (iVar1 == 0x10) {
    FUN_005e0c40(param_2,&local_50,&local_48);
  }
  uVar6 = 1;
  uVar5 = 1;
  uVar4 = 1;
  puVar3 = local_3c;
  puVar2 = (undefined4 *)FUN_0064c5c0(local_68,local_50);
  FUN_0064c8d0(*puVar2,puVar2[1],puVar3,uVar4,uVar5,uVar6);
  puVar3 = local_3c;
  uVar4 = FUN_00630f40("SID_CASINOSTATS_TOTALNET_COLON",puVar3);
  FUN_00654390(0,uVar4,puVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

