// FUN_00426ad0  00426ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00426ad0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = param_2 * 2;
  if (param_3 == '\0') {
    local_8 = *(undefined4 *)(*(int *)(param_1 + 8 + param_2 * 8) + 0x48 + param_2 * 0x20);
    local_10 = *(undefined4 *)(*(int *)(param_1 + 8 + param_2 * 8) + param_2 * 0x20 + 0x4c);
    local_18 = FUN_0064c8a0(local_8,local_10);
    FUN_0064c560(_PTR_006b3740);
    (**(code **)(**(int **)(param_1 + 0xc + local_c * 4) + 0xc4))(&local_18,0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb0 + param_2 * 4) = 4;
    uVar2 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_2,uVar2);
    FUN_005d6050(uVar2);
    FUN_00427af0(param_2,0);
    iVar1 = FUN_005dcb00();
    *(undefined1 *)(iVar1 + 0x4a2) = 1;
  }
  *(undefined1 *)(DAT_00790358 + param_2 + 0xa9) = 0;
  return;
}

