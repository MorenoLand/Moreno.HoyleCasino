// FUN_00662ce0  00662ce0

void FUN_00662ce0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_var;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  FUN_005fb4c0(0x67);
  iVar4 = extraout_var;
  iVar1 = FUN_00606490();
  iVar2 = FUN_00661500(iVar1);
  (**(code **)(**(int **)(iVar4 + 0x84) + 0x70))(iVar4,iVar2);
  (**(code **)(**(int **)(iVar4 + 0x88) + 0x70))();
  local_8 = 0;
  if (iVar1 < 1) {
    local_20 = 0x1a;
    local_1c = 0x91;
    local_14 = 200;
    local_10 = 0x99;
  }
  else {
    local_20 = 0x131;
    local_1c = 0xe8;
    local_14 = 0x125;
    local_10 = 0xe0;
    local_8 = -4;
  }
  (**(code **)(**(int **)(iVar4 + 0x84) + 0x44))(local_20 + iVar2,local_1c);
  FUN_005ecc60(local_14);
  FUN_005eccb0(100);
  iVar1 = (**(code **)(**(int **)(iVar4 + 0x84) + 0x54))();
  uVar3 = (**(code **)(**(int **)(iVar4 + 0x84) + 0x4c))(iVar1 + local_10 + local_8);
  (**(code **)(**(int **)(iVar4 + 0x88) + 0x44))(uVar3);
  return;
}

