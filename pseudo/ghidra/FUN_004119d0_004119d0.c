// FUN_004119d0  004119d0

void FUN_004119d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_54;
  int local_4c;
  int local_48;
  char *local_44 [4];
  char *local_34;
  int local_30;
  undefined4 local_2c [10];
  
  local_44[0] = "SID_BLACKJACK_STAND";
  local_44[1] = "SID_BLACKJACK_HIT";
  local_44[2] = "SID_BLACKJACK_DOUBLE";
  local_44[3] = "SID_BLACKJACK_SPLIT";
  local_34 = "SID_BLACKJACK_SURRENDER";
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
  local_30 = *(int *)(DAT_00790324 + 0x4d0);
  if (local_30 == -1) {
    local_4c = -1;
  }
  else {
    if (local_30 == 4) {
      local_54 = 0;
    }
    else {
      local_54 = (int)*(char *)(DAT_00790324 + 0x119 + local_30 * 0x118);
    }
    local_4c = local_54;
  }
  FUN_005f83d0(0x1396,0);
  FUN_005f89d0(0x14);
  uVar7 = 3;
  uVar5 = 0;
  uVar4 = 0x49;
  uVar2 = FUN_00630f40("SID_BLACKJACK_ACTIONS",0x49,0,3);
  FUN_005f73e0(uVar2,uVar4,uVar5,uVar7);
  for (local_48 = 0; local_48 < 5; local_48 = local_48 + 1) {
    uVar8 = 0;
    uVar6 = 0xffffffff;
    uVar7 = 0x4a;
    uVar5 = 0x4b;
    uVar4 = 0x48;
    uVar2 = FUN_00630f40(local_44[local_48],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_48,(local_48 == 4) + 0x30d4de,local_2c[local_48 * 2],
                 local_2c[local_48 * 2 + 1],2,uVar2,uVar4,uVar5,uVar7,uVar6,uVar8);
    uVar2 = 1;
    FUN_005fb300(local_48);
    FUN_005eb700(uVar2);
  }
  if (*(char *)(DAT_00790324 + 0x118 + local_30 * 0x118) != '\0') {
    piVar3 = (int *)FUN_005fb300(1);
    (**(code **)(*piVar3 + 0xd0))();
  }
  cVar1 = FUN_0041a960(local_30);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar3 + 0xd0))();
  }
  cVar1 = FUN_0041ade0(local_30,local_4c);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar3 + 0xd0))();
  }
  cVar1 = FUN_0041aec0(local_30);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar3 + 0xd0))();
  }
  return;
}

