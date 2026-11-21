// FUN_005abe70  005abe70

void __fastcall FUN_005abe70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_005f83d0(0x30d4f3,0);
  FUN_005f89d0(0x14);
  uVar8 = 3;
  uVar6 = 0;
  uVar4 = 0x49;
  uVar1 = FUN_00630f40("SID_ROYALMATCH_INSURANCE",0x49,0,3);
  FUN_005f73e0(uVar1,uVar4,uVar6,uVar8);
  uVar9 = 0xffffffff;
  uVar7 = 0x30;
  uVar5 = 1;
  uVar3 = 0x26;
  uVar2 = 0x12;
  uVar8 = 0x55;
  uVar6 = 0xd9;
  uVar4 = 0x1f;
  uVar1 = FUN_00630f40("SID_ROYALMATCH_WANTINSURANCE",0x1f,0xd9,0x55,0x12,0x26,1,0x30,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar4,uVar6,uVar8,uVar2,uVar3,uVar5,uVar7,uVar9);
  uVar3 = 0x79;
  uVar2 = 0xffffffff;
  uVar8 = 0x4a;
  uVar6 = 0x4b;
  uVar4 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_YES",0x48,0x4b,0x4a,0xffffffff,0x79);
  FUN_005f9de0(0,0,0x30d4de,0x2d,0x7d,2,uVar1,uVar4,uVar6,uVar8,uVar2,uVar3);
  uVar3 = 0x6e;
  uVar2 = 0xffffffff;
  uVar8 = 0x4a;
  uVar6 = 0x4b;
  uVar4 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_NO",0x48,0x4b,0x4a,0xffffffff,0x6e);
  FUN_005f9de0(0,1,0x30d4de,0x84,0x7d,2,uVar1,uVar4,uVar6,uVar8,uVar2,uVar3);
  uVar1 = FUN_005f9ce0(0,0,0x1398,0x75,0x89,3,0,0xff,0);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  FUN_005eb5d0(100);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x70))();
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  return;
}

