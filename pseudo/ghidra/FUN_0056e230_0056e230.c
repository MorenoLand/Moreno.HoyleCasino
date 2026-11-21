// FUN_0056e230  0056e230

void __fastcall FUN_0056e230(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_48;
  void *local_38 [11];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5e40;
  local_38[10] = ExceptionList;
  ExceptionList = local_38 + 10;
  local_38[0] = (void *)0x4;
  local_38[1] = (void *)0x3;
  local_38[2] = (void *)0x0;
  local_38[3] = (void *)0x1;
  local_38[4] = (void *)0x2;
  local_38[5] = (void *)0x5;
  local_38[6] = (void *)0x6;
  local_38[7] = (void *)0x7;
  local_38[8] = (void *)0xffffffff;
  local_38[9] = (void *)0xffffffff;
  iVar1 = FUN_0056f0d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(**(int **)(param_1 + 0x68) + 0xb0))(local_38[iVar1]);
  pvVar2 = operator_new(0x28);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_00601110(0,0,1,0,0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_48);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x74))();
  ExceptionList = local_38[10];
  return;
}

