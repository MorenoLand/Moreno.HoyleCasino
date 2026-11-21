// FUN_005e3cf0  005e3cf0

void __fastcall FUN_005e3cf0(undefined4 param_1)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar13 = 0;
  uVar11 = 0x14;
  uVar9 = 0xffffffff;
  uVar7 = 0x42;
  uVar5 = 0x45;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_CASINO_SHOWBETAMOUNTS",0x1f,0x45,0x42,0xffffffff,0x14,0,param_1);
  FUN_005f9ef0(0,3200000,0x30d4c9,0xe,0xc3,1,uVar1,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13);
  uVar13 = 0;
  uVar11 = 0x14;
  uVar9 = 0xffffffff;
  uVar7 = 0x42;
  uVar5 = 0x45;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_CASINO_PLAYALONE",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ef0(0,0x30d401,0x30d4c9,0xe,0xdc,1,uVar1,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13);
  uVar14 = 0;
  uVar12 = 0xff;
  uVar10 = 0xff;
  uVar8 = 0xff;
  uVar6 = 0xa1;
  uVar4 = 0x7c;
  uVar2 = 0x78;
  uVar13 = 1;
  uVar11 = 0xb2;
  uVar9 = 9;
  uVar7 = 0x5c;
  uVar5 = 0xf3;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_GAMEPLAY",0x48,0xf3,0x5c,9,0xb2,1,0x78,0x7c,0xa1,0xff,0xff,0xff,0)
  ;
  FUN_005fa790(0,0xffffffff,uVar1,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar2,uVar4,uVar6,uVar8,
               uVar10,uVar12,uVar14);
  FUN_00654a60();
  return;
}

