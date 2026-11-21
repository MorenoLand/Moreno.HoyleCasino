// FUN_0062ab60  0062ab60

void __thiscall FUN_0062ab60(int param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = FUN_0062ac30();
  while ((local_8 != 0 && (param_2 != local_8))) {
    local_8 = FUN_0062ace0();
  }
  if (local_8 == param_2) {
    FUN_0062abb0(*(int *)(param_1 + 0x14) + -1);
  }
  return;
}

