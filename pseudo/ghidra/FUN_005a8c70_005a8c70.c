// FUN_005a8c70  005a8c70

void FUN_005a8c70(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_4c;
  char *local_44 [4];
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c [10];
  
  local_44[0] = "SID_ROYALMATCH_STAND";
  local_44[1] = "SID_ROYALMATCH_HIT";
  local_44[2] = "SID_ROYALMATCH_DOUBLE";
  local_44[3] = "SID_ROYALMATCH_SPLIT";
  local_34 = "SID_ROYALMATCH_SURRENDER";
  local_2c[0] = 0x20;
  local_2c[1] = 0x22;
  local_2c[2] = 0x20;
  local_2c[3] = 0x40;
  local_2c[4] = 0x20;
  local_2c[5] = 0x5e;
  local_2c[6] = 0x20;
  local_2c[7] = 0x7c;
  local_2c[8] = 5;
  local_2c[9] = 0x9a;
  local_30 = FUN_005b4f00();
  uVar2 = FUN_005b4e50(local_30);
  FUN_005f83d0(0x1396,0);
  FUN_005f89d0(0x14);
  uVar8 = 3;
  uVar6 = 0;
  uVar5 = 0x49;
  uVar3 = FUN_00630f40("SID_ROYALMATCH_ACTIONS",0x49,0,3);
  FUN_005f73e0(uVar3,uVar5,uVar6,uVar8);
  for (local_4c = 0; local_4c < 5; local_4c = local_4c + 1) {
    uVar9 = 0;
    uVar7 = 0xffffffff;
    uVar8 = 0x4a;
    uVar6 = 0x4b;
    uVar5 = 0x48;
    uVar3 = FUN_00630f40(local_44[local_4c],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_4c,(local_4c == 4) + 0x30d4de,local_2c[local_4c * 2],
                 local_2c[local_4c * 2 + 1],2,uVar3,uVar5,uVar6,uVar8,uVar7,uVar9);
    uVar3 = 1;
    FUN_005fb300(local_4c);
    FUN_005eb700(uVar3);
  }
  cVar1 = FUN_005b6170(local_30);
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb300(1);
    (**(code **)(*piVar4 + 0xd0))();
  }
  cVar1 = FUN_005b3430(local_30);
  if (cVar1 == '\0') {
    piVar4 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar4 + 0xd0))();
  }
  cVar1 = FUN_005b3710(local_30,uVar2);
  if (cVar1 == '\0') {
    piVar4 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar4 + 0xd0))();
  }
  cVar1 = FUN_005b37f0(local_30);
  if (cVar1 == '\0') {
    piVar4 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar4 + 0xd0))();
  }
  return;
}

