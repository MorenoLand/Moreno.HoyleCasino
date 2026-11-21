// FUN_0062e4b0  0062e4b0

void __thiscall
FUN_0062e4b0(int param_1,undefined4 param_2,ushort param_3,short param_4,ushort param_5,
            ushort param_6,undefined2 param_7,short param_8,undefined4 param_9,ushort param_10)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 local_8;
  
  local_8 = (uint)param_5 * *(int *)(param_1 + 0x418) + *(int *)(param_1 + 0x408) +
            (uint)param_6 * (uint)param_10;
  while (param_8 != 0) {
    iVar1 = FUN_006238d0(param_4);
    iVar2 = FUN_00623930();
    FUN_0062e380(iVar1 + (uint)param_3 * iVar2,local_8,CONCAT22(extraout_var,param_7));
    local_8 = (uint)param_10 + local_8;
    param_4 = param_4 + 1;
    param_8 = param_8 + -1;
  }
  return;
}

