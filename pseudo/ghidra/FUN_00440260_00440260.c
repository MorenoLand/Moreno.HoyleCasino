// FUN_00440260  00440260

void __fastcall FUN_00440260(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_18 [12];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_00445a90(0);
  uVar2 = FUN_0064c8a0(uVar1);
  FUN_0064c8d0(uVar2,local_18,1,1,1);
  (**(code **)(**(int **)(param_1 + 0x98) + 0xb4))(local_18);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_0043fc80(local_8);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

