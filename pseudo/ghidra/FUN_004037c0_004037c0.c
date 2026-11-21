// FUN_004037c0  004037c0

void __thiscall FUN_004037c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_18;
  int local_c;
  
  if ((param_2 < 0) || (0x62 < param_2)) {
    FUN_005e9f20("(0<=start) && (start<=98)","..\\Casino\\baccaratdisplay.cpp",0x369);
  }
  puVar1 = (undefined4 *)(DAT_007902f0 + 0xbc + *(int *)(param_1 + 0x1c0) * 0x338);
  FUN_00403a30(3,*puVar1,0);
  FUN_00403a30(5,puVar1[1],0);
  FUN_00403a30(7,puVar1[3],0);
  FUN_00403a30(9,puVar1[4],0);
  FUN_00403a30(0xb,puVar1[5],0);
  for (local_c = 0; local_c < 0x13; local_c = local_c + 1) {
    FUN_00403ad0(local_c + 0x14,&PTR_006b27f8,0);
    FUN_00403ad0(local_c + 0x28,&PTR_006b27f8,0);
    FUN_00403b70(local_c + 0x28);
    FUN_00403ad0(local_c + 0x3c,&PTR_006b27f8,0);
    FUN_00403b70(local_c + 0x3c);
  }
  local_c = 0;
  for (local_18 = param_2; (local_c < 0x13 && (local_18 < 99)); local_18 = local_18 + 1) {
    uVar2 = puVar1[local_18 + 8];
    uVar3 = puVar1[local_18 + 0x6b];
    FUN_00403a30(local_c + 0x14,param_2 + 1 + local_c,0);
    if ((uVar2 & 4) != 0) {
      uVar4 = (uint)((uVar2 & 0x10) != 0);
      uVar5 = FUN_00630f40("SID_BACCARAT_TIE_MARKING",uVar4);
      FUN_00403ad0(local_c + 0x28,uVar5,uVar4);
      uVar4 = (uint)((uVar2 & 0x10) != 0);
      uVar5 = FUN_00630f40("SID_BACCARAT_TIE_MARKING",uVar4);
      FUN_00403ad0(local_c + 0x3c,uVar5,uVar4);
    }
    if ((uVar2 & 1) != 0) {
      if ((uVar2 & 8) != 0) {
        FUN_00403b40(local_c + 0x28);
      }
      FUN_00403a30(local_c + 0x28,uVar3,(uVar2 & 0x10) != 0);
    }
    if ((uVar2 & 2) != 0) {
      if ((uVar2 & 8) != 0) {
        FUN_00403b40(local_c + 0x3c);
      }
      FUN_00403a30(local_c + 0x3c,uVar3,(uVar2 & 0x10) != 0);
    }
    local_c = local_c + 1;
  }
  return;
}

