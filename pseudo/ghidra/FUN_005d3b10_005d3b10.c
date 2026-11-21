// FUN_005d3b10  005d3b10

void __fastcall FUN_005d3b10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 local_ac;
  undefined4 local_9c;
  char acStack_80 [28];
  uint local_64;
  int local_60;
  int local_5c;
  int local_58 [18];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8eba;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_64 = uVar1;
  ExceptionList = &local_10;
  local_60 = 0;
  local_58[9] = 0;
  local_58[10] = 0xb;
  local_58[0xb] = 2;
  local_58[0xc] = 0x10;
  local_58[0xd] = 0xb;
  local_58[0xe] = 10;
  local_58[0xf] = 7;
  local_58[0x10] = 0x11;
  local_58[0x11] = 0x18;
  local_58[0] = -1;
  local_58[1] = 0x30e878;
  local_58[2] = 0x30e864;
  local_58[3] = 0x30e83c;
  local_58[4] = 0x30e850;
  local_58[5] = 0x30e88c;
  local_58[6] = 0x30e86e;
  local_58[7] = 0x30e828;
  local_58[8] = 0x30e80a;
  for (local_5c = 0; local_5c < 0x19; local_5c = local_5c + 1) {
    iVar2 = FUN_005fb2b0(local_5c + 10);
    if (iVar2 != 0) {
      uVar5 = 0;
      FUN_005fb2b0(local_5c + 10);
      FUN_005f5d50(uVar5);
      piVar3 = (int *)FUN_005fb2b0(local_5c + 10);
      (**(code **)(*piVar3 + 0x70))();
      FUN_005fbc80(0,local_5c + 10);
    }
  }
  for (local_5c = 0; local_5c < local_58[*(int *)(param_1 + 0x80) + 9]; local_5c = local_5c + 1) {
    pvVar4 = operator_new(0x184);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_9c = 0;
    }
    else {
      local_9c = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    FUN_005f9ce0(local_9c,local_5c + 10,local_58[*(int *)(param_1 + 0x80)] + local_5c,0,0,1,0,0xff,0
                );
    piVar3 = (int *)FUN_005fb2b0(local_5c + 10);
    (**(code **)(*piVar3 + 0x70))();
  }
  local_60 = FUN_0062fc30(1,local_58[*(int *)(param_1 + 0x80) + 9] / 3,uVar1);
  for (local_5c = 0; local_5c < 0x19; local_5c = local_5c + 1) {
    acStack_80[local_5c] = '\0';
  }
  for (local_5c = 0; local_5c < local_60; local_5c = local_5c + 1) {
    iVar2 = FUN_0062fbf0(local_58[*(int *)(param_1 + 0x80) + 9]);
    acStack_80[iVar2] = '\x01';
  }
  for (local_5c = 0; local_5c < local_58[*(int *)(param_1 + 0x80) + 9]; local_5c = local_5c + 1) {
    if (acStack_80[local_5c] != '\0') {
      piVar3 = (int *)FUN_005fb2b0(local_5c + 10);
      (**(code **)(*piVar3 + 0xb0))(0);
      piVar3 = (int *)FUN_005fb2b0(local_5c + 10);
      (**(code **)(*piVar3 + 0x74))();
      uVar5 = FUN_0062fc30(4,8);
      iVar2 = FUN_005fb2b0(local_5c + 10);
      *(undefined4 *)(iVar2 + 0x178) = uVar5;
      pvVar4 = operator_new(0x20);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_ac = 0;
      }
      else {
        local_ac = FUN_006010a0(0);
      }
      local_8 = 0xffffffff;
      FUN_005fb2b0(local_5c + 10);
      FUN_005f5d50(local_ac);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_64 ^ (uint)&stack0xfffffffc);
  return;
}

