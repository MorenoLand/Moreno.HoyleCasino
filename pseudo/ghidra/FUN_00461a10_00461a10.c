// FUN_00461a10  00461a10

void __thiscall FUN_00461a10(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  int local_124;
  int local_120;
  undefined8 local_11c;
  char local_111;
  undefined4 local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_138 = FUN_0064c8a0(0,0);
  iVar4 = *(int *)(param_1 + 4) + 0x48 + param_2 * 0x20;
  local_124 = *(int *)(iVar4 + 8);
  local_120 = *(int *)(iVar4 + 0xc);
  local_128 = 0;
  local_110 = 0;
  local_111 = '\x01';
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + param_2 + 0xfe) = 1;
  }
  local_11c = local_138;
  cVar1 = FUN_004619f0(param_2);
  if (cVar1 != '\0') {
    if (param_3 == 0) {
      local_128 = FUN_004574a0(param_2);
      iVar4 = *(int *)(param_1 + 4) + 0x48 + param_2 * 0x20;
      local_140 = *(undefined4 *)(iVar4 + 8);
      local_13c = *(undefined4 *)(iVar4 + 0xc);
      (**(code **)(**(int **)(param_1 + 4) + 0xb8))(local_140,local_13c,param_2,2);
      if (local_128 < 0) {
        local_128 = 0;
        local_111 = '\0';
      }
      local_148 = FUN_0064c8a0(local_128 * local_124,(local_128 * local_120) / 100);
      local_11c = local_148;
      sprintf(local_10c,"Player %d wins FORTUNE PAYOUT=%d\n",param_2,local_128);
    }
    else if (param_3 == 1) {
      local_158 = FUN_0064c8a0(5,0);
      iVar4 = *(int *)(param_1 + 4) + 0x48 + param_2 * 0x20;
      local_150 = *(undefined4 *)(iVar4 + 0x10);
      local_14c = *(undefined4 *)(iVar4 + 0x14);
      cVar1 = FUN_0064c7a0(local_158);
      if (cVar1 != '\0') {
        local_110 = FUN_00457600(param_2);
      }
      local_160 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 4) + 0xb8))(local_160,param_2,2);
      local_168 = FUN_0064c8a0(local_110,0);
      local_11c = local_168;
      sprintf(local_10c,"Player %d wins ENVY BONUS=%d\n",param_2,local_110);
    }
    FUN_0062fde0(local_10c);
    local_170 = FUN_0064c8a0(0,0);
    cVar1 = FUN_0064c6e0(local_170);
    if (cVar1 != '\0') {
      uVar3 = local_11c;
      FUN_005dcb00(param_2,local_11c);
      FUN_005d5fb0(uVar3);
      uVar3 = local_11c;
      FUN_005dcb00(param_2,local_11c);
      FUN_005d5cf0(uVar3);
      uVar5 = 1;
      iVar4 = param_2;
      puVar2 = (undefined4 *)FUN_0064c5c0(local_178,local_124,local_120);
      (**(code **)(**(int **)(param_1 + 4) + 0xb8))(*puVar2,puVar2[1],iVar4,uVar5);
    }
    if (param_3 == 0) {
      if (local_111 == '\0') {
        uVar3 = FUN_0064c8a0(-local_124,-local_120);
        local_130 = uVar3;
        FUN_005dcb00(param_2,uVar3);
        FUN_005d5fb0(uVar3);
        uVar3 = FUN_0064c8a0(0,0);
        (**(code **)(**(int **)(param_1 + 4) + 0xb8))(uVar3,param_2,1);
      }
      else {
        iVar4 = local_124;
        iVar6 = local_120;
        FUN_005dcb00(param_2,local_124,local_120);
        FUN_005d5cf0(iVar4,iVar6);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

