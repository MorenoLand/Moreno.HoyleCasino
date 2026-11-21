// FUN_00403630  00403630

void __fastcall FUN_00403630(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d6f1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    pvVar2 = operator_new(0x84);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00402ed0();
    }
    *(undefined4 *)(param_1 + 0x1bc) = local_20;
  }
  local_8 = 0xffffffff;
  *(int *)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
  FUN_00584ed0(0x30d4cb,0x30d4cc,0x30d4cf);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))(uVar1);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))(0xc9,0x3a);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x78))(0xf,0x159);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x6c))(5);
  FUN_00585010();
  FUN_005f62f0(0);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x74))();
  ExceptionList = local_10;
  return;
}

