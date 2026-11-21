// FUN_005ce2e0  005ce2e0

void FUN_005ce2e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_var;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char local_9;
  
  uVar11 = 0x36;
  uVar12 = 0x19;
  uVar13 = 0;
  iVar2 = (**(code **)(*DAT_0162ee84 + 0xe8))();
  iVar10 = extraout_var;
  if (iVar2 == 0) {
    local_9 = '\0';
  }
  else {
    piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
    iVar2 = (**(code **)(*piVar3 + 0x28))(piVar3,iVar10,uVar11,uVar12,uVar13);
    local_9 = '\x01' - (iVar2 != 1);
  }
  uVar9 = 0xffffffff;
  uVar8 = 0x12;
  uVar7 = 1;
  uVar6 = 3;
  uVar5 = 3;
  uVar4 = 0x19;
  uVar13 = 0x142;
  uVar12 = 0x49;
  uVar11 = FUN_00630f40("SID_CASINO_CANTCOVERMINIMUM",0x49,0x142,0x19,3,3,1,0x12,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar11,uVar12,uVar13,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  *(undefined4 *)(iVar10 + 0x1bc) = param_1;
  FUN_005fa880(0,0,0x149,1,3,0x94,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x149,1,4,0x95,1,0xff,0xff,0xff,0,0,0);
  uVar6 = 0xd;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar13 = 0x4b;
  uVar12 = 0x48;
  uVar11 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4de,0x7a,0x9b,1,uVar11,uVar12,uVar13,uVar4,uVar5,uVar6);
  cVar1 = FUN_005d6cd0();
  if (cVar1 != '\0') {
    uVar7 = 0;
    uVar6 = 0x14;
    uVar5 = 0xffffffff;
    uVar4 = 0x42;
    uVar13 = 0x45;
    uVar12 = 0x1f;
    uVar11 = FUN_00630f40("SID_CASINO_TAKELOAN",0x1f,0x45,0x42,0xffffffff,0x14,0);
    FUN_005f9ff0(0,0,1,0,0x30d4ca,0x17,0x36,1,uVar11,uVar12,uVar13,uVar4,uVar5,uVar6,uVar7);
  }
  uVar7 = 0;
  uVar6 = 0x14;
  uVar5 = 0xffffffff;
  uVar4 = 0x42;
  uVar13 = 0x45;
  uVar12 = 0x1f;
  uVar11 = FUN_00630f40("SID_CASINO_RESETCHARACTER",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ff0(0,0,2,0,0x30d4ca,0x17,0x4f,1,uVar11,uVar12,uVar13,uVar4,uVar5,uVar6,uVar7);
  if (local_9 == '\0') {
    uVar7 = 0;
    uVar6 = 0x14;
    uVar5 = 0xffffffff;
    uVar4 = 0x42;
    uVar13 = 0x45;
    uVar12 = 0x1f;
    uVar11 = FUN_00630f40("SID_CASINO_SITOUT",0x1f,0x45,0x42,0xffffffff,0x14,0);
    FUN_005f9ff0(0,0,3,0,0x30d4ca,0x17,0x68,1,uVar11,uVar12,uVar13,uVar4,uVar5,uVar6,uVar7);
    FUN_006065d0(3);
  }
  else {
    uVar7 = 0;
    uVar6 = 0x14;
    uVar5 = 0xffffffff;
    uVar4 = 0x42;
    uVar13 = 0x45;
    uVar12 = 0x1f;
    uVar11 = FUN_00630f40("SID_CASINO_GOTOCASINOFLOOR",0x1f,0x45,0x42,0xffffffff,0x14,0);
    FUN_005f9ff0(0,0,4,0,0x30d4ca,0x17,0x68,1,uVar11,uVar12,uVar13,uVar4,uVar5,uVar6,uVar7);
    FUN_006065d0(4);
  }
  return;
}

