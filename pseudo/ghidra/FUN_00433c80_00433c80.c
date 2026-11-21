// FUN_00433c80  00433c80

void FUN_00433c80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_var;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40 = FUN_0063aae0(4);
  local_58 = FUN_0064c8a0(0,0,extraout_var);
  local_50 = local_58;
  local_60 = FUN_0064c8a0(0,0);
  local_48 = local_60;
  FUN_005e0690(param_1,param_2);
  iVar1 = FUN_005f3bf0();
  if (iVar1 == 4) {
    FUN_005e0c40(param_2,&local_50,&local_48);
  }
  uVar10 = 1;
  uVar9 = 1;
  uVar8 = 1;
  puVar7 = local_3c;
  puVar5 = local_78;
  puVar3 = local_70;
  uVar4 = local_50;
  uVar6 = local_48;
  FUN_0064c5c0(local_68,*(undefined4 *)(local_40 + 0x10),*(undefined4 *)(local_40 + 0x14));
  FUN_0064c5c0(puVar3,uVar4);
  puVar2 = (undefined4 *)FUN_0064c5c0(puVar5,uVar6);
  FUN_0064c8d0(*puVar2,puVar2[1],puVar7,uVar8,uVar9,uVar10);
  puVar7 = local_3c;
  uVar8 = FUN_00630f40("SID_CASINOSTATS_TOTALNET_COLON",puVar7);
  FUN_00654390(0,uVar8,puVar7);
  uVar10 = 1;
  uVar9 = 1;
  uVar8 = 1;
  puVar7 = local_3c;
  puVar2 = (undefined4 *)FUN_0064c5c0(local_80,local_50);
  FUN_0064c8d0(*puVar2,puVar2[1],puVar7,uVar8,uVar9,uVar10);
  puVar7 = local_3c;
  uVar8 = FUN_00630f40("SID_CASINOSTATS_GAMEPLAYNET_COLON",puVar7);
  FUN_00654390(1,uVar8,puVar7);
  uVar10 = 1;
  uVar9 = 1;
  uVar8 = 1;
  puVar7 = local_3c;
  puVar2 = (undefined4 *)FUN_0064c5c0(local_88,local_48);
  FUN_0064c8d0(*puVar2,puVar2[1],puVar7,uVar8,uVar9,uVar10);
  puVar7 = local_3c;
  uVar8 = FUN_00630f40("SID_CASINOSTATS_TOURNAMENTNET_COLON",puVar7);
  FUN_00654390(2,uVar8,puVar7);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

