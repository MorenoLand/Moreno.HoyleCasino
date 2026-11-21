// FUN_00624840  00624840

void FUN_00624840(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = abs(param_9 - param_7);
  iVar2 = abs(param_5 - param_3);
  iVar4 = param_9 - param_7;
  bVar5 = param_9 != param_7;
  iVar3 = param_5 - param_3;
  bVar6 = param_5 != param_3;
  local_1c = iVar2 * 2 - iVar1;
  for (local_18 = 0; local_18 <= iVar1; local_18 = local_18 + 1) {
    FUN_00624930(param_1,param_6,param_8,param_2,param_4,param_3,param_7);
    for (; -1 < local_1c; local_1c = local_1c + iVar1 * -2) {
      param_3 = (short)((ushort)(bVar6 && -1 < iVar3) * 2 + -1) + param_3;
    }
    param_7 = (short)((ushort)(bVar5 && -1 < iVar4) * 2 + -1) + param_7;
    local_1c = local_1c + iVar2 * 2;
  }
  return;
}

