// FUN_00577da0  00577da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00577da0(int *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6526;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 4))(1);
    FUN_00576860();
    FUN_00576ce0(0);
    FUN_005750b0(param_1);
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(*(int *)(DAT_0079345c + 0x10) + 0x178) = 6;
    FUN_005eaf00(0x1601d);
    pvVar3 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_3c);
    if (((param_1[8] == 0) && (param_1[9] == 0)) &&
       (cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))(), cVar1 != '\0')) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x1925b,0,0,10,3,0x3f800000,_DAT_006b3654,0);
    }
    (**(code **)(**(int **)(DAT_0079345c + 0x38 + param_1[8] * 4) + 0x74))();
    if (param_1[9] < 2) {
      uVar4 = FUN_0062fbf0(8);
      (**(code **)(**(int **)(DAT_0079345c + 0x38 + param_1[8] * 4) + 0xb0))(uVar4);
    }
    else {
      (**(code **)(**(int **)(DAT_0079345c + 0x38 + param_1[8] * 4) + 0xb0))
                (*(undefined4 *)(DAT_0079345c + 0x80 + param_1[8] * 4));
    }
    pvVar3 = operator_new(0x1c);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_00577b80(1,param_1);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_40);
    if ((param_1[9] < 2) || (param_1[8] == 0)) {
      if (param_1[8] == 0) {
        pvVar3 = operator_new(0x1c);
        local_8 = 3;
        if (pvVar3 == (void *)0x0) {
          local_48 = 0;
        }
        else {
          local_48 = FUN_00577b80(0,0);
        }
        local_8 = 0xffffffff;
        FUN_005f5d50(local_48);
      }
      else {
        pvVar3 = operator_new(0x1c);
        local_8 = 2;
        if (pvVar3 == (void *)0x0) {
          local_44 = 0;
        }
        else {
          local_44 = FUN_00577b80(0,0);
        }
        local_8 = 0xffffffff;
        FUN_005f5d50(local_44);
      }
    }
    param_1[8] = param_1[8] + 1;
    if (2 < param_1[8]) {
      param_1[8] = 0;
      param_1[9] = param_1[9] + 1;
    }
    if (param_1[9] < 3) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
  }
  else if (iVar2 == 2) {
    (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(4);
    FUN_00575190(*(undefined4 *)(DAT_00793458 + 4));
    FUN_005fc420(0);
  }
  ExceptionList = local_10;
  return;
}

