// FUN_00627b10  00627b10

undefined4 __fastcall FUN_00627b10(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1[0x15] < param_1[0x17]) {
    local_c = param_1[0x15];
  }
  else {
    local_c = param_1[0x17];
  }
  if (param_1[0x14] < param_1[0x16]) {
    local_10 = param_1[0x14];
  }
  else {
    local_10 = param_1[0x16];
  }
  FUN_005f5110(local_10,local_c);
  if (param_1[0x16] < param_1[0x14]) {
    local_14 = param_1[0x14];
  }
  else {
    local_14 = param_1[0x16];
  }
  iVar1 = FUN_005f51a0();
  FUN_005f5530(local_14 - iVar1);
  if (param_1[0x17] < param_1[0x15]) {
    iVar1 = param_1[0x15];
  }
  else {
    iVar1 = param_1[0x17];
  }
  iVar2 = FUN_005f51f0(iVar1);
  FUN_005f5570(iVar1 - iVar2);
  (**(code **)(*param_1 + 0xac))();
  return 1;
}

