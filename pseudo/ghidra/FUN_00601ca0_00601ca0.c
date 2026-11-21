// FUN_00601ca0  00601ca0

void __thiscall FUN_00601ca0(int *param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa8d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(uint *)(param_2 + 0x1c) & 0x20) == 0) ||
     (cVar1 = FUN_00602f20(DAT_00781870 ^ (uint)&stack0xfffffffc), cVar1 != '\0')) {
    *(undefined1 *)(param_2 + 4) = 1;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_005f89f0(param_1);
    (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,1);
    (**(code **)(*param_1 + 0xd8))(1);
    if (param_1[0x6b] != -1) {
      pvVar2 = operator_new(0x24);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00603300(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5df0(local_20);
    }
  }
  ExceptionList = local_10;
  return;
}

