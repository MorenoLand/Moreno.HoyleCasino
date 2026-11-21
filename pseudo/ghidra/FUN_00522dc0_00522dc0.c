// FUN_00522dc0  00522dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00522dc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3faa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00528bd0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  iVar1 = *(int *)(&DAT_00721cd8 + iVar2 * 8);
  iVar2 = *(int *)(&DAT_00721cdc + iVar2 * 8);
  uVar3 = FUN_0062fbf0(600,0x1c2);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x44))(uVar3);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
  pvVar4 = operator_new(0x44);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_00524280(*(undefined4 *)(DAT_0162ee80 + 4),iVar1 + -0x1f,iVar2 + -0x23,200);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(local_34 + 0x38) = 0x14;
  *(float *)(local_34 + 0x3c) = 1.0 / (float)*(int *)(local_34 + 0x38);
  *(undefined4 *)(local_34 + 0x34) = _DAT_006c2fe4;
  FUN_005f6050(local_34);
  ExceptionList = local_10;
  return;
}

