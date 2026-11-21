// FUN_0051a460  0051a460

void __fastcall FUN_0051a460(int param_1)

{
  int iVar1;
  int *piVar2;
  char local_8c [108];
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_20 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  local_c = FUN_00520d60();
  for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
    local_1c = local_c + 4 + local_10 * 0x688;
    iVar1 = *(int *)(param_1 + 0x1bc + local_10 * 4);
    sprintf(local_8c,"%d",*(undefined4 *)(local_1c + 0x3e0));
    piVar2 = (int *)FUN_005fb550(iVar1);
    (**(code **)(*piVar2 + 0xb4))(local_8c);
    if (*(int *)(local_1c + 0x3e0) < 1) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_00686cc0();
    }
    sprintf(local_8c,"%d",local_8);
    piVar2 = (int *)FUN_005fb550(iVar1 + 1);
    (**(code **)(*piVar2 + 0xb4))(local_8c);
    if (*(int *)(local_1c + 0x3ec) < 1) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_00686cc0();
    }
    sprintf(local_8c,"%d",local_8);
    piVar2 = (int *)FUN_005fb550(iVar1 + 2);
    (**(code **)(*piVar2 + 0xb4))(local_8c);
    local_18 = *(undefined4 *)(local_1c + 0x3f0);
    local_14 = 0;
    FUN_0064c8d0(local_18,0,local_8c,1,1,1);
    piVar2 = (int *)FUN_005fb550(iVar1 + 3);
    (**(code **)(*piVar2 + 0xb4))(local_8c);
  }
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

