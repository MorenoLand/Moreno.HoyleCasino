// FUN_0052e540  0052e540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052e540(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*DAT_00793394 + 0x38))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(**(int **)(DAT_00793388 + 4) + 4))(1);
  if ((param_2 == 0) && (param_3 != 0)) {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18ab0,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x114));
    if (iVar1 == 1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x44))(0x32,*(undefined4 *)(param_1 + 0x100));
    }
    else {
      (**(code **)(**(int **)(param_1 + 8) + 0x44))(0,*(undefined4 *)(param_1 + 0x100));
    }
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a96,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x118));
    (**(code **)(**(int **)(param_1 + 8) + 0x44))(0,*(undefined4 *)(param_1 + 0x100));
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 8) + 0x74))();
  pvVar2 = operator_new(0x20);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_006010a0(*(undefined4 *)(DAT_00793388 + 4));
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_24);
  ExceptionList = local_10;
  return;
}

