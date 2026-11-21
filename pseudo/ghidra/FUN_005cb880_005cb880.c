// FUN_005cb880  005cb880

undefined8 * __thiscall FUN_005cb880(int param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  
  local_18 = FUN_0064c8a0(0,0);
  local_10 = local_18;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = param_1 + 0x48 + param_3 * 0x20;
    local_20 = *(undefined4 *)(iVar1 + local_8 * 8);
    local_1c = *(undefined4 *)(iVar1 + 4 + local_8 * 8);
    puVar2 = (undefined8 *)FUN_0064c5c0(local_28,local_20,local_1c);
    local_10 = *puVar2;
  }
  *param_2 = local_10;
  return param_2;
}

