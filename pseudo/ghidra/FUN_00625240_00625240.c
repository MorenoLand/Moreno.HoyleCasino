// FUN_00625240  00625240

void __thiscall FUN_00625240(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  if (param_2 == -1) {
    param_2 = DAT_00795f9c;
  }
  local_8 = FUN_0062ac30(param_1);
  while ((local_8 != 0 && (param_2 < DAT_007950a8))) {
    FUN_006042b0(param_2);
    local_8 = FUN_0062ace0();
  }
  return;
}

