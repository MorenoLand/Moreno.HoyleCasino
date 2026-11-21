// FUN_0062aa90  0062aa90

void __thiscall FUN_0062aa90(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = FUN_0062ac30();
  while ((local_8 != 0 && (param_2 != local_8))) {
    local_8 = FUN_0062ace0();
  }
  if (local_8 == param_2) {
    FUN_0062aae0(param_3,*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

