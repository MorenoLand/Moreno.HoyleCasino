// FUN_005ff5a0  005ff5a0

void __thiscall FUN_005ff5a0(int param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa7be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x210) == 0) {
    pvVar2 = operator_new(0x10);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0060c5f0();
    }
    *(undefined4 *)(param_1 + 0x210) = local_20;
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_0060c9e0(param_2);
  if (cVar1 == '\0') {
    FUN_0060c840(param_2);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  }
  ExceptionList = local_10;
  return;
}

