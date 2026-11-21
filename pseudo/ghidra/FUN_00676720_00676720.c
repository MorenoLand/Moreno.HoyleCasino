// FUN_00676720  00676720

void __fastcall FUN_00676720(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 0xffffffff;
  uVar9 = 0x12;
  uVar8 = 1;
  uVar7 = 3;
  uVar6 = 3;
  uVar5 = 0x19;
  uVar4 = 0x1dd;
  uVar3 = 0x49;
  uVar1 = FUN_00630f40("SID_SHELL_SETUPWIZARD",0x49,0x1dd,0x19,3,3,1,0x12,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar7 = 3;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_BACK",0x48,0x4b,0x4a,0xffffffff,3);
  FUN_005f9de0(0,0,0x30d4de,0xd6,0x17f,1,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7);
  piVar2 = (int *)FUN_005fb300(0);
  (**(code **)(*piVar2 + 0xd0))();
  uVar7 = 4;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_NEXT",0x48,0x4b,0x4a,0xffffffff,4);
  FUN_005f9de0(0,1,0x30d4de,0x130,0x17f,1,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar7 = 0xd;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_DONE",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,2,0x30d4e5,0x18a,0x17f,1,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*DAT_0162ee84 + 0x3bc))(param_1,3,*(undefined4 *)(param_1 + 0x1c0));
  return;
}

