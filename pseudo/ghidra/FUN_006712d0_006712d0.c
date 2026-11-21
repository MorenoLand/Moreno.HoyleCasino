// FUN_006712d0  006712d0

void __fastcall FUN_006712d0(int param_1)

{
  uint uVar1;
  char *_Source;
  void *pvVar2;
  undefined **local_48;
  undefined4 local_44;
  undefined *local_34 [7];
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad149;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar1;
  FUN_005eae80(0x27ac46,0,0,5,0xffffffff);
  _Source = (char *)FUN_00630f40("SID_SHELL_REWARDS_NORECENTTRIGGER",uVar1);
  strcpy((char *)local_34,_Source);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x178 + local_14 * 4) = local_44;
    if (local_14 == 0) {
      local_48 = local_34;
    }
    else {
      local_48 = &PTR_006b27f8;
    }
    FUN_005ec8f0(local_48,0x4d,200,0xf,0x251,local_14 * -0xb + 0x245,0x14,0x30,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x178 + local_14 * 4) + 0x70))();
  }
  FUN_00671430(0);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

