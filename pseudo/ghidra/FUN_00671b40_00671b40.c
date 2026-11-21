// FUN_00671b40  00671b40

void __fastcall FUN_00671b40(int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad1e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xdc))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + -1;
    if (*(int *)(param_1 + 0x1e4) == 0) {
      pvVar2 = operator_new(0x20);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_006010a0(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_20);
      *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x178) = 7;
      iVar3 = FUN_0062fbf0(10);
      *(int *)(param_1 + 0x1e4) = iVar3 * 0x3c + 300;
    }
    if ((*(int *)(*(int *)(param_1 + 0x1e0) + 0x180) == 0) && (iVar3 = FUN_005eb220(), iVar3 != 0))
    {
      (**(code **)(**(int **)(param_1 + 0x1e0) + 0xb0))(0);
    }
  }
  ExceptionList = local_10;
  return;
}

