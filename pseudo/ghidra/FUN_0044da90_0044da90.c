// FUN_0044da90  0044da90

void __thiscall FUN_0044da90(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 local_20 [6];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar5 = 0;
  uVar3 = FUN_0044ce00(param_2);
  local_8 = FUN_00462ba0(param_1 + 0x98 + param_2 * 10,uVar3,uVar5);
  if ((local_8 == 2) && (iVar4 = FUN_004639e0(param_1 + 0x98 + param_2 * 10,5), iVar4 < 10)) {
    local_8 = 1;
  }
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    if ((*(int *)(param_1 + 0xd4) == 1) &&
       (sVar1 = FUN_0044cd70(param_2,local_c), sVar1 == *(short *)(param_1 + 0xc0))) {
      local_20[local_c] = 0;
    }
    else if ((*(int *)(param_1 + 0xd4) == 2) &&
            (sVar1 = FUN_0044cd70(param_2,local_c), sVar1 == *(short *)(param_1 + 0xc2))) {
      local_20[local_c] = 0;
    }
    else {
      uVar2 = FUN_0044cd70(param_2,local_c);
      local_20[local_c] = uVar2;
    }
  }
  uVar3 = 0;
  iVar4 = FUN_0044ce00(param_2);
  local_10 = FUN_00462ba0(local_20,iVar4 + -1,uVar3);
  if ((local_10 == 2) && (iVar4 = FUN_004639e0(param_1 + 0x98 + param_2 * 10,5), iVar4 < 10)) {
    local_10 = 1;
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

